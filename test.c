#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    float from = 1;
    float to = 2;

    for(int i = 0; i < 1; i++) {
        int r = (float)rand()/RAND_MAX * (to-from+1) + from;
        printf("%d\n",r);
    }

    return 0;
}

// generer un nombre entre 1 et 2
int r = (int)rand() %2;

// generer un nombre entre 0, 1 et 2
int r = (int)rand() %3;


 while (reponse == 1 || reponse == 2 {}


    srand(time(NULL));
    float from = 1;
    float to = 2;

        int random = (float)rand()/RAND_MAX * (to-from+1) + from;

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

    char* text = (random == 1 ? "C'est GAGNé, bien joué !\n" : "C'est PERDU, dommage...\n");
   switch (random)
    {
    case 1:
            printf("PILE!\n");
                if (random == reponse) { 
                    printf("C'est GAGNé, bien joué !\n");
                    printf("\n");
                } else { 
                    printf("C'est PERDU, dommage...\n"); 
                    printf("\n");
                  }
    break;
    case 2:
            printf("FACE!\n");
                if (random == reponse) { 
                    printf("C'est GAGNé, bien joué !\n");
                    printf("\n");
                } else { 
                    printf("C'est PERDU, dommage...\n"); 
                    printf("\n");
                  }
    break;
    // default:

    //     break;
    }