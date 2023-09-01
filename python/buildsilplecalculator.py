exit = 0
while(exit == 0):
    a=int(input("enter first number:"))
    b=int(input("enter second nuber:"))
    sym = input("enter 'exit' to enter the operation:")
    
    if (sym == "+"):
        print(a+b)
    elif (sym == "-"):
        print(a-b)
    elif (sym == "*"):
        print(a*b)
    elif (sym == "/"):
        print(a/b)
    elif (sym=="exit"):
        break
    