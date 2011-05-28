from Blender import Node
class MyNode(Node.Scripted):
	def __init__(self,sockets):
		sockets.input=[Node.Socket('Coords',val=3*[1.0])]
		sockets.output=[Node.Socket('Color',val=4*[1.0])]
		
	def __call__(self):
		x,y,z=self.input.Coords
		self.output.Color=[abs(x),abs(y),abs(z),1.0]