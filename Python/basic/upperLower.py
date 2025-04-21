# convert char from upper to lower or lower to upper

ch = input("enter char: ")

if ch>='a' or ch<='z':
    ch = ord(ch) - 32
    print(chr(ch))

elif ch>='A' or ch<='Z':
    ch = ord(ch) + 32
    print(chr(ch))
    