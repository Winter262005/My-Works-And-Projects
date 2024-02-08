import random

def rps():
  inp=input("Please choose your attack: r for Rock, p for Paper, s for Scissors: ")
  output=["Rock", "Paper", "Scissors"]

  op=random.choice(output)
  print("The Computer chose:",op)

  if (inp=="r" and op=="Rock"):
    print("Its a Tie!")
  elif (inp=="r" and op=="Paper"):
    print("Computer Wins!")
  elif (inp=="r" and op=="Scissors"):
    print("You Win!")
  elif (inp=="p" and op=="Rock"):
    print("You Win!")
  elif (inp=="p" and op=="Paper"):
    print("Its a Tie!")
  elif (inp=="p" and op=="Scissors"):
    print("Computer Wins!")
  elif (inp=="s" and op=="Rock"):
    print("Computer Wins!")
  elif (inp=="s" and op=="Paper"):
    print("You Win!")
  elif (inp=="s" and op=="Scissors"):
    print("Its a Tie!")
  else:
    print("Wrong Input!")

rps()
