#include<stdio.h>
#include<math.h>

double f(double x)
{
    return cos(x)+2*sin(x)+x*x;
}

double secant(double x0,double x1)
{
    double err=0.00001,x;
    int itr=1,maxitr=20;
    printf("Iteration\tValue\n");
    while(itr<=maxitr)
    {
        x=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
        printf("%d\t\t%lf\n",itr,x);
        if(f(x)>err)
        {
            x0=x1;
            x1=x;
        }
        else
        {
            break;
        }
       itr++;
    }
    return x;
}

int main()
{
    double a,b,root;
    scanf("%lf %lf",&a,&b);
    root=secant(a,b);
    printf("Final Value is %lf",root);
    return 0;
}