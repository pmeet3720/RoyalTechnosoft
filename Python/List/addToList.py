# ask user to input any 5 numbers, then add them to list and print odd, even sum

l1 = []
esum=0
osum=0

for i in range(0,5):
    num = int(input("enter number: "))
    l1.append(num)

print(l1)

for ele in l1:
    if(ele%2==0):
        esum+=ele
    else:
        osum+=ele

print(f"The even sum is: {esum}",end='\n')
print(f"The odd sum is: {osum}",end='\n')
        



