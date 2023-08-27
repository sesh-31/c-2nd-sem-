# class 
# object
# constructor 
# destructor 
# attributes
# inheritance// parent and child class 
# polymorphism// nam ek kam alag 
# exception handling// 
# encapsulation // sabai kura eakai choti wrap garera rakhnea 
"""
class is a just like a blue print

"""
class Dog:
    def __init__(self, breed):
        self.breed = breed
    def eat(self):
        print(f"{self.breed} eats meats ")

pug = Dog("German")
pug.eat()