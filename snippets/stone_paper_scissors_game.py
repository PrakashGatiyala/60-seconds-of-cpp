#this is the stone paper scissor game
import random
user=str(input('Enter your name '))
print(" ")
computer_score=0
user_score=0
game_no=0
list=['stone', 'paper', 'scissors']
print('you can chose s or p or z')
print('you will be given 5 chances')
print(" ")
print('s : stone')
print('p : paper')
print('z : scissors')
print(" ")
while(game_no!=5):
    computer_turn=random.choice(list)
    print('your turn ')
    game_no+=1
    user_turn = str(input("you : "))
    print("computer : ",computer_turn)
    print(" ")
    if(user_turn==computer_turn):
        user_score+=1
        computer_score+=1

    elif(user_turn=='s' and computer_turn=='paper'):
        computer_score+=1

    elif(user_turn=='s' and computer_turn=='scissors'):
        user_score+=1

    elif(user_turn=='p' and computer_turn=='stone'):
        user_score+=1

    elif(user_turn=='p' and computer_turn=='scissors'):
        computer_score+=1

    elif(user_turn=='z' and computer_turn=='stone'):
        computer_score+=1

    elif(user_turn=='z' and computer_turn=='paper'):
        user_score+=1

print('YOUR SCORE : ',user_score)
print('COMPUTER SCORE : ', computer_score)
print(" ")
if(user_score > computer_score):
    print("YAY YOU WON !!!!!!!")
elif(user_score < computer_score):
    print("COMPUTER WON , BETTER LUCK NEXT TIME  ")
elif(user_score == computer_score):
    print("ITS A TIE ")
