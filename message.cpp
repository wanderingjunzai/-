#include<stdio.h>
#include"point.h"
#include"tools.h"
#include"message.h"
void printmessage(Message a){
	int i;
*	SetCursorPosition(60,200);//������ 
	printf("��ǰǮ����%d\n",a.money);
*	for(i=0;i<sizeof(b)/sizeof(Rider);i++)
		printf("����%d��λ�ã�(%d,%d)\n",i+1,rider[i].x,rider[i].y);
	printf("�ӵ�����%d\n",a.sum);
	printf("�������%d\n",a.accomplish);
	printf("��ʱ����%d\n",a.overtime);
}
