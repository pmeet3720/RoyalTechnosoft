# count duplicates in list
l1 = [1,1,2,3,1,0,2,4,5,4]
l2 = []
l3 = []

for ele in l1:
    if l1.count(ele)>1:
        l2.append(ele)

for ele in l2:
    if ele not in l3:
        l3.append(ele)
print(l3)
print(len(l3))
