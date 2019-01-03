#include <stdio.h>

//void main() {
//
//	short birthday;
//	short *ptr;// 포인터는 주소를 가리키는 변수를 의미한다.
//	ptr = &birthday; //&변수 는 변수의 주소를 가리킨다.
//
//	printf("birthday의 주소는 %d", ptr);
//
//
//
//}

//
//void main() {
//
//	short birthday;
//	short *ptr; //포인트 변수를 선언하기 위한 *
//	ptr = &birthday;
//	*ptr = 1042;// *번지 지정 연산자, 포인터가 가리키는 대상에 가서 1042값을 넣음
//
//	printf("ptr=%d, ptr주소는 %d\n", ptr, &ptr);  //ptr , *ptr의 차이는 ptr은 포인터 변수가 가리키는 대상의 주소이고, *ptr은 포인터 변수가 가리키는 대상의 값을 의미한다. 
//	printf("birthday=%d, %d",birthday,&birthday);
//
//
//}

// 포인터를 사용하는 이유는 다른 함수에 선언되어있는 변수에 접근하기 위함이다. 주소로 접근하는 이유는 다른 함수일 경우 직접으로 접근이 가능하지 않기 때문이다. 

//void Test(short *ptr)
//{
//	short soft = 0;
//	soft = *ptr;
//	printf("soft값은 ptr이 참조하고 주소에 있는 대상의 값 %d입니다\n",soft);
//	*ptr = 3;
//
//}
//
//
//
//void main() {
//	short tips = 5;
//	printf("tips의 값은 %d\n", tips);
//	Test(&tips);
//	printf("변경이후 tips의 값은 %d\n", tips);
//
//}



//직접 주소지정 방식으로 변수값 교환하기
//void swap(int *pa, int *pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}
//
//void main() {
//
//	int start = 96, end = 5;
//	printf("before:   start=%d, end=%d\n", start, end);
//	if (start > end) swap(&start,&end);
//	printf("after:    start=%d, end=%d\n", start, end);
//	   
//}

//포인터의 활용 포인터는 가리키는 대상의 시작주소와 그리고 가리키는 대상의 자료형에 대한 값을 가진다. 이를 활용하면 포인터 주소를 통해서 하나씩 뺴올수 있다. 
//void main() {
//
//	int data = 0x12345678, i;
//	char *p = (char *)&data;
//	for (i = 0; i < 4; i++) {
//	
//		printf("%X, ", *p);
//		p++;
//	}
//
//
//
//}
//void형 포인터는 가리키는 주소의 대상의 자료형을 아직 정하지 않았다. 그러므로 값을 넣을 때 포인트가 어떤 자료형을 받는지 인지 시켜줘야한다. 
//void main() {
//
//	int data = 5;
//	void *ptr = &data;
//	printf("%d\n", data);
//	//printf("%d", *ptr); //어떤 자료형이 왔는지 알수 없어서 실행오류
//	*(int *)ptr = 6; //어떤 자료형을 받을지 선언해줌
//	printf("%d\n", *(int*)ptr);
//	printf("%d\n", data);
//}// void형 포인터는 잠정적으로 선언하는 자료형을 밀룰 수 있으므로 이에 대해서 나중에 선언해서 어떤 자료형이든 받을 수있다는 장점이 있다. 

//void my_func(void *p, char flag) 
//{
//	if (flag == 0) *(char*)p = 1;
//	else if (flag == 1) *(short*)p = 1;
//	else *(int*)p = 1;
//	
//
//
//}
//
//void main()
//{
//	short data = 5;
//	
//	my_func(&data,1);
//	printf("data: %d", data);
//}


//
//int get_data(void *p_data,char type)
//{
//	int result = 0;
//
//	if (type == 1) result = *(char*)p_data;
//	else if (type == 2)result = *(short*)p_data;
//	else result = *(int*)p_data;
//
//
//	return result;
//
//
//}
//
//void main() {
//
//	int data = 0x12345678;
//	printf("%x\n", get_data(&data,2));
//
//}