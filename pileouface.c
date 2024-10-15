#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define BUF_SIZE 255


int main () {

    char buf[BUF_SIZE];
    memset(buf, 0, BUF_SIZE);


    //titre du jeu
    printf("######## Pile ou Face ########\n");
    printf("\n");

    printf("Pile ou face ?\n"); 
    printf("1. Pile\n");
    printf("2. Face\n");
    printf("0. Quitter le jeu\n");
    printf("\n");

    fgets(buf, BUF_SIZE, stdin);
    buf[strlen(buf)-1] = 0;

    int reponse = atoi(buf);

    if (reponse == 1) {
        printf("Vous faites Pile !\n");
        printf("La pièce est jetée");
            srand(time(NULL));
            float from = 1;
            float to = 2;

            int random = (float)rand()/RAND_MAX * (to-from+1) + from;
            for(int i = 0; i < 3; i++) {
                printf(".");
                // printf est bufferisé et qu'il n'est pas vidé à chaque appel, il faut le forcer. L'utilisation de '\n' force (en général) force l'écriture. 
                fflush(stdout);
                usleep(500000);
            }
            printf("\n");

            if (random == 1) { 
                printf("PILE!\n");
                    if (random == reponse) { 
                        printf("C'est GAGNé, bien joué !\n");
                         printf("\n");
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                         printf("\n");
                    }
            } 

            if (random == 2) { 
                printf("FACE!\n");
                    if (random == reponse) { 
                         printf("C'est GAGNé, bien joué !\n");
                         printf("\n");
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                        printf("\n");
                    }
            }

    } else if (reponse == 2) {
        printf("Vous faites Face !\n");
        printf("La pièce est jetée");
            srand(time(NULL));
            float from = 1;
            float to = 2;

            int random = (float)rand()/RAND_MAX * (to-from+1) + from;
            for(int i = 0; i < 3; i++) {
                printf(".");
                // printf est bufferisé et qu'il n'est pas vidé à chaque appel, il faut le forcer. L'utilisation de '\n' force (en général) force l'écriture. 
                fflush(stdout);
                usleep(500000);
            }
            printf("\n");

            if (random == 1) { 
                printf("PILE!\n");
                    if (random == reponse) { 
                        printf("C'est GAGNé, bien joué !\n");
                        printf("\n");
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                        printf("\n");
                    }
            } 
            
            if (random == 2) { 
                printf("FACE!\n");
                    if (random == reponse) { 
                        printf("C'est GAGNé, bien joué !\n");
                        printf("\n");
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                        printf("\n");
                    }
            }

    } else if (reponse == 0) {
        printf("Vous quittez le jeu.\n");
        printf("########### GAME OVER ###########\n");
    }

return 0;
}