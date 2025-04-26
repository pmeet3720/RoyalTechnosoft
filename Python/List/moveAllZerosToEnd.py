# move all zeros to end of list
# arr = [1, 2, 0, 4, 3, 0, 5, 0]
# output: [1, 2, 4, 3, 5, 0, 0, 0]

arr = [3, 5, 0, 0, 0, 4]
arr1=[]
arr2=[]

arr1 = arr[2:5]
arr.pop(2)
arr.pop(3)
arr.pop(4)
print(arr)


# for ele in arr:
#     if(ele == 0):
#         arr.remove(ele)
#         arr1.append(ele)
# print(arr)
print(arr1)

# print(arr1)