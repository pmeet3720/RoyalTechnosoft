"""task  : 1 

input  : ["python" ,"maam", "java","php" ,"aba", "1221"]
condition  : 
    1. length  of each  must be more than  2 
    2. first and last letter are same . 

output  : ["aba" , "1221" , "maam", "php"]

task  : 2 above input seprate the pelidrome string.

task  : 3 
input  : ["cat" , "categories","count" ,"co-co"]
output  : separate those words start with ca 
    ["cat" ,"categories" ]"""

# task-1

strList = ["python" ,"maam", "java","php" ,"aba", "1221"]
output1 = []

for word in strList:
    if len(word)>2 and word[0] == word[len(word)-1]:
        output1.append(word)
print(output1)

# task-2
output2 = []
for word in strList:
    if word[::-1]==word:
        output2.append(word)
print(output2)

# task-3

strList = ["cat" , "categories","count" ,"co-co"]
output3 = []

for word in strList:
    if word[0:2] == "ca":
        output3.append(word)
print(output3)
