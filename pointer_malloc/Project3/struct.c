#include <stdio.h>
#define MAX_COUNT 5

typedef struct People
{
	char name[14];
	unsigned short int age;
	float height;
	float weight;



}Person;


int AddFriend(Person *p_friend, int count)
{
	if (count < MAX_COUNT) {
	
		p_friend = p_friend + count;
		printf("\n ���ο� ģ�� ������ �Է��Ͻÿ�\n");
		printf("�̸�: ");
		scanf("%s", p_friend-> name);
		printf("����: ");
		scanf("%hu", p_friend-> age);
		printf("Ű: ");
		scanf("%f", p_friend-> height);
		printf("������: ");
		scanf("%f", p_friend-> weight);
		printf("\n�Է¿Ϸ�.\n");

		return 1;

	
	}
	else {
	
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �����ϴ�. \n");

	}

	return 0;
}


void show_friend_list(Person *p_friend, int count)
{

	int i;
	if (count > 0)
	{

		printf("\n ��ϵ� ģ�����\n");
		printf("+===============================+");
		for (i = 0; i < count; i++)
		{
			printf("%-14s,%3d,%6.2f,%6.2f\n", p_friend->name, p_friend->age, p_friend->height, p_friend->weight);
			p_friend++;


		}

	}
	else {
	
		printf("\n ��ϵ� ����� �����ϴ�\n");
		
	}


}

void main()
{

	Person friends[MAX_COUNT];
	int count = 0, num;
	while (1) {


		printf("    [�޴�]       \n");
		printf("===================\n");
		printf("1. ģ���߰�        \n");
		printf("2 ģ����Ϻ���        \n");
		printf("3. ����            \n");
		printf("��ȣ����:  ");
		scanf("%d", &num);
		if (num == 1) {
			if (1 == AddFriend(friends, count)) count++;

		}
		else if (num == 2) {
		
			show_friend_list(friends, count);
		
		}
		else if (num == 3) {
		
			break;
		}
		else {
		
			printf("1~3��ȣ�� �����Ҽ��ֽ��ϴ�\n\n");
		}


	}


}