# include <stdio.h>

int main(){

    int r,c;

    printf("Enter the no.of rows and columns : ");
    scanf("%d,%d",&r,&c);

    printf("\n");
    if( r == c){

        int mat[r][c];

        for(int i = 0; i < r ; i++ ){
        for(int j = 0;  j < c ; j++){
            printf("Enter numbers horizontally for Matrix : ");
            scanf("%d",&mat[i][j]);
        }
        }

        printf("Original Matrix :");
        printf("\n");
        printf("[");

        for(int i = 0; i < r; i++){
        printf("\n");
        for(int j = 0 ; j < c; j++){
            printf(" %d,",mat[i][j]);
        }
    }

        printf("\n");
        printf("]");
        printf("\n");

        for(int i = 0; i < r; i++ ){
            for(int j = 0; j < c; j++ ){
                if( i > j ){
                    mat[i][j] = 0;
                }
            }
        }
        
        printf("Upper Triangular Matrix :");
        printf("\n");
        printf("[");

        for(int i = 0; i < r; i++){
        printf("\n");
        for(int j = 0 ; j < c; j++){
            printf(" %d,",mat[i][j]);
        }
    }

        printf("\n");
        printf("]");
        printf("\n");
    }

}