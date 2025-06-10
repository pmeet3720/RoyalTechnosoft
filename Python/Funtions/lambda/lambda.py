# lamda :
"""
syntax : 

lambda  arg : expression
"""

"""def sum(a,b):
    c=a+b
    return c
print(sum(10,20)) 

x= lambda a,b : a+b 
print(x(10,20))

y =lambda x :x **2 
print(y(10))
"""

# built in function  : len min max sorted sum

"""a =lambda x : sum(x)
print(a([1,2,3,4,5,6,7,8,90,12.5]))

"""

"""a = lambda x ,y : "x is big "if x> y else "y is big" 
print(a(10,20))
"""
a = [[4,2] , [2,4] , [3,5] , [3,3]]
#
#[[1,2]]   ==> 0  ==> 1,2  =>0 ,1   

"""x = sorted(a,key =lambda x :x[0])
print(x)

l1=[1,2,3,4,5,6,7,8,9,12.5]
print(sorted(l1))
"""
"""
Original list of tuples:
[('English', 88), ('Science', 90), ('Maths', 97), ('Social sciences', 82)]
Sorting the List of Tuples:
[('Social sciences', 82), ('English', 88), ('Science', 90), ('Maths', 97)]
"""

"""l1=[('English', 88), ('Science', 90), ('Maths', 97), ('Social sciences', 82)]

l2 =sorted(l1,key=lambda x :x [0])
print(l2)"""

d = [{"name":"meet","age":28},{"name":"dev","age":26},{"name":"kabir","age":30}]
sortedD = sorted(d,key=lambda x:x['age'])
print(sortedD)

d1 = {"s1":{"name":"meet","age":28},"s2":{"name":"dev","age":26},"s3":{"name":"kabir","age":30}}
# print(d1.items())
x = sorted(d1.items(),key = lambda x: x[1]['age'])
print(dict(x))

# k = d1.keys()
# print(k)

# v = d1.values()
# print(v)


# p = d1.pop("s2")
# print(d1)
# print(p)

p = d1.popitem()
print("popped item: ",p)
print(d1)