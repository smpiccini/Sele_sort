#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int v[N];
    int i,j,min,pos_min,scambia;
    for (i=0;i<N;i++) {
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &v[i]);
    }
    for (i=0;i<N;i++) {
        min=v[i];
        pos_min=i;
        for (j=i;j<N;j++) {
            if (v[j]<min) {
                min=v[j];
                pos_min=j;
            }
        }
        scambia=v[i];
        v[i]=min;
        v[pos_min]=scambia;
    }
    printf("In ordine crescente, i valori della lista sono:\n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

