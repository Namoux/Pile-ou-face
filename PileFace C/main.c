#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define BUF_SIZE 255

// Fonction conversion en minuscules
void conversmajmin(char*  str) { 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;  
        }
    }
}

// Fonction entrée utilisateur
int saisie() {
    char buf[BUF_SIZE];
    memset(buf, 0, BUF_SIZE);  // Initialisation de buf

    printf("\n");
    printf("Pile ou face ?\n");
    printf("1. Pile\n");
    printf("2. Face\n");
    printf("0. Quitter le jeu\n");
    printf("\n");

    fgets(buf, BUF_SIZE, stdin);
          buf[strlen(buf)-1] = 0;  // Supprimer la touche entrée '\n'

    int numero = atoi(buf);  // Utilisation de atoi pour convertir buf en int

    if (numero != 0 || strcmp(buf, "0") == 0) {  // Vérification si la saisie est réellement "0"
        return numero;  // Si la saisie est 1, 2 ou 0, on la retourne directement
    }

    // Conversion de la chaîne en minuscules
    //conversmajmin(buf);

    // Comparaison de l'entrée et conversion valeur en int 
    if (strcmp(buf, "pile") == 0 || strcmp(buf, "p") == 0) {
        return 1; 
    } else if (strcmp(buf, "face") == 0 || strcmp(buf, "f") == 0) {
        return 2; 
    } else if (strcmp(buf, "quit") == 0 || strcmp(buf, "q") == 0) {
        return 0; 
    }

    return -1;  // Erreur si la saisie n'est pas reconnue
}

int main () {

    int reponse = 0;
    int reussite = 0;
    int echec = 0;

    printf("######## Pile ou Face ########\n");
    printf("\n");

    do {

        reponse = saisie();
        
        if (reponse == 1) {
            printf("Vous faites Pile !\n");
            printf("La pièce est jetée");
                    // random un chiffre entre 1 et 2
                srand(time(NULL)); 
                float from = 1;
                float to = 2;

                int random = (float)rand()/RAND_MAX * (to-from+1) + from;
                // 3 petits points pour le suspense
                for(int i = 0; i < 3; i++) {
                    printf(".");
                    // printf est bufferisé et qu'il n'est pas vidé à chaque appel, il faut le forcer. L'utilisation de '\n' force (en général) l'écriture. 
                    fflush(stdout);
                    usleep(500000);
                }
                printf("\n");

                if (random == 1) { 
                    printf("PILE!\n");
                        if (random == reponse) { 
                            printf("C'est GAGNé, bien joué !\n");
                            printf("\n");
                            reussite = (reussite + 1);
                        } else { 
                            printf("C'est PERDU, dommage...\n"); 
                            printf("\n");
                            echec = (echec + 1);
                        }
                } 

                if (random == 2) { 
                    printf("FACE!\n");
                        if (random == reponse) { 
                            printf("C'est GAGNé, bien joué !\n");
                            printf("\n");
                            reussite = (reussite + 1);
                        } else { 
                            printf("C'est PERDU, dommage...\n"); 
                            printf("\n");
                            echec = (echec + 1);
                        }
                }

        } else if (reponse == 2) {
            printf("Vous faites Face !\n");
            printf("La pièce est jetée");
                // random un chiffre entre 1 et 2
            srand(time(NULL));
            float from = 1;
            float to = 2;

            int random = (float)rand()/RAND_MAX * (to-from+1) + from;
            // 3 petits points pour le suspense
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
                        reussite = (reussite + 1);
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                        printf("\n");
                        echec = (echec + 1);
                    }
            } 
            
            if (random == 2) { 
                printf("FACE!\n");
                    if (random == reponse) { 
                        printf("C'est GAGNé, bien joué !\n");
                        printf("\n");
                        reussite = (reussite + 1);
                    } else { 
                        printf("C'est PERDU, dommage...\n"); 
                        printf("\n");
                        echec = (echec + 1);
                    }
            }

        } else if (reponse == 0) {
            printf("Vous quittez le jeu.\n");
        }
            // singulier pluriel
        if (reussite <= 1) {
            printf("Réussite : %d\n", reussite);
        } else { printf("Réussites : %d\n", reussite); }
        
        if (echec <= 1) {
            printf("Echec : %d\n", echec);
        } else { printf("Echecs : %d\n", echec); }

        printf("\n");
        printf("|-------------------------------|\n");

        if (echec == 10) {
            printf("########### GAME OVER ###########\n");
        }
        if (reponse == 0) {
            printf("########### GAME OVER ###########\n");
        }
        // Boucle while pour que le jeu ne s'arrete pas au 1er tour
    } while (reponse!= 0 && echec < 10);

    return 0;
}