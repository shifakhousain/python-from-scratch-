# # # import the "array" for demonstrating array operations  
# import array  
# # initializing an array with array values and signed integers  
# arr = array.array('l', [2, 4, 6, 8, 10, 12,15])   
# # print the original array  
# print ("New created array: ",end="")  
# for l in range (2,7):  
#     print (arr[l], end=" ")  
#     print ("\r")

# importing pandas as pd  
# import pandas as pd  
# # dictionary of lists   
# dict = {'name':["Smith", "William", "Phill", "Parker"],   
#         'age': ["28", "39", "34", "36"],}   
# info = pd.DataFrame(dict,index=[True,False,False,True])   
# print(info) 

# import pandas as dp
# emp={'emp_name':["jack","jerry","mark","antony"],
#     'emp_sal':[10000,20000,25000,30000]}
# list_of=dp.DataFrame(emp)
# print(list_of)
# print("\r")

# import pandas as dp
# elements=dp.array([[1,3,4,5,7],[2,4,5,7,6]])
# print(elements)

# import math        #__init__.py- file - functions and methods
# print(math.pi)

# import math
# print(math.sqrt(50)) 

# opening a file: open()
# file = open('D:\python\ex.txt', 'r')
# print(file)

# # reading a file: read()
# content = file.read()
# print(content)

# # writing to a file: 'w'
# with open('ex.txt','w') as file:
#     file.write("hello\n")
#     file.write("welcome to the workshop session conducting by Acube")

# # # closing a file
# file.close()

# using withstatement
# with open('ex.txt','r') as file:
#     data = file.read()
#     print(data)

# checking the file existence: os.path.exists()
# import os
# if os.path.exists('ex.txt'):
#     print("exists")
# else:
#     print("doesnot exist")

# working with directories
# import os
# os.mkdir('my_directory')# creating a directory
# os.rmdir('my_directory')# removing a directory
# files  = os.listdir('.')
# print(files)

# exception handling:
# 1. try-except
# try:
#     with open('ex.txt','r') as file:
#         data = file.read()
#         print(data)
# except FileNotFoundError:
#     print("file not found")
    
#ex-2
# try:
#     with open('tx.txt','r') as file:
#         var=file.read()
# except FileNotFoundError:
#     print("file not found and cannot be written")

# types of exception handling
#2. try-except-else block: This block is used when you want to execute some code only if 
#no exception occurs within the try block.
# try:
#     # code that may raise an exception
#     # print("this is try block")
#     result = 10 / 0
#     print("this is try block")
# except ZeroDivisionError:
#     # handling ZeroDivisionError
#     print("Error: Division by zero")
# else:
#     # executes if no exception occurs
#     print("Division successful, result:", result)

#ex-2
# try:
#     with open('tx.txt','r') as file:
#         var=file.read()
# except FileNotFoundError:
#     print("file not found")
# else:
#     print("file found successfully")
    
# 3. try-except-finally block: This block is used when you want to execute cleanup code 
#regardless of whether an exception occurs or not. The finally block is 
#always executed, regardless of whether an exception occurred in the try block or not.
# try:
#     # code that may raise an exception
#     # print("hello i am try block")
#     result = 10 / 0
#     print("hello i am try block")
# except ZeroDivisionError:
#     # handling ZeroDivisionError
#     print("Error: Division by zero")
# finally:
#     # cleanup code
#     print("Finally block executed")

#ex-2
# try:
#     result=10%1
# except ZeroDivisionError:
#     print("error division byzero")
# finally:
#     print("finally block")

# 4. Multiple except blocks: You can have multiple except blocks to handle different types of exceptions.
# try:
#     # code that may raise an exception
#     x = int(input("Enter a number: "))
#     result = 10 / x
# except ZeroDivisionError:
#     # handling ZeroDivisionError
#     print("Error: Division by zero")
# except ValueError:

#     print("Error: Invalid input. Please enter a valid number.")
# except TypeError:
#     print("Error:please enter the valid input")

#ex-2
# try:
#     y=10/ int(input("enter a value:"))
# except ValueError:
#     print("string and integer concatination not possible")
# except ZeroDivisionError:
#     print("zero division error")

# 5. Exception as e: You can catch an exception and assign it to a variable for further processing.
# try:
#     # code that may raise an exception
#     result = 10 + "abd"
#     print(result)
# except Exception as e:
#     # handling exception and accessing its attributes
#     print("An error occurred:", e)

# ex-2
# try:
#     res=10/ int(input("enter a number:"))
# except Exception as a:
#     print("an error occured:",a)

# class IceCream:
#     def cream(self):
#         self.cream_flavour = input('Enter cream flavour: ')

# class Fudge:
#     def flavor(self):
#         self.fudge_flavour = input('Enter fudge flavour: ')

# class Cake(IceCream, Fudge):
#     def mix(self):
#         print(f'The cake is of {self.cream_flavour} and {self.fudge_flavour} flavour.')

# mix_1 = Cake()
# mix_1.cream()
# mix_1.flavor()
# mix_1.mix()


