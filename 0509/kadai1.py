import math


def make_monitored(x):
    count = 0
    def mf(input):
        func = x
        nonlocal count
        if input == "how-many-calls?":
            print(count)
        elif input == "reset-count":
            count = 0
        else:
            res = func(input)
            count += 1
            print(res)
    return mf

sqrt = make_monitored(math.sqrt)
sqrt(9)
sqrt(100)
sqrt('how-many-calls?')
sqrt('reset-count')
sqrt(25)
sqrt('how-many-calls?')
