#include<stdio.h>
void seg(unsigned int i)
{
	int temp,t=1;
unsigned long int b=00000000;
while(i!=0)
{
	temp=i%2;
	i=i/2;
	b=b+temp*t;
	t=t*10;

}
printf("%ld",b);
}
int main() {

	int x;
	//scanf("%d",&x);
	int y;
	y=x;
	int t=1;
	int k;
/*
	while(x>9){
		x=x/10;
		t=t*10;
	}
		while(t>0){
			k=y/t;
			seq(k+48);
			y=y%10;
			t=t/10;
		}
*/
	seg(512);

}

