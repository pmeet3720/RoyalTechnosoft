def toBeCalled():
    print("toBeCalled function called.....")

def test(a):
    a() #calling toBeCalled
    print("Test function called.....")

test(toBeCalled) #passing prototype of toBeCalled function into a argument