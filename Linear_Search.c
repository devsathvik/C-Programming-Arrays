# include <stdio.h>

int main(){
    int num[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter a number  :");
        scanf("%d",&num);
    }
    int found;
    int position;
    printf("Enter your Number to search : ");
    scanf("%d",&found);

    for (int i = 0; i < 5; i++) {
        if (num[i] == found) {
            position = i; 
            break;        
        }
    }

    if (position != -1) {
        printf("Number %d found at index %d (Position %d in the array).\n", found, position, position + 1);
    } else {
        printf("Number %d was not found in the array.\n", found);
    }

    return 0;
}

