#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
        {
            if(b==0)
            {    
                if(c==0)
                    printf("Phuong trinh co vo so nghiem");
                else
                    printf("Phuong trinh vo nghiem");
            }
            else
                printf("%lf",-b/c);
            return 0;
        }
    
    double x1,x2,d,m,n;
    d=b*b - 4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("%lf\n%lf",x1,x2);
    }
    else
    {
        if(d==0)
            printf("%lf",-b/2*a);
        else
        {
            m=-b/(2*a);
            n=sqrt(-d)/(2*a);
            if(n>0)
            {
                printf("%lf+%lfi\n",m,n);
                printf("%lf-%lfi",m,n);
            }
            else
            {
                printf("%lf-%lfi",m,n);
                printf("%lf+%lfi\n",m,n);
            }    
        }
    }
}
