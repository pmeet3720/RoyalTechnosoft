# print sum of odd and eve

n = int(input("enter the numbers: "))
esum=0
osum=0

for i in range(1,n+1):
    if i%2==0:
        esum += i
        print("even: ",i,end='\n')
        
    else:
        osum += i
        print("odd: ",i,end='\n')
print(end='\n')
print("The sum of even: ",esum)
print("The sum of odd is: ",osum)