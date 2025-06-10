def isValid(func):

    def inner(data,query):
        flag = False
        if query in data:
            flag = True

        if flag:
            func() #getData func called

        else:
            print("string is invalid...")

    return inner


@isValid
def getData():
    print("Data is valid..")

getData("royal","y")
