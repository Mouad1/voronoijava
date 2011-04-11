#!BPY
 
__doc__ = """
SimplePlottingExample.py
 
Example demonstrating the following techniques in Blender 2.48 to
generate a plot of x-y data:
1) Joining meshes
2) Use of the transform matrix
3) Use of material properties to control how objects are rendered
4) Delete (unlink) of objects in a scene
5) Use of cross products to generate a basis for the transform matrix
6) Using python to render an image
7) Using python to save the rendered image to disk
8) Use of Blender Vector and Matrix classes
9) Defining a function in Python
10) Using Python to parse a file
 
This script is executed at the command line by:
>blender -P OrientationExample.py
"""
__author__ = "edt"
__version__ = "1.0 2009/06/22"
__url__="Website, dataOrigami.blogspot.com"
 
 
##############################################################
# load the modules used in the script
import Blender
import bpy
from Blender import *
from Blender.Scene import Render
from Blender import Text
from Blender import Mathutils
from Blender.Mathutils import *
import math
 
##############################################################
# define function(s)

def translate(p,r=0.1):
 me=Mesh.Primitives.UVsphere(32,32,r)
 dir=Vector(p)
 A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    [dir[0],dir[1],dir[2],1])
 
 # apply the transform to the cylinder  
 me.transform(A,True)
 return me

 
def lineSegMe(p1,p2,dia=0.1,verts=16):
 """
 This function returns a mesh which forms a line from point p1 to p2.
 The points can be passes as either blender vectors or lists of [x,y,z] points.
 This line is cylinder which goes from point p1 to p2.
 Optionally the diameter and number of vertices used to describe the line are passed.
 -------------------
 The line is formed by creating a cylinder with a length equal to the distance
 point p1 and p2. The line is then oriented using the transform matrix to rotate
 and translate the cylinder.
 """
 # use the class constructors from Blender to form vectors for p1 and p2
 p1 = Vector(p1)
 p2 = Vector(p2)
  
 # form a vector that points in the direction from p1 to p2
 dir = p2-p1                 
  
 # get the length of the line we want that goes from p1 to p2
 length = dir.length
 
 # use Mesh.Primitives.Cylinder to create a mesh for the line
 print dia 
 me = Mesh.Primitives.Cylinder(verts,dia,length)
  
 ###############
 # in the next few steps, the direction vector is used to form a basis
 #      see http://en.wikipedia.org/wiki/Basis_(linear_algebra)
 # which allows us to create a transform matrix to rotate the cylinder
 # along the direction we want. The basic idea is that the vector from
 # p1 to p2 points in the direction we want. The cylinder created by
 # Mesh.Primitives.Cylinder is oriented along the z-axis. To rotate the
 # cylinder, we  # rotate the z-axis in this direction. To completely specify
 # how to rotate, we need to provide information on how to rotate the x and y axes.
 # To define this, a matrix which is orthonormal (see http://en.wikipedia.org/wiki/Orthonormal)
 # is created from the direction vector. To create the other vectors in the
 # orthonormal basis, cross products are used to find orthogonal vectors.
 #
 # use the normalize function to set the length of the direction vector to 1
 dir.normalize()
 u = dir
 uu = Vector([0,0,1.0])
 if abs(AngleBetweenVecs(u,uu))>1e-6:
  # the direction of the line is different
  # from the z-axis
  # find the orthonormal basis
  v = CrossVecs(u,uu)
  w = CrossVecs(u,v)
  v.normalize()
  w.normalize()
  # form the transform matrix:
  #   > The first 3 rows and 3 columns form
  #   a rotation matrix because the any vertex transformed by this
  #   matrix will be the same distance from the origin as the original
  #   vertex. If this property is not preserved, then any shape formed
  #   will be skewed and scaled by the transform.
  #   > The first 3 columns in the last row define the translation
  #   applied to any vertex. In this function, the translation move the
  #   moves the end of the cylinder to the origin, then moves the end
  #   to p1.
  A = Matrix(
    [w[0],w[1],w[2],0],
    [v[0],v[1],v[2],0],
    [u[0],u[1],u[2],0],
    [dir[0]/2.0*length+p1[0],dir[1]/2.0*length+p1[1],dir[2]/2.0*length+p1[2],1])
 else:
  # the direction of the line is parallel to the z-axis
  # see the notes above on how the matrix is formed.
  A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    [dir[0]/2.0*length+p1[0],dir[1]/2.0*length+p1[1],dir[2]/2.0*length+p1[2],1])
 
 # apply the transform to the cylinder  
 me.transform(A,True)
 return me
 

 
##############################################################
# Get rid of the lamp and cube from the default scene
scene = Scene.GetCurrent()

for ob in scene.objects:
   if (cmp(ob.getName(),'Cube')==0):
    scene.objects.unlink(ob)

#execfile("splineX.py")

execfile('C:\Users\decomite\Pictures\povray\chateau.py')

 
#######################################
# render the image and save the image
#

context = scene.getRenderingContext()
# enable seperate window for rendering
Render.EnableDispWin()
context.imageType = Render.JPEG
# draw the image
context.render()
# save the image to disk
# to the location specified by RenderPath
# by default this will be a jpg file
context.saveRenderedImage('PlotExampleQND.jpg')

Window.RedrawAll()
#
########################################