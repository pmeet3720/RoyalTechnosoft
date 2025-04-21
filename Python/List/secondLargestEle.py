arr = [12, 35, 1, 10, 34, 1] # output- 34
arr1 = [10,10,10]

"""c = arr1.count(10)
print(c)"""

c=0

while(c<2):
    maxEle = max(arr)
    for ele in arr:
        if(ele == maxEle):
            arr.remove(ele)

    my_list = sorted(arr)
    c+=1

print(my_list[len(my_list)-1])