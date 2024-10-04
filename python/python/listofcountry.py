import random

def play_game():
    # List of countries and their capitals
    countries = ['United States', 'United Kingdom', 'France', 'Germany', 'Canada']
    capitals = ['Washington', 'London', 'Paris', 'Berlin', 'Ottawa']
    
    # Shuffle the countries and capitals to make the game more interesting
    combined = list(zip(countries, capitals))
    random.shuffle(combined)
    countries, capitals = zip(*combined)
    
    for country, capital in zip(countries, capitals):
        guess = input(f"What is the capital of {country}? ").strip().lower()
        if guess == capital.lower():
            print("Correct!")
        else:
            print(f"Wrong! The correct answer is {capital}")

def main():
    print("Welcome to the Capital Guessing Game!")
    play_game()
    play_again = input("Do you want to play again? (yes/no): ").strip().lower()
    while play_again == 'yes':
        play_game()
        play_again = input("Do you want to play again? (yes/no): ").strip().lower()
    print("Thanks for playing!")

if __name__ == "__main__":
    main()
