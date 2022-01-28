#include <stdio.h>
int table(int n)
{
for(int i=1;i<=10;i++)
	printf("%d*%d=%d",n,i,i*n);
}
int main()
{
int n,i;
printf("enter the table\n");
scanf("%d",&n);
table(n);
return 0;
}
