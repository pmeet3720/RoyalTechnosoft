# task
"""
ask user to enter the string and count the letter and store  in to the dict. 
input  :  missiaappi 
output  : {"m" :1 "i" :3 "s " :2 ,"a" : 2, "p" :2}
"""

str = input("Enter string: ")
dict1 = {}
for ch in str:
    dict1.update({ch:str.count(ch)})
print(dict1)


    


    


