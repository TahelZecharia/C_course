#include<stdio.h>
#include<math.h>
#include "NumClass.h"
double isArmstrongHelp(int num, int p);

int isArmstrong(int x){
    int nunOdDigit=0, i = x;
    while (i>0)
   {
       nunOdDigit++;
       i /= 10;
   }
    if (isArmstrongHelp(x, nunOdDigit) == x) return 1; 
    return 0;
}

/*help func to the isArmstrong func. get int of the number
and int of pow and will רeturn the total amount of each of 
the digits to the power of p. */

double isArmstrongHelp(int num, int p){
    int temp = num, curr;
    double sum = 0;
    while (temp > 0)
    {
        curr = temp%10;
        sum += pow(curr, p);
        temp /= 10;
    }
    return sum; 
}

int isPalindrome(int y){
    int num = y, oppositeNum = 0, plus = 0;
    while (num > 0)
    {
        oppositeNum *= plus;
        oppositeNum += num%10;
        plus *= 10;
        num /= 10;
    }
    if (oppositeNum == y) return 1;
    return 0; 
}

// int main(){
//     printf("%d\n",isArmstrong(407));
//         printf("%d\n",isArmstrong(1));
//             printf("%d\n",isArmstrong(0));//1


// }

