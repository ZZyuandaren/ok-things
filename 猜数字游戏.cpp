#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu()
{
	printf("######################");
	printf("### 1 play  0 exit ###");
	printf("######################");
}
void game()
{

}
int main()
{
	int xz;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &xz);
		switch (xz)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (xz);
	return 0;
}