# largest of three numbers

a = int(input("enter first num: "))
b = int(input("enter second num: "))
c = int(input("enter third num: "))

if a>b and a>c:
    print("a is big")
elif b>a and b>c:
    print("b is big")
elif c>a:
    print("c is big")
else:
    print("all are equal")