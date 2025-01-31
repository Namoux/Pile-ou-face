import os
import sys

from src.utils import wait, tosscoin
from src.utils import PILE,FACE, randomnumber

def nextRound(scorePlayer, scorePc):
    if scorePc == 10:
        print("*******************GAME OVER*******************")
        sys.exit(0)

    print("Pile ou Face ?")
    choice = input("Entrez Pile ou Face :").lower()  # Convertir en minuscule pour une comparaison uniforme

    # Vérifier si l'entrée est valide
    if choice not in [PILE, FACE]:
        print("Mauvaise entrée")
        return scorePlayer, scorePc  # Ne pas lancer la pièce et revenir sans changer les scores

    # Appeler tosscoin() et obtenir le résultat seulement si l'entrée est valide
    randomnumber = tosscoin()

    # Effectuer la comparaison avec le résultat de tosscoin
    if choice == PILE:
        cmpchoice = 1
    else:  # choice == FACE
        cmpchoice = 2

    if cmpchoice == randomnumber:
        print("Vous avez gagné")
        scorePlayer += 1
    else:
        print("Vous avez perdu")
        scorePc += 1

    # Afficher les scores
    print(f"Votre score est de {scorePlayer} points")
    print(f"Score IA est de {scorePc} points")

    # On retourne les scores
    return scorePlayer, scorePc
