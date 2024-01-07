

def insert(user_input,score):
    scores=0
    average=0
    for _ in range(user_input):
        ask=int(input("How many marks did you get? "))
        average+=ask
        scores+=ask
        score.append(ask)
    print(f"Average :{average//_}")

def max_score():
    return max(score)
    
def min_score():
    return min(score)


end_game=False

while not end_game:
    if(input("Do you want to continue? y or n? ")=='y'.lower()):
        user_input=int(input("Numbes of students? "))
        score=[]
        abscent=0
        if not user_input==-1:
            insert(user_input,score)
            print(f"Maximum score is {max_score()}")
            print(f"Minimum score is {min_score()}")
            print(f"Abscent student: {abscent}")
        else:
            abscent+=1
            print(f"Abscent :{abscent}")
    else:
        print("End.")
        end_game=True


