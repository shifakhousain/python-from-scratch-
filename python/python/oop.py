# # oop's concepts: object oriented programming- data security 
# # 1. class
# # # syntax for class
# # class class_name:
# #     # Constructor
#     # def __init__(self,parameters):
# #          self.attributes = value
# # methods
# # # def method_name(self,parameters):
# # #      method body
# class Student:
#      def __init__(self,name,roll_number):   
#          self.name = name
#          self.roll_number = roll_number
#      #methods
#      def display(self):
#          print(f"Name: {self.name}, Roll Number: {self.roll_number}")
# # # # object 
# student1 = Student("Alice", 101)   
# student2 = Student("Bob", 102)   

# student1.display()
# student2.display()

# #inheritance
# #single inheritance
# Base class
# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
    
#     def display_info(self):
#         print(f"Name: {self.name}, Age: {self.age}")

# # Derived class
# class Employee(Person):
#     def __init__(self, name, age, employee_id):
#         super().__init__(name, age)
#         self.employee_id = employee_id
    
#     def display_employee_info(self):
#         self.display_info()
#         print(f"Employee ID: {self.employee_id}")

# # # User input
# name = input("Enter your name: ")
# age = int(input("Enter your age: "))
# employee_id = input("Enter your Employee ID: ")

# # # Creating an object of the derived class
# emp = Employee(name, age, employee_id)
# emp.display_employee_info()

# #multiple inheritance
# Base class 1
# class Writer:
#     def __init__(self, writing_style):
#         self.writing_style = writing_style

#     def display_writing_style(self):
#         print(f"Writing Style: {self.writing_style}")

# # Base class 2
# class Speaker:
#     def __init__(self, speaking_style):
#         self.speaking_style = speaking_style

#     def display_speaking_style(self):
#         print(f"Speaking Style: {self.speaking_style}")

# # Derived class
# class Author(Writer, Speaker):
#     def __init__(self, name, writing_style, speaking_style):
#         Writer.__init__(self, writing_style)
#         Speaker.__init__(self, speaking_style)
#         self.name = name

#     def display_author_info(self):
#         print(f"Author Name: {self.name}")
#         self.display_writing_style()
#         self.display_speaking_style()

# # # User input
# name = input("Enter your name: ")
# writing_style = input("Enter your writing style: ")
# speaking_style = input("Enter your speaking style: ")

# # # Creating an object of the derived class
# author = Author(name, writing_style, speaking_style)
# author.display_author_info()

# # multilevel inheritance
# Base class
# class Device:
#     def __init__(self, brand):
#         self.brand = brand

#     def display_brand(self):
#         print(f"Brand: {self.brand}")

# # Intermediate derived class
# class Smartphone(Device):
#     def __init__(self, brand, model):
#         super().__init__(brand)
#         self.model = model

#     def display_smartphone_info(self):
#         self.display_brand()
#         print(f"Model: {self.model}")

# # Derived class
# class UserSmartphone(Smartphone):
#     def __init__(self, brand, model, user_name):
#         super().__init__(brand, model)
#         self.user_name = user_name

#     def display_user_smartphone_info(self):
#         print(f"User: {self.user_name}")
#         self.display_smartphone_info()

# # # User input
# user_name = input("Enter your name: ")
# brand = input("Enter the smartphone brand: ")
# model = input("Enter the smartphone model: ")

# # # Creating an object of the derived class
# user_smartphone = UserSmartphone(brand, model, user_name)
# user_smartphone.display_user_smartphone_info()

# # heirarchical inheritance
# Base class
# class Course:
#     def __init__(self, course_name):
#         self.course_name = course_name

#     def display_course_name(self):
#         print(f"Course: {self.course_name}")

# # Derived class 1
# class OnlineCourse(Course):
#     def __init__(self, course_name, platform):
#         super().__init__(course_name)
#         self.platform = platform

#     def display_online_course_info(self):
#         self.display_course_name()
#         print(f"Platform: {self.platform}")

# # Derived class 2
# class OfflineCourse(Course):
#     def __init__(self, course_name, location):
#         super().__init__(course_name)
#         self.location = location

#     def display_offline_course_info(self):
#         self.display_course_name()
#         print(f"Location: {self.location}")

# # User input
# course_name = input("Enter the course name: ")
# platform = input("Enter the platform for the online course: ")
# location = input("Enter the location for the offline course: ")

# # Creating objects of the derived classes
# online_course = OnlineCourse(course_name, platform)
# offline_course = OfflineCourse(course_name, location)

# online_course.display_online_course_info()
# offline_course.display_offline_course_info()


# # hybrid inheritance
# Base class
# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age

#     def display(self):
#         print(f"Name: {self.name}, Age: {self.age}")

# # Derived class (Single Inheritance)
# class Student(Person):
#     def __init__(self, name, age, student_id):
#         super().__init__(name, age)
#         self.student_id = student_id

#     def display_student(self):
#         self.display()
#         print(f"Student ID: {self.student_id}")

# # Another base class (Multilevel Inheritance)
# class Staff:
#     def __init__(self, staff_id):
#         self.staff_id = staff_id

#     def display_staff(self):
#         print(f"Staff ID: {self.staff_id}")

# # Derived class using Multiple Inheritance
# class TeachingAssistant(Student, Staff):
#     def __init__(self, name, age, student_id, staff_id, course_assigned):
#         Student.__init__(self, name, age, student_id)
#         Staff.__init__(self, staff_id)
#         self.course_assigned = course_assigned

