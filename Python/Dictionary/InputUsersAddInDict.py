# input user name and marks and add into dict.
# name1 = input("Enter name1: ")
# marks1 = int(input(f"Enter marks of {name1}: "))
# name2 = input("Enter name2: ")
# marks2 = int(input(f"Enter marks of {name2}: "))
# name3 = input("Enter name3: ")
# marks3 = int(input(f"Enter marks of {name3}: "))

d1 = {'Ram':88,'Sita':90,'Ravan':45}
d2 = {}

marks = sorted(d1.values())
print(marks)

for ele in marks:
    for name,mark in d1.items():
        if ele == mark:
            d2.update({name:mark})
print(d2)


# d1[name1] = marks1
# d1[name2] = marks2
# d1[name3] = marks3

# d2 = dict.keys(d1)
# print(sorted(d1))
# print(d2)
