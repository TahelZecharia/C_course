#include<stdio.h>
#include "NumClass.h"
#include<math.h>

int oppositeNum(int num1, int num2);
int isArmsSum(int x, int p);
int numOfDigits(int x);

int isArmstrong(int x){
    if (isArmsSum(x, numOfDigits(x)) == x) return 1;
    return 0;
}

int numOfDigits(int x){
    if (x == 0) return 0;
    return 1+numOfDigits(x/10);
}

int isArmsSum(int x, int p){
    if (!(x>0)) return 0;
    return (pow(x%10,p) +isArmsSum(x/10,p));
}

int isPalindrome(int y){
    if (oppositeNum(y, 0) == y) return 1;
    return 0;
}

int oppositeNum(int num1, int num2){
   if (num1 == 0){
      return num2;
   }
   num2 *= 10;
   num2 += (num1 % 10);
   num1 = num1/10;
   return oppositeNum(num1, num2);
}

// int main(){

    // printf("%d\n",isPalindrome(12343219));
   
    // printf("%d\n",isPalindrome(123)); //0
    // printf("%d\n",isPalindrome(12321)); //1
   
    // printf("%d\n",isArmsSum(123, 1)); //6
    // printf("%d\n",isArmsSum(123, 2)); //14
    
    //  printf("%d\n",isArmstrong(123)); //0
    //  printf("%d\n",isArmstrong(407)); //1
    //  printf("%d\n",isArmstrong(1)); //1
    //   printf("%d\n",isArmstrong(0)); //1


    //   printf("%d\n",numOfDigits(555)); //3
    //   printf("%d\n",numOfDigits(987654)); //6
    //  printf("%d\n",numOfDigits(1)); //1
     


// }