n = int(input())
mis = 0
L = list(map(int, input().split())) #reading n-1 integers in one line

for j in range(1,n+1):
    if L.count(j) == 0:
        mis = j
        break

print(mis)
