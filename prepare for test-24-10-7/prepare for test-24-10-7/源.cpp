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
	//�����ǻ��� if �� while���÷�
	//һ���ǻ��� if �� ease if �� for
	for (int a =0; a<10000; a++)
	{
		if (a < 2500) {
			printf("���ķ�֮һ��%d\n",a);
		}
		else if(a>=2500&&a<5000) {
			printf("���ڶ���֮һ��%d\n",a);}
		else if(a>=5000&&a<7500)
		{
			printf("�����ķ�֮����%d\n",a);}
		else { printf("���쵽���յ���%d\n",a); }
	}



	return 0;
}