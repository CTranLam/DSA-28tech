#include<stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int ans=1; // khai bao bien kq
	if(n<8){
		int i;
		for(i=1 ; i<=n ; i++){
			ans=ans*i; // cap nhat bien ket qua
		}
		printf("%d" , ans);
	}
	else{
		printf("ERROR");
	}
}
