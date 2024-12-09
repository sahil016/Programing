
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
        "answer": 2,
    }

]


a1="WELCOME TO TOPS QUIZ GAME CHALLANGE"
a2="Select your role:"
a3="-> Quiz Master  (press 1)"
a4="-> quiz Creaker (press 2)"
width=50 #variable to arrenge variable 
width2=80  #variable to arrenge variable 

#infinit loop
while True:

    print(a1.center(width,"*"))                    ##
    print(a2.center(width))                        ##
    print(a3.center(width2))                       ## Add all variables with width to center it        
    print(a4.center(width2))                       ##

    choice=int(input("Enter your choice: ")) #enter choice

    if choice==1:   #if choice is 1
        
        # #print all questions
        # menu="press 1 for add quistions"
        # menu1="press 2 for view quistions"
        # menu2="press 3 for delete  quistions"
        # menu3="press 4 for  exit"
        # width=50
     
        # print(menu.center(width))
        # print(menu1.center(width))
        # print(menu2.center(width))
        # print(menu3.center(width))    
       
       
        # Menu for Quiz Master actions
        menu='''
                press 1 for add quistions
                press 2 for view quistions
                press 3 for delete quistions
                press 4 for  exit
        '''
        
        print(menu)

        # Take user input for Quiz Master options
        choice2=int(input("Enter your choice: ")) #input choice for the Qize Master
        if choice2==1:# if choice is 2
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

        elif choice2==2:    # View all existing questions
            print("View quistions")
            for i in range(len(questions)): # Loop through all questions
                print(questions[i]["question"])  # Print the question text
                for j in range(len(questions[i]["options"])):   # Print each option
                    print(questions[i]["options"][j])
                    
                    
        elif choice2==3:
            print("Delete quistions")
            for i in range(len(questions)):# Display questions with numbers for selection
                print(f"{i+1}. {questions[i]['question']}")#############
                
            del_index=int(input("Enter the number of the question to delete : "))
            if 0< del_index  < (len(questions)):
                deleted_question=questions.pop(del_index)   # Remove the question from the list
                print(f"Deleted quistion: {deleted_question['question']}")###############
            else:
                print("Invalid choice!!")
            
        elif choice2==4:    # Exit the Quiz Master menu
            break        
        
    
           

    elif choice==2:
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
   
    
    
    else:   # Handle invalid main menu choices
        print("Invalid Choice")