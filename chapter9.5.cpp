#include<stdio.h>

main()
{
	int i=2020,m,n;
	printf("enter the value m =");
	scanf("%d",&m);
	while(i<=m)
	{
		if(i%4==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}