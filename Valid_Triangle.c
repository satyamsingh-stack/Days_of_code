#include<stdio.h>
int main()
{
	int t,a,b,c,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int sum=0;
		scanf("%d%d%d",&a,&b,&c);
		sum=a+b+c;
		if(sum==180)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
