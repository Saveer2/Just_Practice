while True:
    print("\t** Simple Calculator **\n")

    print("Enter Both values : ")
    a = int(input("Enter Value Of A : "))
    b = int(input("Enter value of B : "))


    print("Enter Operations (1.add 2.sub 3.multiplay, 4.div) : ")
    ch = int(input("Enter your choice : "))
    if ch==1 or ch==2 or ch==3 or ch==4:
        match ch :
            case 1 :
                print("** Sum : ",a+b)
            case 2 : 
                print("** Substraction : ",a-b)
            case 3 :
                print("** Multiplication : ",a*b)
            case 4 :
                if b != 0:
                    print("** Division : ",a/b)
                else :
                    print("** Error, Division by zero!!")
    else:
        print("** Invalid choice!!")

    chh = input("Do you want to continue (y/n): ")
    if chh == "y":
        continue
    else :
        break

