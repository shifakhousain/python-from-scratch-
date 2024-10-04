# n = int(input("Enter the number of rows: "))

# for i in range(1, n + 1):
#     for j in range(1, i + 1):        
#         print("*", end=" ")
#     print()

# start_num = int(input("Enter the starting number: "))
# rows = int(input("Enter the number of rows: "))

# for i in range(1, rows):
#     current_num = start_num
#     for j in range(i):
#         print(current_num, end=" ")
#         current_num += 1
#     print()

# import string       

# alphabet = string.ascii_lowercase
# print(alphabet)

# multiplier = int(input("Enter the multiplier: "))
# numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# multiplied_numbers = [num * multiplier for num in numbers]

# print("Multiplied numbers:", multiplied_numbers)

# a=int(input("enter a:"))
# b=int(input("enter b:"))       
# print(a*b)


pucom = int(input("Please enter PUC marks: "))
cet = int(input("Please enter your CET ranking: "))
location = input("Please enter your location among these: Mysore, Bangalore: ")

if cet > 20000:
    print("East West, MES, ATME")
else:
    if pucom >= 80:
        if location == "Bangalore":
            if cet <= 7000:
                print("RV, Dayanandsagar")
            elif cet <= 20000:
                print("MS Ramiah, PES")
        else:
            if cet <= 7000:
                print("SJCE, NIT")
            elif cet <= 20000:
                print("NIEIT, Vidyawarthaka")
    else:
        print("East West, MES, ATME")
