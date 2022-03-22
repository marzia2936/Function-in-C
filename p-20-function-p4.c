/* Write a function that takes an integer as input and prints all of its divisors.
Call this function from function. */
#include<stdio.h>
void print_divisors(int x){
int i;
for(i=1; i<=x; i++){
    if(x%i == 0){
        printf("%d\t",i);
    }
}
}
int main(){
print_divisors(45);
return 0;
}
