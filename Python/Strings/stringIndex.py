"""task : 1 
input  : i am going to goa next month. 
output  : first  o index : 6 
            2 nd o index : 12
            3 rd o index : 15
            4 th o index :24 """


str = "i am going to goa next month."

print("first index number of o: ",str.index("o"))
print("second index number of o: ",str.index("o",7,13))
print("third index number of o: ",str.index("o",13,16))
print("fourth index number of o: ",str.index("o",16,26))