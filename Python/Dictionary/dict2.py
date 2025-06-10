data = {1:102,2:201,3:304,4:401,5:506}

filteredDict = {}

for i,j in data.items():
    if j%2==0:
        filteredDict[i] = j


print(filteredDict)

data[6] = 607
print(data)