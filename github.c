#include <stdio.h>
int main()
{
	int a,b;
	printf("hello world\n");
	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%d %d",&a,&b);
	printf("µ¡¼À = %d + %d = %d\n",a,b,(a+b));
	printf("»¬¼À = %d - %d = %d\n",a,b,(a-b));
	printf("°ö¼À = %d * %d = %d\n",a,b,(a*b));
	printf("³ª´°¼À = %d / %d = %d\n",a,b,(a/b));
	printf("³ª¸ÓÁö °è»ê = %d %% %d = %d\n",a,b,(a%b));
}