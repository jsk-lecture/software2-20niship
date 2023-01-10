import sys

args = sys.argv[1:]
print(args)
stack = []
stack_num = []

for i in args:
    if type(i) == int or i.isdigit():
        stack_num.append(float(i))
    else:
        stack.append(i)

res = 0
while(1):
    if len(stack) * len(stack_num) < 1: 
        print("== Error = " )
        break
    op = stack.pop()
    x = stack_num.pop() 
    y = stack_num.pop()

    if op == "+": stack_num.append(x + y)
    if op == "-": stack_num.append(x - y)
    if op == "*": stack_num.append(x * y)
    if op == "/": stack_num.append(x / y)

    if len(stack_num) == 1:
        print("result = ", stack_num[0])
        break 

