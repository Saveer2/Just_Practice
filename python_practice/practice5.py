#funtions
print("\n\n ** funtions")

#creating a funtion
def my_function():
    print("Hello World")

#calling a funtion
my_function()

#return values
def my_funtion1():
    return "Hello return"

message = my_funtion1()
print(message)

#argument
def my_funtion2(name,age):
    print("Name :",name," And Age :",age)

my_funtion2("sam",20)

#defauly parameter values
def my_function2(name = "friend"):
    print("Hello",name)
    
my_function2("emil")
my_function2("Sam")
my_function2("Tom")