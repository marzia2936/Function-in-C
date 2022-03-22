/* Suppose you are planning to make a simple calculator. Your calculator has
four functions-add(),subtract(),multiply() and divide().
Each of these functions takes two floating point numbers as input and returns the
result after applying the corresponding operation. Scan different values from the user and test these four functions with these input. */
#include<stdio.h>
float add(float x, float y){
return x+y;
}
float subtract(float x, float y){
return x-y;
}
float multiply(float x, float y){
return x*y;
}
float division(float x, float y){
return x/y;
}
int main(){
    float x,y;
    printf("Enter the value of x & y:" );
    scanf("%f%f",&x,&y);

    float add_result = add(x,y);
    printf("Result=%f\n",add_result);

    float subtract_result = subtract(x,y);
    printf("Result=%f\n",subtract_result);

    float multiply_result = multiply(x,y);
    printf("Result=%f\n",multiply_result);

    float division_result = division(x,y);
    printf("Result=%f\n",division_result);



return 0;
}
