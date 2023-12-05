/*
                *****
                *   
                *  **
                *   *
                *****
*/

#include<stdio.h>

int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        
            if(i==2){
                printf("*");
            }
        for (int j = 1; j <= n; j++) {
            if ((i == 1 || i == n) || (j == 1 && i >= 3) || (j == n && i >= 3)) {
                printf("*");
            }
            else if(i==3 && j==4){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}