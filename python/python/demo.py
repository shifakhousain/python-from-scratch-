#python-oop -interpreter-directly converts from .py to .exe
# oops-paradigm-code arrangement in an order
# print("spandana")
# name=10
# print(name)

#datatypes-8
# numeric- numbers-whole numbers(+,-)
#   int- whole numbers- 10, 20,30, -40-immutable
#   float- fraction or decimal numbers- 10.6,-11.89-immutable
# sequence
#    string- collection of ordered characters- "abc",'def',"""sfdh"""-immutable-cannot change
#    tuple-immutable-()-(10,10.6,"vindhya")
#    list-mutable-[]-[10,10.6,"abc",(10, "djfn")]
# dictionary-collection of objects as key value pairs-{}-{"key1":"vindhya","key2":123,"name":"farheen","key3":[10,20,30],"key4":(10.6,-11)}
# boolean-True or False-isCollegeopen=True
# set-unique collection of unordered objects-{}-{10,10,10,20,20,30,40}

# name={10,10,10,20,20,30,40}
# print(name)

#variables- name given to a memory location, where we can store objects or reference of object
# n1="vindhya"   
# print(n1)
# n1=123.0564
# print(n1) #re-assigning
# # type()- used to specify type of variable 
# print(type(n1))

#rules to declare variable
#1 cannot start with a number- 1name-iv
#2 can contain alphanumeric and _ - name1 - v
#3 cannot have special characters- #,@,$
#4 cannot have whitespace- friend name-iv
#5 it cannot use keywords- string,print,type
#6 can contain camelcase- isCollegeOpen-v
#7 it is casesensitive-uName-uname-iv

# Name="vindhya"
# print(Name)
# Vindhya@1-iv
# friend_name-v
# value1-v
# 1friend-iv
# friend1_name-v

#numeric-int, float-immutable
#operations on numbers:
# 1.arithmetic operations:+,-,*,/,%,**(exponent)
# print(10+5)
# print(10-20)
# print(45*8)
# print(10//3)
# print(10%3)#remainder 1
# print(7%8)#7
# print(10**3)

#2. comparision: >,<,>=,<=,==,!= - bool value
# print(10>5)
# print(10>=10)
# print(10<5)
# print(10<=15)
# print(10==10)
# print(10!=24)

#3. chain comparisions
#  a. operators
#    i.and-returns true if all the chained conditions are true else it returns false
# print(10>5 and 20>4 and 10<4)
#    ii. or- returns false if all the chained conditions are false else it returns true
# print(10>5 or 10<5 or 20<5)
#    iii. not- negates the condition in output
# print(not 20>5)

# operator precedence- (),**,(*,/,%),(+,-),(>,<,>=,<=,==,!=),not, and, or

# print(not 10>5 and 10<5+3*4/2%3**2 or 10<5)
#9
#12/2
#6%9
#6+5
#11
#(not True and True or False)
#(False and True or False)
#(False or False)
#False


# print(not 10>5 and 25<4+45-3**2/3%2*3 or 23>50)

# print(25>36 or 10>5+4**2/4*3%2-3 and 45>34)

# casting- converting one type to another
# i.implicit-automatic conversion 
# print(10/5)
# ii.explicit-manual conversion
# print("nishanth"+str(10))
# print(int(True))
# print(int(False))
# print(int(10.68)) # loss of data

# operations with string
# indexing- '0'- accessing a particular character at particular index
# syntax: string[index]
name="hi students welcome to A cube"
# print(name[0])
# print(name[6])

#slicing- making a copy of entire string or portion of a string
# syntax: string[start_index:stop_index:step] 2
# default value- start_index-0, stop_index-length string, step-1
greet="hi students welcome to A cube"
# greet[2]="z"
# print(greet)
# print(greet[2:10:2])
# print(greet[-3:])
# print(greet[10:13])
# print(greet[::-1])
# print(greet[18:2:-2])


