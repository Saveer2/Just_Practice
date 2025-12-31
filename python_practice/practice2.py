#strings
str1 = "Hello Sam"
str2 = "How are you?"

print(len(str1))
print(len(str2))

str3 = "Hello!! \n How are you??" # here \n is used to go on next line
print(str3) # \t is used to do tab


#concat
print(str1+str2)  

#slicing
print(str1[1:3])

#slicing for negative index
#backward counting starts with -1, -1 and so on
print(str1[-3:-1])

#string functions
str4 = "I am a coder"

#it's gives true only if the string ends with that word
print(str4.endswith("er"))

#returns 1st index of 1st occurance
print(str4.find("am"))

#counts the occurance of substr
print(str4.count("am"))
