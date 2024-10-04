# tuple methods-()
# immutable
#indexing
#slicing
# transaction = (80, 100, 10000, -150, -500)
# print(transaction)
# transaction[0] = 200
# print(transaction[-1:-3])#-iv
# print(transaction[-2:])
# methods
# print(transaction.count(100))
# print(transaction.index(10000))

# #dictionary-{}
# # key values will always be immutable
# info = {"name":"vindhya",
#          "age": 20,
#          "email":"v@gmail.com",
#          "favs":{"movies":"abc", "dish":"dosa"},
#          "marks":[120, 45,60], 100: 200, True:{0:1000},
#          (100,200):[1000,2000]

#   }
# print(info)
# # accessing
# print(info["name"])
# print(info[(100,200)][1])
# info["age"] = 23
# print(info)
# info["desig"] = "developer"
# print(info)
# del(info[(100,200)])
# print(info)
# # # object methods
# print(info.keys())
# print(info.values())
# print(info.items())

# #sets
# nums = {10, 10, 10, 20, 20, 20, 30, 30, 30, 40, 50}
# print(nums)
# # # convert list to set
# num_list = [10, 20, 30, 40, 50, 60]
# numuniq = set(num_list)
# print(numuniq)
# uniq = list(numuniq)
# print(uniq.sort)
# print(uniq)
# # # # # reverse
# print(uniq.sort(reverse = True))
# print(uniq)

# Statements
# 1. control flow statements
# a. if condition--
# syntax- if condition:
  #              statements if True
  #              statements if True      if clause
  #              statements if True
# note: a indent indicates the code belonging to a statement 
# it is also called code block or clause in the above syntax
# age= 20
# if age>=18:
#      print("eligible for liscence")
# else:
#     print("not eligible")

# b. if else:
# syntax: if condition:
#               statements if True
#         else:
#               Statements if false
# age= 15
# if age>=18:
#      print("eligible for liscence")
# else:
#      print("not eligible")

# c. if elif.....else- 
#syntax: if condition:
#          statements if true
#        elif:
#           statements belongign to elif clause
#        elif:
#           statements belonging to elif clause
#        else:
#            statements belonging to else clause
# marks = int(input("enter your marks:"))
# if marks>=90:
#      print("distinction")
# elif marks>=65:
#      print("first class")
# elif marks>=45:
#     print("second class")
# else:
#      print("failed")

#Note: input()- used to read values entered by the user, it always returns string,
# we need to convert numbers from input as numbers

#nested if statements
# age=int(input("Enter your age:"))
# has_good_vision = bool(input("have any visual disability?"))
# hasGoodVision=False
# if age>=18:
#     if hasGoodVision != False:
#         print("eligible for liscence")
#     else:
#         print("need to have good vision")
# else:
#     print(f"come back after{18-age} years")

# num=12
# if num%2==0:
#     print("even")
# else:
#     print("odd")

    