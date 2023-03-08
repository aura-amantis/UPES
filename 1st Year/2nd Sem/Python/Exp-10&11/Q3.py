class Account:
    def __init__(self, initial_amount):
        self.balance = initial_amount
    def withdraw(self, amount):
        self.balance = self.balance - amount
    def deposit(self, amount):
        self.balance = self.balance + amount

ac = Account(1000)
ac.deposit(1000)
ac.withdraw(3000)
print(ac.balance)
