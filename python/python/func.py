# def slicer(fruit_count):
#     return fruit_count*5
# def juice_maker(fruit, fruit_count):
#     slices=slicer(fruit_count)
#     print(f"your {fruit} juice with {slices} slice is ready to serve")

# #calling function
# juice_maker("apple",40)
# juice_maker("orange",20)
# juice_maker("banana",30)

#local and global variables
# a=10
# b=20
# def greeting(d,c):
#     sum=d+c
#     return sum
# result=greeting(a,b)
# print(result)

#1. variable number of arguments
# def print_args(*args):
#      for arg in args:
#         print(arg)
# print_args(1, 2, 3)  

#ex2
# def example_function(*args, **kwargs):
    # Print positional arguments
    # print("Positional arguments (args):", args)
    
    # Print keyword arguments
    # print("Keyword arguments (kwargs):", kwargs)

# Example 1: Using only *args
# example_function(1, 2, 3, 4, 5)

# # # # # Example 2: Using only **kwargs
# example_function(name='John', age=25, city='New York')

# # # # # # Example 3: Using both *args and **kwargs
# example_function(10, 20, language='Python', framework='Django', database='SQLite')

#2. default parameters
# def greet(name, greeting="Hello"):
#      message = f"{greeting}, {name}!"
#      return message
# print(greet("Alice"))        
# print(greet("Bob", "Hi"))    

#3. keyword arguments
# def person_info(name, age):
#      print(f"Name: {name}, Age: {age}")
# person_info(age=30, name="John") 

#4. **kwargs
# def print_kwargs(**kwargs):
#     for key, value in kwargs.items():
#          print(f"{key}: {value}")

# print_kwargs(a=1, b=2, c=3)

# def add_num(a,b):
#     result = a+b
#     return result
# sum_result=add_num(3,4)
# print(sum_result)


#5. returning multiple values
# def operate_numbers(a, b):
#     addition = a + b
#     subtraction = a - b
#     return addition, subtraction
# add_result, sub_result = operate_numbers(5,10)
# print(add_result, sub_result)  

#6. lambda functions(anonymous functions)
# multiply = lambda x, y: x * y
# print(multiply(3, 4))  

# recursive function
# def factorial(n):  #4!=4*3*2*1=24
#     if n == 0:              #base condition
#         return 1
#     else:
#         return n * factorial(n - 1) #4- 24

# # # Example usage:
# result = factorial(6)
# print(result) 

# zip-in Python, the zip function is used to combine elements from multiple iterables into tuples.
# Example 1
# list1 = [1, 2, 3]
# list2 = ['a', 'b', 'c']

# zipped = zip(list1, list2)

# # # The result is an iterator of tuples
# for item in zipped:
#     print(item)

# You can also use the list function to convert the zip object into a list of tuples:
# # Example 2
# list1 = [1, 2, 3]
# list2 = ['a', 'b', 'c']

# zipped = list(zip(list1, list2))

# # # # The result is a list of tuples
# print(zipped)

# Example 4
# list1 = [1, 2, 3]
# list2 = ['a', 'b', 'c']
# list3 = ['x', 'y', 'z']

# zipped = list(zip(list1, list2, list3))

# print(zipped)
# Output: [(1, 'a', 'x'), (2, 'b', 'y'), (3, 'c', 'z')]

# Enumerate()- In Python, the enumerate() function is used to iterate over a sequence (such as a list, tuple, or string) along with keeping track of the index of the current item. It returns pairs of index and corresponding item in the sequence. 
# Example with a list
# my_list = ['apple', 'banana', 'cherry']

# for index, item in enumerate(my_list):
#     print(f'Index: {index}, Item: {item}')

# student=['anush','pooja']

# for index,item in enumerate(student):
#     print(f'Roll no:{index}, Student name:{item}')

#map
# syntax:map(function, iterable):
# Example: Square each element in a list
# numbers = [1, 2, 3, 4, 5]
# squared_numbers = map(lambda x: x**2, numbers)
# squared_numbers_list = list(squared_numbers)
# print(squared_numbers_list)  

# my_num=[3,7,8,9,6,9]
# cube=map(lambda y:y**3,my_num)
# cube_num=list(cube)
# print(cube_num)

#filter
# syntax: filter(function, iterable):
# Example: Filter even numbers from a list
# numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# even_numbers = filter(lambda x: x % 2 ==0 , numbers)
# even_numbers_list = list(even_numbers)
# print(even_numbers_list)  

# numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# even_numbers = map(lambda x: x % 1 ==0 , numbers)
# even_numbers_list = list(even_numbers)
# print(even_numbers_list)  

# python, programming, language split
# str= "python, programming, language"
# result= str.split(',')
# print(result)

