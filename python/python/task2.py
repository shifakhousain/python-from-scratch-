
hour_of_the_day = int(input("Enter the hour of the day (0-23): "))

if hour_of_the_day >= 0 and hour_of_the_day <= 23:
    dog_barking_input = input("Is the dog barking? (yes/no): ").lower()
    dog_barking = dog_barking_input == "yes" or dog_barking_input == "true"
    if  hour_of_the_day > 22 and hour_of_the_day <= 6 and dog_barking:
        print("Should wake up")
    else:
        print("Ignore")
else:
    print("Hour of the day is invalid")
