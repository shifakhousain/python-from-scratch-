import turtle

# Create a turtle object
t = turtle.Turtle()

# Move forward and turn right to draw a square
for _ in range(4):
    t.forward(200)  # Move forward by 100 units
    t.right(90)     # Turn right by 90 degrees
    t.left(180)
# Close the turtle graphics window when clicked
turtle.exitonclick()

# import turtle
# import random

# # Set up the screen
# screen = turtle.Screen()
# screen.title("Turtle Game")
# screen.bgcolor("white")
# screen.setup(width=600, height=600)

# # Create the player turtle
# player = turtle.Turtle()
# player.shape("turtle")
# player.color("blue")
# player.penup()
# player.speed(0)
# player.goto(0, -250)

# # Set the player speed
# player_speed = 15

# # Create a list of obstacles
# obstacles = []

# # Function to create obstacles
# def create_obstacle():
#     obstacle = turtle.Turtle()
#     obstacle.shape("square")
#     obstacle.color("red")
#     obstacle.penup()
#     obstacle.speed(0)
#     x = random.randint(-290, 290)
#     y = 290
#     obstacle.goto(x, y)
#     obstacles.append(obstacle)

# # Function to move the player left
# def move_left():
#     x = player.xcor()
#     x -= player_speed       #x=x-player_speed
#     if x < -290:
#         x = -290
#     player.setx(x)

# # Function to move the player right
# def move_right():
#     x = player.xcor()
#     x += player_speed      #x=x+player_speed
#     if x > 290:
#         x = 290
#     player.setx(x)

# # Keyboard bindings
# screen.listen()
# screen.onkey(move_left, "Left")
# screen.onkey(move_right, "Right")

# # Main game loop
# while True:
#     # Create obstacles at random intervals
#     if random.randint(1, 10) == 1:
#         create_obstacle()

#     # Move the obstacles
#     for obstacle in obstacles:
#         y = obstacle.ycor()
#         y -= 10
#         obstacle.sety(y)

#         # Check for collision with the player
#         if player.distance(obstacle) < 20:
#             player.hideturtle()
#             obstacle.hideturtle()
#             print("Game Over")
#             screen.bye()

#         # Check if the obstacle is out of bounds
#         if y < -290:
#             obstacle.hideturtle()
#             obstacles.remove(obstacle)

#     # Update the screen
#     screen.update()
