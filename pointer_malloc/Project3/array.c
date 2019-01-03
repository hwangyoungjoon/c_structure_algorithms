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
////# 같은 뜻이다. 

//}


//void main() {
//
//	char data[11] = "black_pink";
//	char data1[] = "휘파람은 듣기 좋다";
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
//	char data[] = "성덕선은 이쁘다";
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
//		x = i % 4 + 1; // x축 좌표 열좌표
//		y = i / 4 + 1;// y축 좌표 행좌표
//		printf("%d행 %d열", y, x);
//		if (data[i] == 1) printf("검은 돌이 놓여 있습니다.\n");
//		else if (data[i] == 2) printf("하얀 돌이 놓여 있습니다.\n");
//		else printf("돌이 없습니다.\n");
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
//			printf("%d행 %d열에", y + 1, x + 1);
//			if (data[y][x] == 1) printf("검은 돌이놓여 있습니다. \n");
//			else if (data[y][x] == 2) printf("하얀 돌이 놓여있습니다. \n");
//			else printf("돌이 없습니다. \n");
//		}
//	
//	}
//
//
//
//}