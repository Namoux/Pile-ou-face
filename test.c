#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 255

enum pileT { UN =1, pile =1, PILE =1, pILe =1, PilE =1, p =1 };

int main(){

    // generer un nombre entre 1 et 2 code de Esteban
    // int r = (int)rand() %2;

    // generer un nombre entre 0, 1 et 2 code de Esteban
    // int r = (int)rand() %3;

    //code random de Massi a developper
        //char* text = (random == 1 ? "C'est GAGNé, bien joué !\n" : "C'est PERDU, dommage...\n");
            // // switch (random)
            //     {
            //     case 1:
            //         // "code a mettre"
            //     break;
            //     case 2:
            //             printf("FACE!\n");
            //                 if (random == reponse) { 
            //                     printf("C'est GAGNé, bien joué !\n");
            //                     printf("\n");
            //                 } else { 
            //                     printf("C'est PERDU, dommage...\n"); 
            //                     printf("\n");
            //                 }
            //     break;
            //     // default:
            //         // "code a mettre"
            //     //     break;
            //     }
    // code sleep de Massi a developper    
        // while(time(NULL)-to <10){}

        enum pileT n = 1;

        printf("UN = %d.\n", UN);
        printf("pile = %d.\n", pile);
        printf("PILE = %d.\n", PILE);
        printf("pILe = %d.\n", pILe);
        printf("PilE = %d.\n", PilE);
        printf("p = %d.\n", p);

        char buf[BUF_SIZE];
        memset(buf, 0, BUF_SIZE);

        fgets(buf, BUF_SIZE, stdin);
        buf[strlen(buf)-1] = 0;

        if (buf == pile) {
            buf == 1;
        }
        printf("buf = %s\n", buf);
        printf("n = %d.\n", n);
	return 0;
}
