#include<stdio.h>
int get_sum(int x , int y){
int sum = x + y;
return sum;
}
void say_hi(){
printf("Hi I am Marzia\n");
}




int main(){
printf("<--Main Function start-->>\n");
say_hi();
int result = get_sum(40,40);
printf("Result=%d",result);
return 0;
}


