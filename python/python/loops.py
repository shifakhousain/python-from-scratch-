# statement
# for loop
# while loop

# run set of instruction multiple times

# for loop
# Syntax
# for var in iterator:
#     sttements to loop
#     for clause

# iterators: string, list, tuple

# greet = "Hello world"
# groceries = ["Pen", "Book", "Paper", "Soap"]
# transaction = (100, 200, 300, 400, -50, -80)

# info = {
#      "name": "Manoj",
#       "address": "Mysore",
#      "job": "Dev"
#  }
# #print(greet, groceries, transaction, info)
# # while True:
# #      user_input = input("Enter a command ('exit' to quit): ")
# #      if user_input == 'exit':
# #         break  # Exit the loop if the user types 'exit'
# #      print("You entered:", user_input)


# for letter in greet:
#      print(letter+" hey")
# print("The letter is "+letter)


# for item in groceries:
#     print("The item is "+item)


# for amount in transaction:
#      print("The transaction amout is "+str(amount))

# if amount > 0:
#      print("Deposit of "+str(amount))
# else:
#         print("Withdrawal of "+str(amount*-1))

# # tuple unpacking
# a, b, c = (10, 20, 30)

# print(a)
# print(b)
# print(c)

# for key, value in info.items():
#     print(f"The key is {key} and the value is {value}")

# #range()
# #syntax: range(start,stop,step)
# # Note: stop will not be included
# # On excuting range() we get an iterator that generates a integers btw the range we mention

# print(list(range(1, 10)))
# print(tuple(range(1, 10)))


# for _ in range(1,11):
#     print("Manoj")

# #Nested loops

# name1 = "Maaaaaanoj"
# name2 = "Prajwaaaaaaaaaaal"

# letters_matched = []
# for letter1 in name1:
#      for letter2 in name2:
#         if letter1.lower() == letter2.lower():
#               if letter1 not in letters_matched:
#                  letters_matched.append(letter1.lower())


# print(letters_matched)
# num = [10,20]
# num.append(30)
# print(num)
# # Assignment Printing star patterns
# # 1
# # 1 2
# # 1 2 3
# # 1 2 3 4
# # 1 2 3 4 5

# # n = int(input("Enter no of rows: "))

# # for row in range(1, n+1):
# #     for col in range(1,n+1):
# #          if col <= row:
# #              print(col,end=" ")
    
# # print()

# # # default end argument will be = "\n"
# # print(1,end="-")
# # print(2,end="-")
# # print(3)


# #print(list(range(5,0,-2)))

# count =1
# while count<5:
#       print("count:",count)
#       count+=1


# for i in range(1,6):
#      if i==3:
#          pass
#      else:
#          print(i)

# list=[1,2,3,4,5,6,7,8,9]
# for num in range(0,6,2):
#     print(num)
    
# marks = int(input("enter a your marks:"))
# if(marks>=65):
#     print("first class")
# elif(marks>=45):
#     print("second class")
# else:
#     print("fail")
