def main():
    str = "welcomeahmedabadballhello"

    charIndex = []

    charIndex = (nonRepeatingChars(str))

    print(charIndex)

def nonRepeatingChars(str):

    indexes = []

    for i in range(len(str)):
        if str.count(str[i]) == 1:
            indexes.append(i)

    return indexes
        

main()



