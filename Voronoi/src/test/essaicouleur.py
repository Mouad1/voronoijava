from Blender import *
import bpy

# define vertices and faces for a pyramid
coords=[ [-1,-1,-1], [1,-1,-1], [1,1,-1], [-1,1,-1], [0,0,1] ]  
faces= [ [3,2,1,0], [0,1,4], [1,2,4], [2,3,4], [3,0,4] ]

#me = bpy.data.meshes.new('myMesh')          # create a new mesh
me=Mesh.Primitives.UVsphere(14,14,2)

#me.verts.extend(coords)          # add vertices to mesh
#me.faces.extend(faces)           # add faces to the mesh (also adds edges)

me.vertexColors = 1              # enable vertex colors 

faxes=me.faces
for f in faxes:
 for i2,d in enumerate(f.col):
  d.b=25
  d.r=25
  d.g=0	

#me.faces[1].col[0].r = 0      # make each vertex a different color
#me.faces[1].col[1].g = 1
#me.faces[1].col[2].b = 0

scn = bpy.data.scenes.active     # link object to current scene
ob = scn.objects.new(me, 'myObj')
