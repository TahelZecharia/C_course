#include<stdio.h>
#include "NumClass.h"
int atzeret(int i);

int isPrime(int z) {
    if (z == 0) return 0;
    int temp = z-1;
    while (temp > 1)
    {
        if(z%temp == 0) return 0;
        temp--;
    }
    return 1;
}

int isStrong(int k) {
    if(k==0) return 0;
    int temp, num = k, sum=0;
    while (num > 0){
        temp = num % 10;
        sum += atzeret(temp);
        num = num/10;
    }
    if (sum == k) return 1;
    return 0;
} 

/* *help func to the isStrong func. will return the factorial of the input */
int atzeret(int i) {
    if (i == 0) return 1;
    int ans = i;
    int temp = i-1;
    while (temp > 1)
    {
        ans = ans*temp;
        temp--;
    }
    return ans;
}

// int main(){
//     printf("%d\n",isStrong(0));

// }

