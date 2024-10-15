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