from src.nextRound import nextRound
# from src.nextRound import scorePc, scorePlayer
from src.utils import scorePc, scorePlayer

def App():
    global scorePlayer, scorePc

    while True:
       
        # Appeler nextRound et récupérer les nouveaux scores
       scorePlayer, scorePc = nextRound(scorePlayer, scorePc)