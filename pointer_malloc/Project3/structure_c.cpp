//struct Peolple
//{
//
//	char name[12];
//	unsigned short int age;
//	float height;
//	float weigtht;
//	   
//};
//
//struct People data;
//struct People friend_list[4];
//struct People *p;
//
//typedef struct People Person;
//
//Person data;
//People friend_list[4];
//People *p;
#include <stdio.h>

typedef struct People
{
	char name[12];
	unsigned short int age;
	float height;
	float weight;



}Person;

void main() {

	Person data;

	printf("대상자의 정보를 입력하시오\n");
	printf("대상의 이름을 입력하시오: ");
	scanf("%s", &data.name);
	printf("대상의 나이을 입력하시오: ");
	scanf("%hu", &data.age);
	printf("대상의 키을 입력하시오: ");
	scanf("%s", &data.height);
	printf("대상의 몸무게을 입력하시오: ");
	scanf("%s", &data.weight);
	

	printf("\n 입력한 정보는 다음과 같습니다. \n");
	printf("%s: %d세, %.fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);


}