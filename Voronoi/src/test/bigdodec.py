
 
##############################################################
# load the modules used in the script
import Blender
import bpy
import BPyAddMesh
from Blender import *
from Blender.Scene import Render

##############################################################

# Get rid of the lamp and cube from the default scene
scene = Scene.GetCurrent()

for ob in scene.objects:
   if (cmp(ob.getName(),'Cube')==0):
    scene.objects.unlink(ob)

execfile('C:/users/decomite/pictures/povray/bigdodec.txt')

"""
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
"""
Window.RedrawAll()
#
########################################