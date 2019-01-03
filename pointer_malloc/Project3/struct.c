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
		printf("\n 새로운 친구 정보를 입력하시오\n");
		printf("이름: ");
		scanf("%s", p_friend-> name);
		printf("나이: ");
		scanf("%hu", p_friend-> age);
		printf("키: ");
		scanf("%f", p_friend-> height);
		printf("몸무게: ");
		scanf("%f", p_friend-> weight);
		printf("\n입력완료.\n");

		return 1;

	
	}
	else {
	
		printf("최대 인원을 초과하여 입력할 수 없습니다. \n");

	}

	return 0;
}


void show_friend_list(Person *p_friend, int count)
{

	int i;
	if (count > 0)
	{

		printf("\n 등록된 친구목록\n");
		printf("+===============================+");
		for (i = 0; i < count; i++)
		{
			printf("%-14s,%3d,%6.2f,%6.2f\n", p_friend->name, p_friend->age, p_friend->height, p_friend->weight);
			p_friend++;


		}

	}
	else {
	
		printf("\n 등록된 사람이 없습니다\n");
		
	}


}

void main()
{

	Person friends[MAX_COUNT];
	int count = 0, num;
	while (1) {


		printf("    [메뉴]       \n");
		printf("===================\n");
		printf("1. 친구추가        \n");
		printf("2 친구목록보기        \n");
		printf("3. 종료            \n");
		printf("번호선택:  ");
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
		
			printf("1~3번호만 선택할수있습니다\n\n");
		}


	}


}