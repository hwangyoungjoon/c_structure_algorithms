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

	printf("������� ������ �Է��Ͻÿ�\n");
	printf("����� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", &data.name);
	printf("����� ������ �Է��Ͻÿ�: ");
	scanf("%hu", &data.age);
	printf("����� Ű�� �Է��Ͻÿ�: ");
	scanf("%s", &data.height);
	printf("����� �������� �Է��Ͻÿ�: ");
	scanf("%s", &data.weight);
	

	printf("\n �Է��� ������ ������ �����ϴ�. \n");
	printf("%s: %d��, %.fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);


}