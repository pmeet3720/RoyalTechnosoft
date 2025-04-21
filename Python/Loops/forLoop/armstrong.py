# armstrong number
# 1634 - 1^4 + 6^4 + 3^4 + 4^4 = 1634
n = int(input("enter number: "))
temp = 0


for i in range(1,n+1):
    digit = len(str(i))
    flag = 0
    no = i
    sum = 0

    for j in range(digit):
        temp = no % 10
        sum = sum + pow(temp,digit)
        no = no//10

    if sum == i:
        print(f"Armstrong: {i}")

    