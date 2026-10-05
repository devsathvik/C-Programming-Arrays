# include <stdio.h>

int main(){
    int num[5];
    for(int i = 0; i < 5 ; i++ ){
        printf("Enter your numbers : ");
        scanf("%d",&num[i]);
    }

    printf("Elements of the Array : \n");
    printf("[");

    for(int i = 0; i < 5 ; i++ ){
        printf(" %d,", num[i]);
    }
    
    printf("]\n");

    int temp;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            // if (num[j] > num[j + 1]) ---> For Ascending Order
            if (num[j] < num[j + 1]) // ---> For Decending Order
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Ascending order sorting : \n");

    printf("[");

    for(int i = 0; i < 5 ; i++){
        printf(" %d,",num[i]);
    }

    printf("]");

    return 0;

}