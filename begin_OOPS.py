# class car:
#     color = 'BLUE'

# car1= car()
# print(car1.color)
class student:
    Common_data='ABD'#class attr
    name='WE DONT KNOW'  #class attr
    def __init__(self,name,marks,pw):#constructor
        self.name = name #obj attr
        self.marks = marks
        self.pw=pw
        print('CREATING NEW FILE...')
    
    def Wc(self,pw):
        pw=input('Enter your password:')
        if pw==p:
            print('Welcome!!!')
            print('Nice to see you',self.name)
        else:
            print('You are not allowed')
    def get_marks(self):
        return self.marks # we get the marks 


p=input('Enter password:')
n=input('Enter name:')
m=input('Enter mars:')
# print(s2.name)
# print(s2.marks)
# print(s2.Common_data)
print('NOW YOUR  ARE GOING TO OUR MAIN SITE...')
print()
s3=student(n,m,p) #s3 is object 
print()
s3.Wc(p)
#ABSTRACTION
class CarStart:# class for car instances 
    def __init__(self):#initialization
        self.acc=False
        self.clutch=False
        self.brek=False
    def start(self):#for  starting car
        self.clutch=True
        self.acc=True
        print('CAR STARTED..')
#here start hide unnecessary details and showed only imp i.e. print statement



Car1= CarStart()
Car1.start()#if wnat to start car

#del KEYWORD
  #del obj
  #del obj.name
#PRIVATE ATTRIBUTES AND METHODS : within class whereas PUBLIC are as done before and can be accessible outside class

class AC:
    def __init_(self,pw,aN):
        self.__pw=pw       #sensitive as confidential and use underscore to make it private
        self.aN=aN           #double underscor use to make private
    def rset(self):
        print(self.__pw)  # since inside class so we can use it
obj=AC(123,798)

#inheritance
class car:
    @staticmethod
    def start():
        print('car started')
    def stop():
        print('car stopped!')
class ToyotaCar(car):            #inherit class car
    def __init__(self,brand):
        self.brand=brand
        print('INITIALIZATION')
class Fortuner(ToyotaCar):
    def __init__(self,type):
        self.type=type
        print('Let the world hear us') 
car1=Fortuner('Electric')
car1.start()
#MULTI LEVEL INHERITANCWEE
class  A:
    varA= 'Welcome to A'
class  B:
    varB='Welcome to B'
class c(A,B):              #INherit A and B
    varC= 'Welcome to c'

c1=c()
print(c1.varA,c1.varB,c1.varC)      

#     Super method
#            --- used to access method of parent class

class car:
    def __init__(self,Type):
        self.Type=Type
        print('INITIALIZATION')
    def start():
        print('car started')
    def stop():
        print('car stopped!')
class ToyotaCar(car):            #inherit class car
    def __init__(self,brand):
        self.brand=brand
        super()__init__(Type)
        print('INITIALIZATION')

Car1=ToyotaCar('PRIUS')
print(Car1.Type)   # ERROR
Car1=ToyotaCar('PRIUS','electric')


#  property decorator
class student:
    def __init__(self,p,c,m):
        self.p=p
        self.c=c
        self.m=m
    @property
    def per(self):
        return self.perc=(self.p+self.m+self.c)/3
    def CalcPerc(p,c,m):
        s=p+c+m/3
        return s
p=int(input('enter 1:'))
c=int(input('enter 2:'))
m=int(input('enter 3:'))


s1=student(p,c,m)
print('PHYSICS:',s1.p)
print('CHEMISTRY:',s1.c)
print('MATHS:',s1.m)
print(CalcPerc(p,c,m))
print(per())

# POLYMORPHISM : WHEN SAME OPERATOR USED IN DIFFRENT CONTEXT 
# EX. 1+2 AND 'AP'+'AD' BOTH HACVE SAME OPERATOR BUT USED IN DIFFERNT  SCENARIO#
# FOR EXAMPLE IF I MAKE COMPLEX NUMBER CLASS , i will use dunder functions through which i can do what i want by making functuions 

class complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    def showNumb(self):
        return (self.real,'i + ' , self.img,'j')
obj=complex(12,34)
print(obj.showNumb())


