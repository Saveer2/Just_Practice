import random
import string

while True:
    print("\t** Password Generator!!")

    length = int(input("* Enter length of the password : "))

    letters = string.ascii_letters
    digits = string.digits
    symbols = string.punctuation

    all_chars = letters+digits+symbols
    password = ""

    for x in range(length):
        password += random.choice(all_chars)
    print("** Your Password : ",password)
    
    ch = input("Do you want to continue (y/n): ")
    if ch == "y":
        continue
    else:
        break
