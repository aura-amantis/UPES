''' 
Code to implement:-
a) Create a Vehicle class with max_speed and mileage as instance attributes. Additionally, 
create a method named seating_capacity() using the below syntax: 
b) Create child class ‘Bus’ that will inherit all of the variables and methods of the Vehicle 
class. Set the seating capacity of the bus to 50 using super(). 
c) Create a Bus object that will inherit all of the variables and methods of the Vehicle class 
and display it.
d) Define a class attribute “color” with a default value white. I.e., Every Vehicle should be white.
'''

class Vehicle:
    def __init__(self, name, max_speed, mileage, color = "white"):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
        self.color = color
    def seating_capacity(self, capacity):
        return f"The seating capacity of a {self.name} is {capacity} passengers."


class Bus(Vehicle):
    def __init__(self, name, max_speed, mileage):
        super().seating_capacity(50)


object_bus = Vehicle('Volvo', 100 , 10)

# display 

print(object_bus.name)
print(object_bus.max_speed)
print(object_bus.mileage)
print(object_bus.color)
