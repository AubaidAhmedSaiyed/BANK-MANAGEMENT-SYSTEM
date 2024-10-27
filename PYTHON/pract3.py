class Ac:
    def __init__(self,pw,aN):
        self.__pw=pw       #sensitive as confidential and use underscore to make it private
        self.aN=aN
    def rset(self):
        print(self.__pw)  # since inside class so we can use it
obj=Ac('123','798')
obj.rset()

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



