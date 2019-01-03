//#include <stdio.h>
//
//void main()
//{
//
//	char data[5] = { 1,2,3,4,5 };
//	int result = 0, i;
//	char *p = data;
//	for (i = 0; i < 5; i++)
//	{
//		printf("*p값은 %d\n", *p);
//		result = result + *p++;// 후위 연산자는 이줄이 끝나고 그 다음줄로 넘어갈때 시행된다고 생각하면 된다. 
//		printf("*p값은 %d\n", *p);
//	}
//
//	printf("data  배열 각요소의 합은 %d입니다. ", result);
//}

// pointer 배열
#include <stdio.h>
//
//void main() 
//{
//	char data1, data2, data3, data4, data5;
//	char *p[5] = { &data1, &data2,&data3, &data4, &data5 };
//	for (i = 0; i < 5; i++) *p[i] = 0;
//}

// char *p[5]  5개짜리인  포인트 배열이고 char (*p)[5] 포인터 변수 p가 가리키는 대상이 5바이트라는 뜻 char[5]크기의 대상을 가리킬 수 있는 포인터 변수를 선언함
// (*p)[1]=3  p가 가리키는 대상에서 2번째 항목에 3을 대입함 =p[0][1]=3
//(*(p+1))[2]=4 p+1이 가리키는 대상의 3번째 항목에 4를 대입함=p[1][2]=4
//(*(p+2))[4]=5; p+2가 가리키는 대상의 5번째 항목에 5를 대입함= p[2][4]=5

