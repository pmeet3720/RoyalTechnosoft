# print the factorial  of num
n = int(input("enter the number: "))

fact = 1

for i in range(1,n+1):
    fact = fact * i

print(f"{n}!: {fact}")
