#include <stdio.h>

//void main() {
//
//	short birthday;
//	short *ptr;// �����ʹ� �ּҸ� ����Ű�� ������ �ǹ��Ѵ�.
//	ptr = &birthday; //&���� �� ������ �ּҸ� ����Ų��.
//
//	printf("birthday�� �ּҴ� %d", ptr);
//
//
//
//}

//
//void main() {
//
//	short birthday;
//	short *ptr; //����Ʈ ������ �����ϱ� ���� *
//	ptr = &birthday;
//	*ptr = 1042;// *���� ���� ������, �����Ͱ� ����Ű�� ��� ���� 1042���� ����
//
//	printf("ptr=%d, ptr�ּҴ� %d\n", ptr, &ptr);  //ptr , *ptr�� ���̴� ptr�� ������ ������ ����Ű�� ����� �ּ��̰�, *ptr�� ������ ������ ����Ű�� ����� ���� �ǹ��Ѵ�. 
//	printf("birthday=%d, %d",birthday,&birthday);
//
//
//}

// �����͸� ����ϴ� ������ �ٸ� �Լ��� ����Ǿ��ִ� ������ �����ϱ� �����̴�. �ּҷ� �����ϴ� ������ �ٸ� �Լ��� ��� �������� ������ �������� �ʱ� �����̴�. 

//void Test(short *ptr)
//{
//	short soft = 0;
//	soft = *ptr;
//	printf("soft���� ptr�� �����ϰ� �ּҿ� �ִ� ����� �� %d�Դϴ�\n",soft);
//	*ptr = 3;
//
//}
//
//
//
//void main() {
//	short tips = 5;
//	printf("tips�� ���� %d\n", tips);
//	Test(&tips);
//	printf("�������� tips�� ���� %d\n", tips);
//
//}



//���� �ּ����� ������� ������ ��ȯ�ϱ�
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

//�������� Ȱ�� �����ʹ� ����Ű�� ����� �����ּҿ� �׸��� ����Ű�� ����� �ڷ����� ���� ���� ������. �̸� Ȱ���ϸ� ������ �ּҸ� ���ؼ� �ϳ��� ���ü� �ִ�. 
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
//void�� �����ʹ� ����Ű�� �ּ��� ����� �ڷ����� ���� ������ �ʾҴ�. �׷��Ƿ� ���� ���� �� ����Ʈ�� � �ڷ����� �޴��� ���� ��������Ѵ�. 
//void main() {
//
//	int data = 5;
//	void *ptr = &data;
//	printf("%d\n", data);
//	//printf("%d", *ptr); //� �ڷ����� �Դ��� �˼� ��� �������
//	*(int *)ptr = 6; //� �ڷ����� ������ ��������
//	printf("%d\n", *(int*)ptr);
//	printf("%d\n", data);
//}// void�� �����ʹ� ���������� �����ϴ� �ڷ����� �з� �� �����Ƿ� �̿� ���ؼ� ���߿� �����ؼ� � �ڷ����̵� ���� ���ִٴ� ������ �ִ�. 

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