#include<stdio.h>

main()
{
	int i=1,n;
	printf(" enter any number =");
	scanf("%d",&n);
	while(n%2==1)
	{
		printf("%d\n",n);
		n++;
	}
}
