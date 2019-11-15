#include <stdio.h>
#include "myMath.h"

double Pow(double x, int y){
if(y == 0) return 1;

else{
return (x*Pow(x, y-1));
}
}

double Exp(int x){
double e = 2.71828182846;

return Pow(e, x);
}
