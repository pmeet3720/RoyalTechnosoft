# task = swap first and last element in tuple

t1 = (10,20,30,40,50)
t2 = list(t1)
temp = 0

temp = t2[len(t2)-1]
t2[len(t2)-1] = t2[0]
t2[0] = temp
    
print(tuple(t2))
