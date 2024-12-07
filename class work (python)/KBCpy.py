import random

questions = [
    {
        "question": "What is the capital of India?",
        "options": ["1) Mumbai", "2) Delhi", "3) Kolkata", "4) Chennai"],
        "answer": 2,
        "point": 100
    },
    {
        "question": "Which planet is known as the Red Planet?",
        "options": ["1) Earth", "2) Mars", "3) Jupiter", "4) Saturn"],
        "answer": 2,
        "point": 100
    },
    {
        "question": "Who wrote the Harry Potter series?",
        "options": ["1) J.R.R. Tolkien", "2) J.K. Rowling", "3) C.S. Lewis", "4) George R.R. Martin"],
        "answer": 2,
        "point": 100
    },
    {
        "question": "In which year did India gain independence?",
        "options": ["1) 1942", "2) 1947", "3) 1950", "4) 1952"],
        "answer": 2,
        "point": 100
    }
]

print("********* Welcome to KBC **********")

choice = int(input("How many questions would you like to answer? "))

random.shuffle(questions)
s_questions = questions[:choice]

score = 0

for question in s_questions:
    print(f"{question['question']}")
    for option in question["options"]:
        print(option)

    answer=int(input("Enter your answer: "))

    if answer==question["answer"]:
        score+=question["point"]
        print(f"total points {score}")      

if score==300:
    print("")  