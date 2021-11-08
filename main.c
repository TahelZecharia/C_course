#include<stdio.h>
#include "NumClass.h"

int main(){
    int first, last, i;
    scanf("%d%d", &first, &last);
    printf("The Armstrong numbers are:");
    for (i = first; i<= last; i++){
        if (isArmstrong(i) == 1){
            printf(" %d",i);
        }
    }

    printf("\nThe Palindromes are:");
    for (i = first; i<= last; i++){
        if (isPalindrome(i) == 1){
            printf(" %d",i);
        }
    }

    printf("\nThe Prime numbers are:");
    for (i = first; i<= last; i++){
        if (isPrime(i) == 1){
            printf(" %d",i);
        }
    }

    printf("\nThe Strong numbers are:");
    for (i = first; i<= last; i++){
        if (isStrong(i) == 1){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}

