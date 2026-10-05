#include <stdio.h>

int main() {
    int numbers[10]; 

    for(int i = 0; i < 10; i++) {
        printf("Enter numbers: ");
        scanf("%d", &numbers[i]);
    }

    printf("Array contents: ");
    printf("[");
    for(int i = 0; i < 10; i++) {
        printf("%d,", numbers[i]);
    }
    printf("]");

    printf("\n");

    printf("Reversed Array : ");
    printf("[");
    for(int i = 9;i >= 0;i-- ){
        printf("%d,",numbers[i]);
    }
    printf("]");

    printf("\n");

    int sum = 0;
    printf("Sum of the contents : ");
    for(int i = 0;i < 10;i++){
        sum += numbers[i];
    }
    printf("%d",sum);

    printf("\n");

    printf("Greatest Number among the given numbers : ");
    int max = 0;
    for(int i = 0;i < 10;i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
        }
        printf("%d",max);

        printf("\n");

        printf("Least Number among the given numbers : ");
    int min = numbers[0];
    for(int i = 0;i < 10;i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
        }
        printf("%d",min);
    
    printf("\n");    

    int count = 0;
    int x;
    printf("Enter the number to Count occurences of that number : ");
    scanf("%d",&x);
    for(int i = 0; i < 10;i++){
        if(numbers[i] == x){
            count += 1;
        }  
    }
    printf("%d is the no. of occurences of number %d \n",count,x);  

    // Even Numbers and Odd numbers in array

    int even;
    int odd;

    printf("Even Numbers : ");
    printf("[");

    for(int i = 0 ; i < 10;i++){
        if(numbers[i] % 2 == 0){
            printf(" %d,",numbers[i]);
        }
    }

    printf("]\n");
    
    printf("Odd Numbers : ");
    printf("[");

    for(int i = 0 ; i < 10 ; i++){
        if(numbers[i] % 2 != 0){
            printf(" %d,",numbers[i]);
        }
    }

    printf("]\n");

    // Count of Even numbers and Odd numbers in an Array

    int ecount = 0;
    int ocount = 0;

    for(int i = 0; i < 10; i++){
        if(numbers[i] % 2 == 0){
            ecount++;
        }
        else{
            ocount++;
        }   
    }
    
    printf("%d is no. of even numbers\n",ecount);
    printf("%d is no. of odd numbers\n",ocount);

    // Sum of Even  Numbers And Odd Numbers

    int esum = 0;
    int osum = 0;

    for(int i = 0; i < 10; i++){
        if(numbers[i] % 2 == 0){
            esum += numbers[i];
        }
        else{
            osum += numbers[i];
        }   
    }

    printf("%d is the sum of Even numbers\n",esum);
    printf("%d is the sum of odd numbers\n", osum);

    // Average of Even Numbers and Odd Numbers

    int eaverage = esum/ecount;
    int oaverage = osum/ocount;

    printf("%d is Average of Even Numbers :\n",eaverage);
    printf("%d is Average of Odd Numbers :\n",oaverage);

    // Counting No. of +ve , -ve Numbers and No. of Zeroes

    int count0 = 0;
    int countp = 0;
    int countn = 0;

    for(int i = 0; i < 10 ; i++){
        if(numbers[i] == 0){
            count0++;
        }
        else if(numbers[i] > 0){
            countp++;
        }
        else{
            countn++;
        }
    }
    printf("%d is the no. of zeroes\n%d is the no. of positive numbers\n%d is the no. of negetive numbers\n",count0,countp,countn);

    // Frequency of All Elements

    int visited[100] = {0}; 
    
    for (int i = 0; i < 10; i++) {
        // Skip this element if it was already counted
        if (visited[i] == 1) {
            continue;
        }
        
        int count = 1;
        // Check the rest of the array for the same number
        for (int j = i + 1; j < 10 ; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
                // Mark the duplicate as visited
                visited[j] = 1;
            }
        }
        
        // Print the result for the current element
        printf("   %d   |    %d\n", numbers[i], count);
    }

    return 0;
}    