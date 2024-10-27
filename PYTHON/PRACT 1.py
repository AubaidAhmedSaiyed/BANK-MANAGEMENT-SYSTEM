import random
#create student class that takes name and marks oof 3 subj as arg in constructor
#then create a method to print average
class student:
    def __init__(self,name,m1,m2,m3):
        self.name=name
        self.m1=m1
        self.m2=m2
        self.m3=m3
        print('Displaying details...')
    def Avg(self,m1,m2,m3,p):
        if p==pw1:
            print('    Your AVG marks are    ')
            a=m1+m2+m3
            print('-------' ,a/3, '------')
        else:
            print('Kindly check your password!')
    @staticmethod
    def static():
        print('BYE BYE!')
        
n=input('Enter name:')
m1=int(input('enter marks 1:'))
m2=int(input('Enter marks2:'))
m3=int(input('Enter marks 3:'))
obj = student(n,m1,m2,m3)
print('Fetching.... wait...')
print('NAME OF STUDENT:',obj.name)
print('MARK 1:',obj.m1)
print('MARK 2:',obj.m2)
print('MARK 3:',obj.m3)
pw1=random.randint(1000,9999)
print('Kindly keep this for calculating AVG of yoour marks --',pw1)
ch=input('Do you want to know your AVG marks?[N/Y]:')
if ch in 'Yy':
    pw=input('enter your password:')
    obj.Avg(m1,m2,m3,pw)
obj.static()



