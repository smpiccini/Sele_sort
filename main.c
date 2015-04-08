#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int v[N];
    int i,j,max,pos_max,scambia;
    for (i=0;i<N;i++) {
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &v[i]);
    }
    for (i=N-1;i>=0;i--) {
        max=v[i];
        pos_max=i;
        for (j=i;j>=0;j--) {
            if (v[j]>max) {
                max=v[j];
                pos_max=j;
            }
        }
        scambia=v[i];
        v[i]=max;
        v[pos_max]=scambia;
    }
    printf("In ordine crescente, i valori della lista sono:\n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

