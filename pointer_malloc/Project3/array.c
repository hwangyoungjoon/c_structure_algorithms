#include <stdio.h>

//void main() {
//
//
//	short student[20] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
//		for (int i = 0; i < 20; i++) printf("%d", student[i]);
//
//	printf("\n");
//	
//	short students[20] = { 0, };
//	for (int i = 0; i < 20; i++) printf("%d", students[i]);
//
//	printf("\n");
//
//	short students1[20] = { 3, };
//	for (int i = 0; i < 20; i++) printf("%d", students1[i]);
//
//
//}


//void main()
//{
//	char data[5] = { 1,2,3,4,5 };
//	int result = 0;
//
//	for (int i = 0; i < 5; i++) { result = result + data[i]; }
//	printf("%d", result);
//
//
//
//}



//void main() {
//
//	char data[6] = { 'h','a','p','p','y,0' };
//	char data1[6] = "happy";
//
////# ���� ���̴�. 

//}


//void main() {
//
//	char data[11] = "black_pink";
//	char data1[] = "���Ķ��� ��� ����";
//
//	printf("%s\n", data);
//	printf("%s\n", data1);
//
//
//
//}


//void main() {
//
//	char data[] = "black_pink";
//	int count = 0;
//	while (data[count] != 0)
//	{
//		count++;
//	}
//	printf("%d", count);
//
//
//}
#include <string.h>
//
//int Get_String_length(char data [])
//	{
//
//	int count = 0;
//	while (data[count]!= 0) count++;
//	return count;
//	}
//
//void main() {
//
//	int data_length;
//	
//	char data[] = "�������� �̻ڴ�";
//	data_length = Get_String_length(data);
//	int data1 = strlen(data);
//	printf("%d", data_length);
//	printf("%d", data1);
//
//}

//void main() {
//
//	char data[12] = { 0,0,2,0,1,1,0,0,2,1,0,2 };
//	int i, x, y;
//
//
//	for (i = 0; i < 12; i++) {
//	
//		x = i % 4 + 1; // x�� ��ǥ ����ǥ
//		y = i / 4 + 1;// y�� ��ǥ ����ǥ
//		printf("%d�� %d��", y, x);
//		if (data[i] == 1) printf("���� ���� ���� �ֽ��ϴ�.\n");
//		else if (data[i] == 2) printf("�Ͼ� ���� ���� �ֽ��ϴ�.\n");
//		else printf("���� �����ϴ�.\n");
//	
//	
//	}
////
////}
//
//
//void main() {
//
//	char data[3][4] = { {0,0,2,0},{1,1,0,0},{2,1,0,2} };
//	int x, y;
//
//
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 4; x++)
//		{
//			printf("%d�� %d����", y + 1, x + 1);
//			if (data[y][x] == 1) printf("���� ���̳��� �ֽ��ϴ�. \n");
//			else if (data[y][x] == 2) printf("�Ͼ� ���� �����ֽ��ϴ�. \n");
//			else printf("���� �����ϴ�. \n");
//		}
//	
//	}
//
//
//
//}