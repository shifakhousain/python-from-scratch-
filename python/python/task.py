
day_print = {"Monday": "Yoga", 
             "Tuesday": "swimming", 
             "Wednesday": "Dance", 
             "Thursday": "Reading book",
            "Friday": "Study", 
            "Saturday": "Workout",
            "Sunday": "Rest"}

day = input("enter a day:")
day = day.capitalize()
if day in day_print:
    task = day_print[day]
    print(f"on {day} your task is{task}")
else:
    print("invalid entered day")