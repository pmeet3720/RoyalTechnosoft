# remove palindrome and store it into another list
l1 = [121,2332,123,343,2]
l2 = []


"""for ele in  (l1):
    no = ele
    rev = 0
    # print(no)
    while(ele>0):
        r = ele % 10
        rev = (rev*10)+r
        ele = ele//10
    if rev ==no:
        l2.append(rev)
    
print(l2)"""

for ele in l1:
    if str(ele) == str(ele)[: :-1]:
        l2.append(ele)
print(l2)
