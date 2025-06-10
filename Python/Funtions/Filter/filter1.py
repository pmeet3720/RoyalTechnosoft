l1 = [1,2,4,6,7,8,9,10.5,12,15,16]

# filter does not change list values it just provide output by filtering values according to lambda condition
x = list(filter(lambda x: x%2==0,l1))
print(x)