print("with closure")
# exec(open('bank.py').read())

class Withdraw:
    def __init__(self):
        self.balance = 100
    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            return self.balance
        else:
            return 'Insufficient funds'


withdraw = Withdraw()

print("withdraw(25) = {}".format(withdraw.withdraw(25)))
print("withdraw(25) = {}".format(withdraw.withdraw(25)))
print("withdraw(60) = {}".format(withdraw.withdraw(60)))
print("withdraw(15) = {}".format(withdraw.withdraw(15)))
