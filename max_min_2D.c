# include <stdio.h>

int main(){
    int num[3][3] ;

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            printf("Enter the the numbers filled Horizontally : ");
            scanf("%d", &num[i][j]);
        }
    }

    int max = 0;

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3; j++){
            if( num[i][j] > max){
                max = num[i][j];
            }
        }
    }

    printf("%d is the maximum element\n",max);

    int min = num[0][0];

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3; j++){
            if( num[i][j] < min){
                min = num[i][j];
            }
        }
    }

    printf("%d is the minimum element\n",min);


}