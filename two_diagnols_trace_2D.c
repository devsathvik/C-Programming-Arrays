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

        printf("Matrix :");
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
        
        int psum = 0;
        int ssum = 0;

        for(int i = 0; i < r; i++){
            psum += mat[i][i];
        }

        for(int i = 0; i < r; i++){
            ssum += mat[i][(r-1)-i];
        }

        printf("\n");

        printf("%d is the sum of the primary diagnol elements\n",psum);
        printf("%d is the sum of the secondary diagnol elements\n",ssum);
    
    }
    else{
        printf("Not a Square Matrix\nPrimary Diagnol and Secondary Diagnol Not possible");
    }

    return 0;

}