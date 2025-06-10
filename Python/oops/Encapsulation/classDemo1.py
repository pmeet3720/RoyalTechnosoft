class Demo:

    x = 100 # class level variable

    def test(self): # self is reference to object of class Demo like this in java
        a = 1000 # local level variable
        print("test method of class demo is called....")
        print(f"value of x is {self.x}")
        print(f"value of x is {Demo.x}")
        print(f"value of a is {a}")

        self.name = "Meet" # object level variable so it will be accessed from another method of same class

    def myTest(self):
        print(f"value of name is {self.name}")
        # print(f"value of a is {a}")


d = Demo() #[room 1]

d.test()
d.myTest()
print(d.name)
print(d.x)

