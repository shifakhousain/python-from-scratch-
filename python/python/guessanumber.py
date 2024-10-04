# 1.generate a random number btw 1 to 20
# 2.get guess value from user till he makes right guess or game ends
# 3. Keep updatng the score as well


from random import randint

secretNumber = randint(1, 20)  

gameOn = True
score = 20
highscore = 0

while gameOn:
    guess = int(input("Enter a guess btw 1 to 20: "))

    # Validating guess
    if guess <= 0 or guess > 20:
        print("Enter proper guess")
        continue

    elif guess == secretNumber:
        print("Correct guess!")

        # checking for highscore
        if highscore < score:
            highscore = score
            print(f"The new highscore is {highscore}")
        else:
            print(f'Highscore is {highscore}')

        # Play again
        choice = input("Do you want to play again? \nPress Y to yes N to no:")
        if choice.upper() == "N":
            gameOn = False
        else:
            secretNumber = randint(1, 20)
            score = 20

    elif guess > secretNumber:
        print("Too high")
        score -= 1            #score=score-1
        print(f"The updated score is {score}")
    else:
        print("Too low")
        score -= 1
        print(f"The updated score is {score}")
        