#include <stdio.h>
#include "myMath.h"

double function1(double x);

double function2(double x);

double function3(double x);

int main()
{
    double num;
    printf("\nEnter a real number: ");
    scanf("%lf", &num);
    
    double ans1 = function1(num);
    double ans2 = function2(num);
    double ans3 = function3(num);
    
   printf("\nThe value of f(x) = e^x + x^3 - 2 at the point %0.4lf is: %0.4lf" , num, ans1); 
 printf("\nThe value of f(x) = 3x + 2x^2 at the point %0.4lf is: %0.4lf" , num, ans2);
    printf("\nThe value of f(x) = (4x^3)/5 - 2x at the point %0.4lf is: %0.4lf" , num, ans3);
	
    return 0;
}


double function1(double x){
 double ans = 0;
 ans = sub((add((Exp(x)) , (Pow(x,3)))), 2);
 return ans;
}

double function2(double x){
    double ans= 0;
    ans = add((mul(x,3)) , mul((Pow(x,2)), 2));
    return ans;
}

double function3(double x){
    double ans = 0;
    ans = sub((div((mul((Pow(x,3)),4)),5)) , (mul(x,2)));
    return ans;
}