# operations using +,* in string
# print("hello "+"mysore")
# print("hello "+ str(123))
# print("hello "*4)

# # #f-string- formated string 
# name="abin"
# age=20
# balance=2000.40
# address="mysore"
# str=f"hello my name is {name} and my age is {age}, my bank balance {balance}, my address {address}"
# print(str)
# print(f"hello my name is {name} and my age is {age}, my bank balance {balance}, my address{address}")

#important string methods
#method- a function that is attached to a particular object which can modify the object value.
greet="hello world"
# greet_upper=greet.upper()
# print(greet_upper)
# greet_lower=greet_upper.lower()
# print(greet_lower)
# greet_1=greet.replace("hello","hey")
# print(greet_1)
# sp="hi,i, am, vindhya"
# greet_sp=sp.split(',')
# print(greet_sp)
# print(len(greet))

#list - ordered collection of objects
nums=[10,20,20,30,40,50,60]
# # indexing
# print(nums[0])
# print(nums[-1])
# print(nums[4])

# #slicing
# print(nums[0:3])         # [start_index-0:stop_index-length of list:step-1]
# print(nums[3:5])
# print(nums[4:0:-1])
# print(nums[-1:-7:-2])

# # opeators we can use - +,*
# print(nums+["hello","hey"])
# print(nums*4)
# nums[1]=100
# print(nums)

# nums.append(200)
# print(nums)
# nums.insert(1,45)
# print(nums)
# nums.remove(20)
# print(nums)
# print(nums.pop(4))
# print(nums.count(20))

#tuples- ordered collection of objects-()
transactions=(1000,200,-150,50)
#indexing
# print(transactions[0])
# transactions[1]=100
# print(transactions)
# #slicing
# print(transactions[-2:])
# print(transactions[-1:0:-2])
# # inbuilt methods of tuple
# print(transactions.count(200))
# print(transactions.index(-150))

# dictionary-ordered collection of key and value pairs
info={"name":"vindhya","address":"mysore","fav_dish":["chapathi","dal",10],"transac":(10,20.60,200)}
# print(info["name"])
# print(info["address"])
# info["name"]="divya"
# print(info)
# del(info["address"])
# print(info)
# print(info.keys())
# print(info.values())
# print(info.items())
# info.update({"balance":10000})
# print(info)

#sets- unordered collection of unique objects
nums={10,10,10,20,30,20,40,30,50}
# print(nums)
# numslist=[10,20,30,40,50,60,20,30,40]
# uniquelist=set(numslist)
# print(uniquelist)
# uniqset=list(nums)
# print(uniqset)
# x={"a","b","c","d"}
# y={"d","e","f","g"}
# z={"g","h","i"}
# result=x.union(y,z)
# print(result)
# res=y.intersection(z)
# print(res)
# nums.clear()
# print(nums)

#statements-set of instruction, expression which evaluates to single value
#  1.conditiional statements
#   a. if condition/statement-
#    if condition:
#       satement if true
#       statement if true   - if block/clause
# age=int(input("enter your age:"))
# if age>=18:
#     print("eligible for liscence")
# else:
#     print("not eligible")


#  b. if else
#     if condition:
#        statemt if true
#     else:
#         statement if false

#  c. if elif.....else:
#   if condition:
#        sttmnt belongs to if clause
#   elif condition:
#         stmnt belongs to elif clause
#   elif condition:
#         stmnt belongs to elif clause
#   else:
#        else clause

# marks=int(input("enter your marks:"))
# if marks>=85:
#     print("distinction")
# elif marks>=60:
#     print("first class")
# elif marks>=45:
#     print("second class")
# elif marks>=35:
#     print("pass")
# else:
#     print("failed")

#d. Nested if example in Python

# Assume we have two variables representing a student's score and attendance
# score = int(input("enter your score:"))
# attendance = int(input("enter your attendance:"))

