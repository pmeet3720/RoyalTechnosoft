# implement strings to remove duplicate letters from it
# str = input("Enter string: ")
str = "hello my name is meet"
str1 = ""
l = str.split(' ')
l1 = []
for word in l:
    l1 = list(word)
    for ch in l1:
        if l1.count(ch)>1:
            l1.remove(ch)
    str1 += "".join(l1)+' '
print(str1)



