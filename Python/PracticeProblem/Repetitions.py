str = input()

ch = list(str)
chL = []
dup = []

for ele in ch:
    if ch.count(ele)>1:
        chL.append(ele)

for ele in chL:
    if ele not in dup:
        dup.append(ele)

print(len(dup))