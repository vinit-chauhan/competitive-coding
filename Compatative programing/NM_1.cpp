#include<stdio.h>
#include<math.h>

double next_val(double x, double y);
double func(double x);

double a = 1, b = 0, c = -9, d = 1;

int main()
{
    double x1,x2,x3;
    printf("Enter initial value of x1 and x2 : \n");
    scanf("%lf %lf",&x1,&x2);
//    printf("Enter value for coefficients of polynomial of degree 3 : \n");
//    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    do{
            x3 = next_val(x1, x2);
            if (x3 < 0)
                x1 = x3;
            else
                x2 = x3;

    }while(x2 - x1 < 0.0001);
    printf("Value is %6.4lf", x3);
    return 0;
}

double func(double z)
{
    double function;
    function = (a*z*z*z) + (b*z*z) + (c*z) + d;
    printf("Value for function is %lf \n", function);
    return function;
}

double next_val(double x, double y)
{
    double val;
   // printf(">>>");
    val = (x*func(y) - y*func(x))/ (func(y) - func(x));
    printf("Value is %lf .\n", val);
    return val;
}
