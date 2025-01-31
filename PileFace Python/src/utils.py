import time
import random

PILE = "pile"
FACE = "face"
randomnumber = 0
scorePc = 0
scorePlayer = 0

def wait():
    for _ in range(3): # Boucle for 
        time.sleep(0.5)
        print(".", end="") # le end empeche le saut a la ligne

def tosscoin():
    randomnumber = random.randint(1,2)
    print("La piece est lancée ")
    wait()
    print("")
    if randomnumber == 1:
        print("La piece tombe sur pile")
    else: 
        print("La piece tombe sur face")
    
    return randomnumber  # Retourner la valeur aléatoire