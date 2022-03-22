/* Write a function that takes an integer as input and prints EVEN if the number is divisible by 2, otherwise
prints ODD. Call this function from the main function */
#include<stdio.h>
int number(int x){
    if(x%2==0){
        printf("Number is EVEN\n");
    }
    else printf("Number is ODD");
}
int main(){
number(12);
return 0;
}
