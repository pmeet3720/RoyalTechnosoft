arr = [-10, -3, -5, -6, -20]

# my_list = sorted(arr)
my_list = []
c=0

for ele in arr:
    if(ele<0):
        c+=1
    my_list.append(abs(ele))

if(c==len(arr)):
    my_list1 = sorted(arr)
    mul = my_list1[len(my_list1)-1]*my_list1[len(my_list1)-2]*my_list1[len(my_list1)-3]
    print(mul)
else:
    my_list1 = sorted(my_list)
    mul = my_list1[len(my_list1)-1]*my_list1[len(my_list1)-2]*my_list1[len(my_list1)-3]
    if(c%2==0):
        print(mul)
    else:
        print(-(mul))


# mul = 852*(-638)*(-693)
# 376698168

