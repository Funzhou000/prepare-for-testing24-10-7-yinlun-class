#include<stdio.h>
int main()

{/*
	int a = 0;
	while (a < 10000) {
		a = a++;
		if (a < 10000)
		{
			printf(" % d\n",a);
		}
		else
		{
			printf("%dfinaly arrive\n",a);

		}
	}*/
	//以上是基于 if 和 while的用法
	//一下是基于 if 和 ease if 和 for
	for (int a =0; a<10000; a++)
	{
		if (a < 2500) {
			printf("在四分之一处%d\n",a);
		}
		else if(a>=2500&&a<5000) {
			printf("您在二分之一处%d\n",a);}
		else if(a>=5000&&a<7500)
		{
			printf("您在四分之三处%d\n",a);}
		else { printf("您快到到终点了%d\n",a); }
	}



	return 0;
}