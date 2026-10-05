# include <stdio.h>

int main(){

    int c1,r1,c2,r2;

    printf("Enter the no. of rows and columns for matrix 1 : ");
    scanf("%d %d",&r1,&c1);
 
    printf("Enter the no. of rows and columns for matrix 2 : ");
    scanf("%d %d",&r2,&c2);

    printf("\n");

    if( (r1 == r2) && (c1 == c2) ){

    int mat1[r1][c1];
    int mat2[r2][c2];

    for(int i = 0; i < r1 ; i++ ){
        for(int j = 0;  j < c1 ; j++){
            printf("Enter numbers horizontally for 1st Matrix : ");
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < r2 ; i++ ){
        for(int j = 0;  j < c2 ; j++){
            printf("Enter numbers horizontally for 2nd Matrix : ");
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix 1 :");
    printf("\n");
    printf("[");

    for(int i = 0; i < r1; i++){
        printf("\n");
        for(int j = 0 ; j < c1; j++){
            printf(" %d,",mat1[i][j]);
        }
    }

    printf("\n");
    printf("]");
    printf("\n");

    printf("Matrix 2 :");

    printf("\n");

    printf("[");

    for(int i = 0; i < r2; i++){
        printf("\n");
        for(int j = 0 ; j < c2; j++){
            printf(" %d,",mat2[i][j]);
        }
    }

    printf("\n");
    printf("]");

    int addmat[r1][c1];
    int submat[r1][c1];

    for(int i = 0; i < r1 ; i++){
        for(int j = 0; j < c1; j++){
            addmat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\n");

    printf("Addition of Two Matrices : ");
    printf("\n");
    printf("[");

    for(int i = 0; i < r1; i++){
        printf("\n");
        for(int j = 0 ; j < c1; j++){
            printf(" %d,",addmat[i][j]);
        }
    }

    printf("\n");
    printf("]");

    for(int i = 0; i < r1 ; i++){
        for(int j = 0; j < c1; j++){
            submat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("\n");

    printf("Substraction of Two Matrices : ");
    printf("\n");
    printf("[");

    for(int i = 0; i < r1; i++){
        printf("\n");
        for(int j = 0 ; j < c1; j++){
            printf(" %d,",submat[i][j]);
        }
    }

}
else{
    printf("Addition not possible\n");
    printf("Substraction not possible\n");
}

return 0;

}