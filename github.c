#include <stdio.h>
int main()
{
	int a,b;
	printf("hello world\n");
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d",&a,&b);
	printf("���� = %d + %d = %d\n",a,b,(a+b));
	printf("���� = %d - %d = %d\n",a,b,(a-b));
	printf("���� = %d * %d = %d\n",a,b,(a*b));
	printf("������ = %d / %d = %d\n",a,b,(a/b));
	printf("������ ��� = %d %% %d = %d\n",a,b,(a%b));
}