# # Check if the student passed and had good attendance
# if score >= 60:
#     print("Student passed.")
    
#     # Nested if to check attendance
#     if attendance >= 80:
#         print("Student has good attendance.")
#     else:
#         print("Student needs to improve attendance.")
# else:
#     print("Student failed.")

# 2. control flow:
# 1. while loop-a while loop is a control flow structure that repeatedly executes a block of code
# as long as a given condition is true.- perform a task multiple times
# syntax: while condition:
#             statement is true
# count=1
# while count<=10:
#     print("count:",count)
#     count= count+1  #count+=1

# password="secret"
# input_password=input("enter the password")
# while input_password != password:
#     print("incorrect password")
#     input_password=input("enter password")
# print("password is correct")

# nested loop
# name1= "vindhya"
# name2= "divya"
# letters_matched=[]
# for letter1 in name1:
#     for letter2 in name2:
#         if letter1.lower()==letter2.lower():
#             if letter1 not in letters_matched:
#                 letters_matched.append(letter1.lower())
# print(letters_matched)

# break- exits from the loop permanently
# for i in range(0,6):
#     if i==3:
#         break
#     print(i)

#continue- is use to skip the remaining code within the current iteration of a loop and
# proceed to the next iteration
# for i in range(0,7):
#     if i==4:
#         continue
#     print(i)

# pass- is a placeholder statement that does nothing. It is often used as a placeholder when
#  a statement is syntactically required but no action is desired
# for i in range(0,6):
#     if i==3:
#         pass
#     else:
#         print(i)

# celsius to farenheit
# def celsius_to_fahrenheit(celsius):
#     fahrenheit = (celsius * 9/5) + 32
#     return fahrenheit

# # Get temperature in Celsius from the user
# celsius = float(input("Enter temperature in Celsius: "))

# # Convert Celsius to Fahrenheit
# fahrenheit = celsius_to_fahrenheit(celsius)

# # Display the result
# print(f"{celsius} degrees Celsius is equal to {fahrenheit} degrees Fahrenheit.")

# nested loop
# correct_password = "secure123"

# for attempt in range(3):  # Allow 3 attempts
#     entered_password = input("Enter the password: ")

#     if entered_password == correct_password:
#         print("Password correct! Access granted.")
#         break  # Exit the loop if the password is correct
#     else:
#         print(f"Incorrect password. {2 - attempt} attempts remaining.")

#         if attempt < 2:
#             # Only ask for new password if there are remaining attempts
#             change_password = input("Do you want to try a different password? (yes/no): ")
#             if change_password.lower() != "yes":
#                 break  # Exit the loop if the user does not want to try a different password
#         else:
#             print("Sorry, you've run out of attempts. Access denied.")

# list comprehension
# syntax: new_list = [expression for item in iterable if condition]
# Using a traditional for loop
# squares = []
# for i in range(10):
#     squares.append(i ** 2) #1,0,4
# print(squares) #normal format

# Using list comprehension
# squares = [i ** 2 for i in range(10)]
# print(squares)

#functions- set of instructions performs a specific task
# usecase- 1. reuse the code 2. managable code
# 2 steps- 1. defining a function: def- keyword function name and pair of parameters and
# a colon ":"
# syntax: def fun_name(parameter):
#            fn body
#             code to perform task
#             return result
# def add_num(a,b):
#     sum_result=(a+b)
#     return sum_result
# result = add_num(5,3)
# print("added value",result)

# 2. invoking or calling a function
# syntax: fun_name(arguments):

# birthyear=int(input("enter your birth year"))
# current_year=int(input("enter your current year"))
# def calc_age(birthyear,current_year):
#     age=current_year-birthyear
#     print(f"your age is {age}")
#     return age
# calc_age(birthyear,current_year)
# print(f"your current age {age1}")

# age=int(input("enter your age"))    
# if (age>=13 and age<=19):
#     print ("teenager")
# else:
#     print("not a teenager")

















