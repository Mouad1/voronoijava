### EXAMPLE PYTHON MODULE
# Define some variables:
numberone = 1
ageofqueen = 78

# define some functions
def printhello():
    print ("hello connard")
    
def timesfour(input):
    print (input * 4)
    
# define a class
class Piano:
    def __init__(self):
        self.type = "What type of piano? "
        self.height = "What height (in feet)? "
        self.price = "How much did it cost? "
        self.age = "How old is it (in years)? "
	
    def printdetails(self):
        print ("This piano is a/an " + self.height + " foot")
        print (self.type+"piano, " + self.age+ "years old and costing" + self.price + " dollars.")

class Position:
	def __init__(self,x,y,z):
		self.x=x
		self.y=y
		self.z=z
	def print(self):
		print(self.x+" "+self.y+" "+self.z)

