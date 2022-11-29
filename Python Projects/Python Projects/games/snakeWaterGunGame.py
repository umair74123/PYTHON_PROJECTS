from cProfile import label
from itertools import starmap
from operator import truediv
import random
from tracemalloc import start

def gun(comp,you):
    # this is done when both enter same thing
    if comp==you:
        return None
    # this happen when comp enter snake
    if (comp=='s' and you=='w'):
        return False
    elif (comp=='s' and you=='g'):
        return True
    # this happen when comp enter Water
    if (comp=='w' and you=='s'):
        return True
    elif (comp=='w' and you=='g'):
        return False
     # this happen when comp enter gun
    if (comp=='g' and you=='s'):
        return False
    elif (comp=='g' and you=='w'):
        return True

randNo = random.randint(1,3)
print("computer Turn:  Snake(s), Water(w) or Gun(g)")
if randNo==1:
    comp='s'
elif randNo==2:
    comp='w'
elif randNo==3:
    comp='g'


you=input("your Turn:  Snake(s), Water(w) or Gun(g) ")
if you =='s' or you=='g' or you=='w':
    res= gun(comp,you)
    print( "Computer choose  "+str(comp))
    print( "You choose   "+ str(you))
    if res==None:
        print("Game is Tie! " )
    elif res==True:
        print("you Won! " )
    else:
        print("Computer Won! "  ) 
else:
    print("\nyou Enter a Wrong Number! Please Try again  \n")