def returnSquare(func):
    sq = []
    def inner(*args):
        for ele in args:
            x = lambda ele:ele*ele
            sq.append(x(ele))
        func(tuple(sq))

    return inner


@returnSquare
def getSquare(sq):
    print(sq)

getSquare(1,2,3,4)
