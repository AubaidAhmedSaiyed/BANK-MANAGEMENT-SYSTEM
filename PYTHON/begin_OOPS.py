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
        self.aN=aN
    def rset(self):
        print(self.__pw)  # since inside class so we can use it
obj=AC(123,798)
obj.rset()