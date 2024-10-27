class Car:
   def  __init__(self,brand,model):#init - constructure - but after this you may change like see below

      self.brand = brand
      self.model = model
      #ADD METHOD TO  DISPLAY FULL NAME OF CAR
   def full_name(self):
      return self.brand, self.model
#create a electric car class that inherits from Car class and has an attribute battery_size
class electricCar(Car):
   def _init_(self,brand,model,battery_size):
      super().__init__(brand,model)
      self.battery_size= battery_size
#SINCE TO INHERIT ONLY OYU HAVE TO WRIT ENAME OF THAT CLASS INSIDE BRACKET
Tesla= electricCar('Tesla','Model S','4343KWh')
print(Tesla.full_name())

      
my_car = Car('BRAND','model')


#print(my_car.brand)
#print(my_car.model)
#D=my_car.full_name()#AS FULL NAME IS FUNCION 
#for  i in D:
#   print(i,end=' ')

