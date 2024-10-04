#String methods
#operations
# 1.indexing
# syntax: string[index]
#[10, 20, 30]-index
# grett = "hello world"
# print(grett[0])
# print(grett[6])

#slicing- making a copy of entire sting
# syntax- string[start_index:stop_index:step]
# default - 
#start_index-0
#stop_index-length of string
# step-1
# print(grett[0:5])
# print(grett[:4])
# # last 3 characers
# print(grett[8:11])
# print(grett[-3:])
# print(grett[::-1])
#print(grett[::-11])

# operators we can use with strings- +,*
# +-concatination- adding an element to a string
# *- number of appearance
#print("shamala"+"rohith")
#print("hello,"*3)
#"hello"[0]= "z"

# f- strings
# Name = "rohith"
# age = 18
# balance = 125.00
# str = f"my name is {Name} and my age {age} and my bank balance{balance}"
# print(str)
greet = "Hello world"
# greet_upper = greet.upper()
# print(greet_upper)
# greet_lower = greet.lower()
# print(greet_lower)
# greet_swap = greet.swapcase()
# print(greet_swap)
# greet_st=greet.strip()
# print(greet_st)
# greet_cap=greet.capitalize()
# print(greet_cap)
# print(greet.replace("Hello","hey"))


#list methods
# operations 
# indexing 
nums = [10,20,30,40,50]
# print(nums[0])
# print(nums[-2])
# print(nums[4])

# #slicing
# #syntax:- list[start_index:stop_index:step]
# print(nums[0:3])
# print(nums[:3])
# print(nums[2:5])
# print(nums[:-3])
# print(nums[3:0:-1])
# print(nums[4:0:-1])
# print(nums[-3::-1])
# # operators
# #concatination - '+'
# print(nums+["hello"])
# # # *
# print(nums*2)

# #mutable
# nums[1]= 100
# print(nums)
# # # list methods(40)
# nums.append(30)
# print(nums)
# nums.insert(1,60)
# print(nums)
# print(nums.pop(1))
# print(nums)