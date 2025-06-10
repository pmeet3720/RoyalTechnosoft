d1 = {"s1":{"name":"meet","age":28},"s2":{"name":"dev","age":26},"s3":{"name":"kabir","age":30}}

# k = d1.keys()
# print(k)

# v = d1.values()
# print(v)

# for i,j in d1.items():
#     print(i,j)


# p = d1.pop("s2")
# print(d1)
# print(p)

# p = d1.popitem()
# print("popped item: ",p)
# print(d1)

print(d1.get("s1"))

d1.update({"s4":{"name":"Neha","age":22}})
print(d1)