#inheritance
#Inheritance allows us to define a class that inherits all the methods and properties from another class.

class Person:
    def __init__(self,firstname,lastname):
        self.firstnames = firstname
        self.lastnames = lastname
    
    def printname(self):
        print("Full name : ",self.firstnames,self.lastnames)

class Person2(Person):
    pass

a = Person("Sam","JJ")
b = Person2("JJ","Sam")

a.printname()
b.printname()

#Python also has a super() function that will make the child class inherit all the methods and properties from its parent:
class Parent:
    def __init__(self,name,amount):
        self.names = name
        self.amounts = amount

    def printname(self):
        print("Amount with Parent : ",self.amounts)

class Child(Parent):
    def __init__(self,name,amount):
        super().__init__(name,amount*2)

    def printam(self):
        print("Amount with child : ",self.amounts)

x = Parent("Sam",1000000)
y = Child("jj",1000000)

x.printname()
y.printname()
#The child's __init__() function overrides the inheritance of the parent's __init__() function.


#polymorphism
#Polymorphism is often used in Class methods, where we can have multiple classes with the same method name.

class car:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Drive!! ",self.brand,self.model)

class bike:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Drive!! ",self.brand,self.model)

class plane:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model
    
    def move(self):
        print("FLy!! ",self.brand,self.model)

car1 = car("Ford","Mustand")
bike1 = bike("Honda","Activa")
plane1 = plane("Boeing","747")

for x in (car1,bike1,plane1):
    x.move()

#inheritance with polymorphism
class CAR:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model
    
    def move(self):
        print("Drive!! ",self.brand,self.model)

class BIKE(CAR):
    def move(self):
        print("Drive!! ",self.brand,self.model)

class PLANE(CAR):
    def move(self):
        print("Fly!! ",self.brand,self.model)

c = CAR("Ford","Mustang")
b = BIKE("Ibiza","Touring 20")
a = PLANE("Boeing","747")

for x in (c,b,a):
    x.move()
