# remove duplicates from list

L1 = [1,2,2,3,4,5,5,5,6]
L2 = []

"""for ele in L1:
    if(L1.count(ele)>1):
        L1.remove(ele)

print(L1)"""

# method-2

for ele in L1:
    if ele not in L2:
        L2.append(ele)

print(L2)

