# include <stdio.h>

int main(){
    int num[3][2] ;

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 2 ; j++){
            printf("Enter the the numbers filled Horizontally :");
            scanf("%d", &num[i][j]);
        }
    }

    printf("Original Array : \n");

    printf("[");

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0 ; j < 2; j++){
            printf(" %d,",num[i][j]);
        }
    }
    printf("\n");
    printf("]");

    printf("\n");

    printf("Transpose of a 2D array : \n");

    printf("[");

    for(int i = 0; i < 2 ; i++){
        printf("\n");
        for(int j = 0 ; j < 3; j++){
            printf(" %d,", num[j][i]);
        }
    }

    printf("\n");
    printf("]");

    return 0;
}