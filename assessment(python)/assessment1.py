# List of quiz questions with their options and correct answers
questions = [
    {
        "question":"who is the prime minister of india?",
        "options": ["1) Narendra Modi", "2) Rahul Gandhi", "3) Amit Shah", "4) Narendra Modi"],
        "answer": 1
        
    },
    {
        "question": "In which year did India gain independence?",
        "options": ["1) 1942", "2) 1947", "3) 1950", "4) 1952"],
        "answer": 2
    }

]


def add(self):
    print("Add quistions")
    quistion_text=input("Enter quistion: ")# enter new quistion
    options=[]
    for i in range(4): # run for loop to 4
        option=input(f"Enter option {i+1}: ") #Enter all 4 options
        option = f"{i + 1}) {option}"  # Format option with numbering
        options.append(option)
    answer=int(input("Enter the number of the correct answer (1-4): ")) 
       
    
    questions.append({   # Add the new question to the list
    "question": quistion_text,
    "options": options,
    "answer": answer
    })
    print("Question added successfully!!")


def view(slef):
    print("View quistions")
    for i in range(len(questions)): # Loop through all questions
        print(questions[i]["question"])  # Print the question text
        for j in range(len(questions[i]["options"])):   # Print each option
            print(questions[i]["options"][j])
            
            
            
def delete(slef):
    print("Delete quistions")
    for i in range(len(questions)):# Display questions with numbers for selection
        print(f"{i+1}. {questions[i]['question']}")#############
        
    del_index=int(input("Enter the number of the question to delete : "))
    if 0< del_index  < (len(questions)):
         deleted_question=questions.pop(del_index)   # Remove the question from the list
         print(f"Deleted quistion: {deleted_question['question']}")###############

                    
def quiz(slef):
    print("QUIZ CREAKER")
    print("QUIZ STARTED")
    for i in range(len(questions)):  # Loop through all questions in the quiz
        print(questions[i]["question"]) # Print the current question
        for j in range(len(questions[i]["options"])):
            print(questions[i]["options"][j])   
        user_answer = int(input("Enter your answer: ")) # Get the user's answer and validate it
        if user_answer == questions[i]["answer"]:    # Compare user's answer to the correct answer
            print("Correct Answer")
        else:
              print("Wrong Answer")
        print("\n" + "-"*40)    # Separator between questions
        print("QUIZ ENDED")
        
        
while True: #infinit loop
    head="""    WELCOME TO TOPS QUIZ GAME CHALLANGE"
                Select your role:
                    -> Quiz Master      (press 1)"
                    -> quiz Creaker     (press 2)
        """
    
    print(head)
    choice1 = int(input("Enter your Role: "))
    if choice1 == 1:
        # Menu for Quiz Master actions
        menu='''
                press 1 for add quistions
                press 2 for view quistions
                press 3 for delete quistions
                press 4 for  exit
        '''
        print(menu)
        choice2 = int(input("Which optionns you want to perform : "))
        if choice2==1:
            add(questions)
        elif choice2==2:
            view(questions)
        elif choice2==3:
            delete(questions)
        else:
            print("Exiting...")
            break   
    elif choice1 == 2:
        quiz(questions)
    else:
        break
        
 