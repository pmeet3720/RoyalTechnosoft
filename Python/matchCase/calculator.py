""" build calculator using match case"""

choice = 0
flag = 1


a=int(input("enter the num  1: "))
b=int(input("enter the num  2: "))

while True:
    print("welcome  my calculator")
    print("1.addition ")
    print("2.subtraction ")
    print("3.multiplication ")
    print("4.division ")
    print("5.new numbers ")
    print("6.exit")

    choice =int(input("enter the choice  : "))
    match (choice):
        case 1:
            print("addition of two num is : ",a+b)
        case 2:
            print("subtraction of two num is : ",a-b)
        case 3:
            print("multiplication of two num is : ",a*b)
        case 4:
            print("division id two numbers is : ",a/b)
        case 5:
            a=int(input("enter the num  1: "))
            b=int(input("enter the num  2: "))           
        case 6:
            flag = 0
    if(flag==0):
        break
