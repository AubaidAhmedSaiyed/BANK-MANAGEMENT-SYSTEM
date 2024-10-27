class Employee:
    company ='Apple'
    def __init__(self,name,company):
        self.name=name
        self.company=company
        print('Initialization')
    #@classmethod
    def change(cls,nc):   #self==cls 
        cls.company = nc
        print('COMPANY CHANGE SUCCESSFULY')

e1=Employee('Harry','Apple')
print('NAME:',e1.name)
print('COMPANY:',e1.company)
print('NEW COMPANY:')
nc=input('ENTER NEW;')
e1.change(nc)
print('COMPANY:',Employee.company)  #that value for company variable under class is chnaged to inputed one
# But if not use classsmethod  then only for that object will be  change not for class