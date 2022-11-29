import random
    

def get_board(rockList, Pile, randbeads): # here we store beads in each pile

    # Get initial board
    print("Let's look at the board now.")
    for i in range(0, Pile):
        randbeads = random.randint(3, 8)
        rockList.append(randbeads)
    
    #this function shows all the random beads stores in each pile


#this function is to validate all the possible conditions 
def checkValidity(rockList, Pile, player):
    print ('***** ',player,'turns *****') 
    print('L:',rockList[0],'\t','C:',rockList[1],'\t','R',rockList[2])

    # this loop is to tests for valid input - if valid, break loop - if not, keep asking
    while True:
        pile = input('Choose a pile to take from (L/C/R):') 
        # If all conditions for input are CORRECT, break out of loop
        if(pile=='l'or pile=='c' or pile=='r' or pile=='L'or pile=='C' or pile=='R' ):

            # here we use pile as a integer just not to make our code complex (l=1,c=2,r=3)
            if('l' in pile or 'L' in pile ):
                piles=1
            elif('c' in pile or 'C' in pile ):
                piles=2
            elif('r' in pile or 'R' in pile ):
                piles=3
            #if all these conditions are true then we goto next conditon otherwise it throw an error
        

            #now we ask user to input beads between 1-3
            beads = int(input('Choose a number of beads to take (1/2/3): '))

            if(beads>0 and beads<=3): #checks input is between (1-3)
                if(rockList[piles-1]!=0): # checks the pile is not empty
                    if (beads <= rockList[piles - 1]): #cceck that beads are less than piles
                            break #break out from while loop 
                    else:
                        print('The  pile has less than ',beads,' beads in it.')
                else:
                    print("pile has no beads left")

            else:
                if (beads <= 0):
                    print("You must take at least one bead.")
                elif (beads > 3):
                    print('You cant take more than three beads.')
            
  
        else:
            if(pile!='l' or pile!='c' or pile!='r'):
                print("invalid pile ")
                print('You must select a valid pile. (L/C/R)')
            
        
    # Update state of list
    rockList[int(piles) - 1] -= int(beads) #whatever pile and beads user select it will remove selected beads from selected pile

    # if you want to show board then just uncomment this code


    # print("Let's look at the board now.")
    # print("-" * 25)
    # for i in range(0, randPile):
    #     print('Pile [',i+1,']:',  'O' * rockList[i])
    
    # print("-" * 25)
   



def playGame(rockList, Pile,  name1, name2, player):

    #game strt from here
    while True: 
        checkValidity(rockList, Pile, player)
        
        # To determine winner, check if rockList contains all 0's on that player's turn
        if rockList == [0] * len(rockList): #if player remove last bead from last pile then he lose
            if player==name1:
                print('game over')
                print(name2,' win')
                break
            else:
                print('game over')
                print(name1,' win')
                break
    
            
            
        # switch players 2->1, 1->2 
        if player == name1:
            player = name2

        else:
            player = name1



#starting of code is from here---->

print( """ CSCI 1106 Assignment 1: Nim
 
 Author: [Your name here]

 A two-player hot-seat implementation of the game of Nim. """)



rockList = []
Pile = 3 # L C R
randbeads = random.randint(3, 8) #we can use it for every pile
name1=input("Enter player 1 name: ")
name2 = input("Enter player 2 name: ")

player = name1 # Set current player to 1 (for switching later)

get_board(rockList, Pile, randbeads) # Set initial board
playGame(rockList, Pile,  name1, name2, player) 
