#dates
import datetime

x = datetime.datetime.now()
print(x)

y = datetime.datetime.now()
print(y.strftime("%B"))

z = datetime.datetime.now()
print(z.strftime("%A"))

#math
import math
a = 10
b =20
m = max(a,b)
min = min(a,b)
print("Max : ",m)
print("Min : ",min)

x = pow(a,b)
print("Pow : ",x)

y = math.sqrt(a)
print("Sqrt of a ",y)

z = math.pi
print("Pi : ",z)

#JSON
"""JSON is a syntax for storing and exchanging data.

JSON is text, written with JavaScript object notation."""
import json

x ='{"name":"John", "age":30,"city":"London"}'
#If you have a JSON string, you can parse it by using the json.loads() method.
y = json.loads(x)
print(y["age"])

z = json.loads(x)
print(z["name"])
print(z["age"],z["name"])
print("Name :",z["name"],"\nAge :",z["age"],"\nCity :",z["city"])
#Convert from Python to JSON

x = {
    "name":"Sam",
    "Age":30,
    "City":"New York"
}
y = json.dumps(x)
print(y)

x = {
    "name": "John",
    "age": 30,
    "married": True,
    "divorced": False,
    "children": ("Ann","Billy"),
    "pets": None,
    "cars": [{"model": "BMW 230", "mpg": 27.5},{"model": "Ford Edge", "mpg": 24.1}
  ]
}

print(json.dumps(x))

#OOPs concepts
#classes and objects

class Person:
    pass

p1 = Person()
p1.name = "sam"
p1.age = 50

print(p1.name)
print(p1.age)

#___init___ method
#The __init__() method is used to assign values to object properties, or to perform operations that are necessary when the object is being created.
class Person1:
    def __init__(self,name,age):
        self.name = name
        self.age = age

p2 = Person1("Sam",50)

print(p1.name)
print(p1.age)

#multiple para
class Person2:
    def __init__(self,name,age,gender,city,country):
        self.name = name
        self.age = age
        self.gender = gender
        self.city = city
        self.country = country

p3 = Person2("Sam",50,"M","New York","USA")
print(p3.name," ",p3.age," ",p3.gender," ",p3.city," ",p3.country)

#self parameter
#The self parameter is a reference to the current instance of the class.It is used to access properties and methods that belong to the class.
class Person3:
    def __init__(Self,name,age):
        Self.name = name
        Self.age = age

    def greet(Self):
        print("Hello, My name is " +Self.name)

p4 = Person3("Sam",50)
p4.greet()
#Without self, Python would not know which object's properties you want to access

class Person4:
    def __init__(self,name):
        self.name = name 
    def Print(self):
        print("Name : "+self.name)
p5 =Person4("sam")
p51 = Person4("Loid")

p5.Print()
p51.Print()

class Person5:
    def __init__(myobject,name,age):
        myobject.name = name
        myobject.age = age
    
    def greet(abc):
        print("Hello, "+abc.name)

p6 = Person5("Sam",50)
p6.greet()

#calling methods with self
class Person:
  def __init__(self, name):
    self.name = name

  def greet(self):
    return "Hello, " + self.name

  def welcome(self):
    message = self.greet()
    print(message + "! Welcome to our website.")

p1 = Person("Tobias")
p1.welcome()




