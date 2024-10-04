# datatypes - 8 types
# numeric
    #int- whole number - 10, 20,-30,(+,-)
    #float- fraction numbers - 10.4, 20.8,3/4(+,-)
# marks=35.8
# print(marks)
#sequence type
#     string - ordered set of characters- 'abc',"def","""ghi"""- immutable-cannot change
#     List-ordered set of objects []-[10,'abc',"def"]-mutable
#     Tuple-ordered set of objects -(10.5,"grh","dhf")
# dictionary-{}-key value pairs-{"key1":123,"name":"adb","key3":[10,20],"key4":(10,"sbc")}
#boolean -bool- True or False
#set -{}-unordered list of unique items-{10,10,10,10,20,20, 20,30,30,30}-{10,20,30}
# name="divya"
# print(name)
# name="nisha"
# print(name)
# num=[10,14.5,'vindhya',29,38]
# print(num)
# transaction=(10,100.0,"""abc""",-14,23)
# print(transaction)
# transaction=(30,34.36,"adc",-48,45)
# print(transaction)
# favs={"n":"vindhya","age":21,"movie":["kkh","kbkg"],"dish":("chapathi","curry")}
# # print(favs)
# favs={"name":"nisha","address":"mysore"}
# print(favs)
# isInstituteopen=True
# print(isInstituteopen)
# numbers={10,10,10,20,20,40,50,50,60,70}
# print(numbers)
#variables- name given to the memory location
# age = 20
# print(age)   
# reassign the data
# age = 23
# print(age)
#rules to declare variables
#1. it cannot have numbers in starting 
#2. It can have only alphanumeric values and _
#3. it cannot have special characters
#4. It is case sensitive        
#5. it cannot have white space- name_friend
#6. cannot use keywords

# conventions - not mandatory
# camelcase - firstCollege-readability of the code increases- isCollegeOpen
#variable name descriptive-friend1_name,friend2_name-f1,f2-invalid
# 1first-iv
# first_1name-iv
# frndname-v
# divname1-v

# numeric
# int- immutable
# 1. arithmetic operations- +,-,*,/,%,**
# print(10+5)
# print(10-5)
# print(10*5)
# print(10/5)
# print(10//5)
# print(3/5)
# print(7%5)
# print(3%5)
# print(3**5)

# 2. comparisions->,<,>=,<=,==,!=-returns boolean
# print(10>5)
# print(10<5)
# print(10>=5)
# print(10<=5)
# print(10==20)
# print(10!=5)

# # chain comparisions
# # 1. operators
# #  a. and - returns true if all the chained conditions are true else false
# print(10>5 and 10<20 and 10>30)
# #  b. or - returns false if all the chained conditions are false else true
# print(10>5 or 10>20 or 10>30)
# #  c. not - negates the condition output- deals with one operand
# print(not 10>5)  
# print(not 10<5)

# print(not 10>5 and 10<5 +3*4/2%3**2 or 10<5)

# operator precedence- (),**,(*,/,%),(+,-),(>,<,>=,<=,!=),not, and ,or
#print(not 10>5 and 10<5+ 3*4/2%3**2 or 10<5)
# print(not True and True or False)
# print(False and  True)
# print(False or False)
# print(False)

#casting-converting one type to another
# 1. implicit- automatic conversion done by the system
# print(10/5)
# # 2. Explicit - manual conversion
# print(int("200")+ 10)
# print(int(False))
# print(int(10.76)) # data loss


     

