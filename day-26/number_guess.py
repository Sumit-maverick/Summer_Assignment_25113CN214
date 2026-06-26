# Write a program to Create number guessing game.


import random

def start_game():
    print("-" * 40)
    print("Welcome to the Number Guessing Game!")
    print("I'm thinking of a number between 1 and 100.")
    print("-" * 40)

    secret_number = random.randint(1, 100)
    
    max_attempts = 7
    attempts = 0

    print(f"You have {max_attempts} attempts to find the correct number. Good luck!\n")

    while attempts < max_attempts:
        try:
            
            user_input = input(f"Attempt {attempts + 1}/{max_attempts} - Enter your guess: ")
            guess = int(user_input)
        except ValueError:
            print("Invalid input! Please enter a whole number.\n")
            continue

        attempts += 1

        if guess == secret_number:
            print(f"\n🎉 Congratulations! You guessed the number in {attempts} attempts!")
            break
        elif guess < secret_number:
            print("Too low! Try a higher number.\n")
        else:
            print("Too high! Try a lower number.\n")

    if guess != secret_number:
        print(f"\nGame Over! You've run out of attempts.")
        print(f"The correct number was: {secret_number}. Better luck next time!")

if __name__ == "__main__":
    start_game()
