import random

def divide_and_conquer():
    try:
        num1 = random.randint(1, 100)
        num2 = random.randint(1, 10)
        
        result = num1 / num2
        
        guess = float(input(f"What is {num1} divided by {num2}? "))
        
        if guess == result:
            print("Congratulations! You guessed it right!")
        else:
            raise ValueError("Oops! That's not the correct result.")
    
    except ZeroDivisionError:
        print("You cannot divide by zero!")
    except ValueError as e:
        print(e)
    except Exception as e:
        print("Something went wrong:", e)

def main():
    print("Welcome to the Divide and Conquer Game!")
    play_again = 'yes'
    while play_again.lower() == 'yes':
        divide_and_conquer()
        play_again = input("Do you want to play again? (yes/no): ")
    print("Thanks for playing!")

if __name__ == "__main__":
    main()