#     def display_ta(self):
#         self.display_student()
#         self.display_staff()
#         print(f"Course Assigned: {self.course_assigned}")

# name=input("enter your name:")
# age=int(input("enter your age:"))
# student_id=int(input("enter your student_id:"))
# staff_id=int(input("enter your staff_id:"))
# course_assigned=input("enter the course to which you have joined:")

# # Example usage
# ta = TeachingAssistant(name,age,student_id,staff_id,course_assigned)
# ta.display_ta()

# # encapsulation
# class BankAccount:
#     def __init__(self):
#         self.balance = 0

#     def deposit(self, amount):
#         if amount > 0:
#             self.balance= self.balance+ amount

#     def withdraw(self, amount):
#         if amount<0 or amount<=self.balance:
#             self.balance -= amount  # self.balance=self.balance-amount
#             return amount
#         else:
#             print("Insufficient funds")

#     def get_balance(self):
#         return self.balance

# account = BankAccount()
# account.deposit(1000)
# account.withdraw(100)
# print(account.get_balance())  

#Abstraction
# from abc import ABC, abstractmethod

# class Shape(ABC):
#     @abstractmethod
#     def area(self):
#         pass

# class Circle(Shape):
#     def __init__(self, radius):
#         self.radius = radius

#     def area(self):
#         return 3.14 * self.radius * self.radius

# class Rectangle(Shape):
#     def __init__(self, width, height):
#         self.width = width
#         self.height = height

#     def area(self):
#         return self.width * self.height

# shapes = [Circle(9), Rectangle(5,8)]
# for shape in shapes:
#     print(f"Area: {shape.area()}")


# # attributes
# class car:
#     def __init__(self,model,brand,year):
#         self.model = model
#         self.brand = brand
#         self.year = year
# my_car = car("swift","maruti suzuki", 2022)
# print(my_car.brand)
# print(my_car.model)
# print(my_car.year)

# methods 
# class Dog:
#     # Constructor method (init method)
#     def __init__(self, name, breed):
#         self.name = name
#         self.breed = breed
#         self.tricks = []

#     # Instance method to make the dog bark
#     def bark(self):
#         print(f"{self.name} is barking!")

#     # Instance method to add a trick to the dog's list of tricks
#     def learn_trick(self, trick):
#         self.tricks.append(trick)
#         print(f"{self.name} learned a new trick: {trick}")

#     # Instance method to display information about the dog
#     def display_info(self):
#         print(f"Name: {self.name}")
#         print(f"Breed: {self.breed}")
#         print(f"Tricks: {', '.join(self.tricks)}")

# # Creating instances (objects) of the Dog class
# dog1 = Dog("Buddy", "Golden Retriever")
# dog2 = Dog("Max", "Poodle")

# # # # Calling methods on the dog objects
# dog1.bark()
# dog1.learn_trick("Sit")
# dog1.learn_trick("Roll over")
# dog1.display_info()

# dog2.bark()
# dog2.learn_trick("Jump")
# dog2.display_info()

#polymorphism
# import math

# # Class for Circle
# class Circle:
#     def __init__(self, radius):
#         self.radius = radius
    
#     def area(self):
#         return math.pi * (self.radius ** 2)

# # Class for Rectangle
# class Rectangle:
#     def __init__(self, width, height):
#         self.width = width
#         self.height = height
    
#     def area(self):
#         return self.width * self.height

# # Function to demonstrate polymorphism
# def print_area(shape):
#     print(f"The area of the {shape} is: {shape.area()}")

# # Creating objects of Circle and Rectangle
# circle = Circle(5)
# rectangle = Rectangle(4, 6)

# # Using the print_area function to call the area method
# print_area(circle)      # The area of the shape is: 78.53981633974483
# print_area(rectangle)   # The area of the shape is: 24

# method overloading
# class Calculator:
#     def add(self, a=0, b=0, c=0):
#         return a + b + c

# a=int(input("enter the value of a:"))
# b=int(input("enter the value of b:"))
# c=int(input("enter the value of c:"))
# # Create an instance of Calculator
# calc = Calculator()

# # Calling the add method with different numbers of arguments
# print(calc.add(a))         # Output: 5
# print(calc.add(a,b))     # Output: 15
# print(calc.add(a,b,c)) # Output: 30



# method overriding
# class Animal:
#     def speak(self):
#         print("Animal speaks")

# class Dog(Animal):
#     def speak(self):
#         print("Dog barks")

# class Cat(Animal):
#     def speak(self):
#         print("Cat meows")

# # Creating instances of the subclasses
# dog = Dog()
# cat = Cat()

# # Calling the overridden speak method for each instance
# dog.speak()  # Output: Dog barks
# cat.speak()  # Output: Cat meows

# # composition
class Engine:
    def start(self):
        print("Engine started")

    def stop(self):
        print("Engine stopped")

class Car:
    def __init__(self):
        self.engine = Engine()  # Composition: Car has an Engine

    def start(self):
        print("Car is starting")
        self.engine.start()

    def stop(self):
        print("Car is stopping")
        self.engine.stop()

if __name__ == "__main__":            #int main(){}  
    my_car = Car()
    my_car.start()
    my_car.stop()

# from math import pow  
# # using the pow() function  
# num=pow(3, 5)  
# # printing pow()  
# print(num)
