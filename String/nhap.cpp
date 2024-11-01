#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,tb;
	int tong;
	scanf("%lf %lf %lf" ,&a,&b,&c);
	tong=a+b+c;
	tb=tong/3;
	printf("%d\n" ,tong);
	printf("%lf" ,tb);
}
