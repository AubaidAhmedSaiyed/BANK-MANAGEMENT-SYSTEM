class complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    def showNumb(self):
        # return (self.real,'i + ' , self.img,'j')-->> OUTPUT:(12, 'i + ', 34, 'j') 
        print(self.real,'i + ' , self.img,'j')

    def __add__(self,obj2):  #   think self as nothing and it is dunder function
        nreal=self.real+obj2.real
        nimg=self.img+obj2.img
        return complex(nreal,nimg)
obj=complex(12,34)
obj.showNumb() # if function prints then dont use function indside print as it will print none also
obj3=complex(23,45)
obj3.showNumb()
num3=obj + obj3
num3.showNumb()

