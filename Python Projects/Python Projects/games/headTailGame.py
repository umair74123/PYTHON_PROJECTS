from operator import truediv
import random

def check(comp,you,Ychoice):
    sum=comp+you

    if Ychoice=='h':
        if(sum%2==0):
            return 0
    else:
        return 1
    if Ychoice=='t':
        if(sum%2==0):
            return 1
    else:
        return 0


comp=random.randint(1,6)

Ychoice=input("Head(h) or Tail(t) ?")

you=int(input("chosee your number between 1 to 5..."))
if you> 5:
    print("Please enter Between 1 to 5  ")
else:
    if Ychoice=='h':
        res=check(comp,you,Ychoice)
        print(f"\ncomputer choose {comp}  You choose {you} ")
        if res==1:
            
            res="You win"
            print(res)
        else:
            res="You lose"
            print(res)
    elif Ychoice=='t':
        res=check(comp,you,Ychoice)
        print(f"computer choose {comp}  You choose {you} ")
        if res==1:
            res="You win"
            print(res)
        else:
            res="You lose"
            print(res)
    else:
        print("you enter a wrong character  ")