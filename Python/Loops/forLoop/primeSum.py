# print sum of prime numbers

n = int(input("enter number of prime: "))
flag = 0
sum=0

for i in range(1,n+1):
    flag=0
    for k in range(2,int(i/2)+1):
        if(i%k==0):
            flag=1
            break
    if(flag==0 and i!=1):
        print(i,end=' ')
        sum+=i
print(f"The sum of {n} prime numbers is {sum}")