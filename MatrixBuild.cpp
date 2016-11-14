#include <stdio.h>
#include <stdlib.h>
#define DIM 2

int main(){
    int matriz[DIM][DIM];
    int generi[DIM][DIM];
    int identi[DIM][DIM];
    int lin, col;

    //escrevendo na Matriz
    for(lin = 0 ; lin < DIM ; lin++)
        for(col = 0 ; col < DIM ; col++)
        {
            printf("Valor de [%d][%d]: ", lin+1, col+1);
            scanf("%d", &matriz[lin][col]);
        }

    //escrevendo na Genérica
    for(lin = 0 ; lin < DIM ; lin++)
        for(col = 0 ; col < DIM ; col++)
        {
                generi[lin][col] = 1;
        }

    //escrevendo na Identidade
    for(lin = 0 ; lin < DIM ; lin++)
        for(col = 0 ; col < DIM ; col++)
        {
            if(col == lin){
                identi[lin][col] = 1;
            }else{
                identi[lin][col] = 0;
            }
        }
        
    printf("\n");
    system("pause");
    system("cls");
    
    // imprimindo a matriz na tela
    printf("Matriz A\n");
    for(lin = 0 ; lin < DIM ; lin++)
    {
        for(col = 0 ; col < DIM ; col++)
            printf("%3d", matriz[lin][col]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
    printf("\n");
    
    // imprimindo a genérica na tela
    printf("Matriz B generica\n");
    for(lin = 0 ; lin < DIM ; lin++)
    {
        for(col = 0 ; col < DIM ; col++)
            printf("%3d", generi[lin][col]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
    printf("\n");
    
    // imprimindo a identidade na tela
    printf("Matriz identidade\n");
    for(lin = 0 ; lin < DIM ; lin++)
    {
        for(col = 0 ; col < DIM ; col++)
            printf("%3d", identi[lin][col]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
    printf("\n");
    system("pause");
}
