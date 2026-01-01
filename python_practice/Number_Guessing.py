import random

while True:
    print("\t** Number Guessing!!")
    a = int(input("Enter a random number between 0-10 : "))

    b = random.randint(0,10)

    print("Your Number : ",a,"\nRandom Number : ",b)
    if a==b:
        print("* Your number is equal to random value!!")
    elif a>b:
        print("* Your number is greater than random value!!")
    else :
        print("* Your number is smaller than random value!!")

    ch = input("Do you want to continue (y/n): ")
    if ch == "y":
        continue
    else:
        break