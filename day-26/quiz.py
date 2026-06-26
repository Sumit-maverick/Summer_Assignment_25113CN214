# Write a program to Create quiz application 
import time

def run_quiz():
    # Define the quiz questions, multiple-choice options, and the correct answers
    quiz_data = [
        {
            "question": "What is the capital of India?",
            "options": ["A) Mumbai", "B) New Delhi", "C) Kolkata", "D) Chennai"],
            "answer": "B"
        },
        {
            "question": "What is the term of president in United States of America?",
            "options": [
                "A) Four years", 
                "B) Two years", 
                "C) Six years", 
                "D) Eight years"
            ],
            "answer": "A"
        },
        {
            "question": "Which of the following Fighter Jets is manufactured in India?",
            "options": ["A) F-16", "B) Rafale", "C) Mirage", "D) Su-30 MKI"],
            "answer": "D"
        }
    ]

    score = 0
    total_questions = len(quiz_data)

    print("====================================")
    print("   WELCOME TO THE QUIZ APP!    ")
    print("====================================\n")
    time.sleep(1)

    # Loop dynamically through each question block
    for index, item in enumerate(quiz_data, start=1):
        print(f"Question {index}: {item['question']}")
        
        # Display alternative choice options
        for option in item['options']:
            print(option)
        
        # Secure and validate user input selection
        while True:
            user_input = input("\nYour answer (A, B, C, or D): ").strip().upper()
            if user_input in ["A", "B", "C", "D"]:
                break
            print("Invalid input! Please choose A, B, C, or D.")

        # Evaluate performance instantly
        if user_input == item['answer']:
            print(" Correct answer! Excellent.\n")
            score += 1
        else:
            print(f" Incorrect. The right answer was {item['answer']}.\n")
        
        print("-" * 36)
        time.sleep(0.5)

    # Calculate percentages and print final evaluation report
    percentage = (score / total_questions) * 100
    print("\n====================================")
    print("           QUIZ COMPLETED           ")
    print("====================================")
    print(f"Your Total Score: {score} out of {total_questions}")
    print(f"Final Percentage: {percentage:.1f}%")
    
    if percentage == 100:
        print("Perfect performance! You are a master. 🏆")
    elif percentage >= 70:
        print("Great job! You passed the test. 🎉")
    else:
        print("Better luck next time! Keep practicing. 👍")
    print("====================================\n")

if __name__ == "__main__":
    run_quiz()
