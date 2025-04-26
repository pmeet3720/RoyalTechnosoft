"""1. input  :  restart 
output  : resta#t

2. input  : today is  monday and tomorrow is tuesday. 
output : today_is  monday and tomorrow is_tuesday.

3. input  : "i love python languages."
    words = 4 
    letters =26
    longest word = languages"""


# Task-1

str1 = "restart"
print(str1.replace('ar','a#',1))

# Task-2

str2 = "today is monday and tomorrow is tuesday."
k = ""
k1 = ""

k = str2.replace('ay ','ay_',1)
k1 = k.replace(' tu','_tu',1)

print(k1)

# task-3

str3 = "i love python languages."

words = str3.split()

print("words: ",len(words))

letters = str3.replace(' ','')

print("Letters: ",len(letters))

maxWord = max(words,key=len)
print("Largest word: ",maxWord)





