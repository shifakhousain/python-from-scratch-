# module.py

def greet(name):
    return f"Hello, {name}!"

class Person:
    def __init__(self, name):
        self.name = name

    def greet(self):
        return f"Hello, my name is {self.name}."
