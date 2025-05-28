s1 = {100,2,3,4,7,8,9,9,10,10}
# s = sorted(s1)
# s.reverse()
# print(set(s))

s2 = set()
l2 = []

s1 = sorted(s1) # this sorted function returns a list of sorted elements
for i in range(len(s1)-1,0,-1):
    l2.append(s1[i])
print(l2)