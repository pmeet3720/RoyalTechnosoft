# perfect num = sum of it's factors is equal to num itself
# 28 = 1,2,4,7,14 (1+2+4+7+14=28)
n = int(input("enter number: "))
q=0
r=0
sum=0

for i in range(1,n):
    if n%i==0:
        sum = sum + i
if sum==n:
    print("perfect number")
else:
    print("not perfect number")
