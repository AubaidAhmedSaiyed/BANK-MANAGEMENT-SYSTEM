#create account class with - balance  and account  number
#create methods for debit , credit and printing balance
class Account:
    def __init__(self,balance,AccNo):
        self.balance=balance
        self.AccNo=AccNo
        print('Initialising...')
    def debit(self,bal):#removing money
        self.balance=self.balance-bal
        return self.balance
    def credit(self,bal):#adding money
        self.balance=self.balance+bal
        return self.balance
    def print(self):
        return self.balance
    
b=int(input('enter amount to enter in account:'))
an=int(input('enter account number:'))
obj=Account(b,an)
ch=input('DEBIT/CREDIT?:')
if ch=='debit':
    bal1=int(input('Enter amount to debit:'))
    print(obj.debit(bal1))
elif ch=='credit':
    bal1=int(input('Enter amount to credit:'))
    print(obj.credit(bal1))
else:
    print('YOUR AMOUNT IS ', obj.print())


