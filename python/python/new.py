# def is_prime(number):
#     if number <= 1:
#         return False  # Numbers less than or equal to 1 are not prime
    
#     for i in range(2, int(number**0.5) + 1):
#         if number % i == 0:
#             return False  # If the number is divisible by any integer from 2 to sqrt(number), it's not prime
    
#     return True  # If no divisors were found, the number is prime

# # Example usage:
# num_to_check = 17
# if is_prime(num_to_check):
#     print(f"{num_to_check} is a prime number")
# else:
#     print(f"{num_to_check} is not a prime number")

# def current_age(current_year):
#     birthyear=int(input("enter your birth year"))
#     user_input=current_year-birthyear
#     print(user_input)
# current_age(2024)

# AGE=2000
# birthyear=int(input("enter birth year"))
# user=AGE-birthyear
# print(user)

# from datetime import datetime

# def calculate_age(birthdate):
#     # Convert the birthdate string to a datetime object
#     birthdate = datetime.strptime(birthdate, "%Y-%m-%d")

#     # Get the current date
#     current_date = datetime.now()

#     # Calculate the age
#     age = current_date.year - birthdate.year - ((current_date.month, current_date.day) < (birthdate.month, birthdate.day))

#     return age

# # Example usage
# birthdate_input = input("Enter your birthdate (YYYY-MM-DD): ")

# try:
#     age = calculate_age(birthdate_input)
#     print(f"Your current age is {age} years.")
# except ValueError:
#     print("Invalid date format. Please use YYYY-MM-DD.")

# print("age of a person")

# var="python"
# print("var:")

# name=input("enter your name")
# print(name)

# var=int(input("enter the salary"))
# print(var)