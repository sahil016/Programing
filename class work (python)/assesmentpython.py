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
width=50
width2=80
while True:
    
    print(a1.center(width))
    print(a2.center(width))
    print(a3.center(width2))
    print(a4.center(width2))

    choice=int(input("Enter your choice: "))

    if choice==1:
        menu="press 1 for add quistions"
        menu1="press 2 for view quistions"
        menu2="press 3 for delete  quistions"
        menu3="press 4 for  exit"
        width=50
     
        print(menu.center(width))
        print(menu1.center(width))
        print(menu2.center(width))
        print(menu3.center(width))

        choice2=int(input("Enter your choice: "))
        if choice2==1:
            print("Add quistions")
            quistion_text=input("Enter quistion: ")
            options=[]
            for i in range(4):
                option=input(f"Enter option {i+1}: ")
                option = f"{i + 1}) {option}"
                options.append(option)
            answer=int(input("Enter the number of the correct answer (1-4): ")) 
            questions.append({
                "question": quistion_text,
                "options": options,
                "answer": answer
            })
            print("Question added successfully!!")

        elif choice2==2:
            print("View quistions")
            for i in range(len(questions)):
                print(questions[i]["question"])
                for j in range(len(questions[i]["options"])):
                    print(questions[i]["options"][j])
                    
                    
        elif choice2==3:
            print("Delete quistions")
            for i in range(len(questions)):
                print(f"{i+1}. {questions[i]['question']}")#############
                
            del_index=int(input("Enter the number of the question to delete : "))
            if 0< del_index  < (len(questions)):
                deleted_question=questions.pop(del_index)
                print(f"Deleted quistion: {deleted_question['question']}")###############
            else:
                print("Invalid choice!!")
            
                
        
    
           

    elif choice==2:
        print("QUIZ CREAKER")
        print("QUIZ STARTED")
        for i in range(len(questions)):
            print(questions[i]["question"])
            for j in range(len(questions[i]["options"])):
                print(questions[i]["options"][j])   
            user_answer = int(input("Enter your answer: "))
            if user_answer == questions[i]["answer"]:
                print("Correct Answer")
            else:
                print("Wrong Answer")
            print("\n" + "-"*40) 
   
    
    
    else:
        print("Invalid Choice")
            
            
        
