def isInt(func):

    def inner(*args):
        flag = True
        for ele in args:
            if type(ele) != int:
                flag = False
                break

        if flag:
            func()
        else:
            print("all args must be integer")

    return inner

@isInt
def getInt():
    print("all data in args are integers")

getInt(12,10,13,14)