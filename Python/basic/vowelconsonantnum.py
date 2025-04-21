# according to user input print whether it is vowel, consonant, num or special

ch = input("enter character: ")

# num = ord(ch)

if ch=='a' or ch == 'e' or ch=='i' or ch=='o' or ch=='u':
    print("vowel")
elif ch>'a' and ch<='z':
    print("consonant")
elif ch>='0' and ch<='9':
    print("it is number")
else:
    print("special char")