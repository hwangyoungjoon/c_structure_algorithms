#include <stdio.h>
#include <malloc.h>

//void main() {
//
//	short data = 3;
//	short *p = &data;
//	short **pp = &p;
//
//	printf("before data: %d\n ", data);
//	*p = 4;
//	printf("1-after data: %d\n ", data);
//	**pp = 7;
//	printf("2-after data: %d\n ", data);
//
//
//
////
//
//void main()
//{
//	short **pp;
//	pp = (short **)malloc(sizeof(short *));
//	*pp = (short*)malloc(sizeof(short));
//
//	**pp = 10;
//	printf("**pp %d", **pp);
//	free(*pp); //�ι�° ���ڸ� ���� ���� �ؾ���, ������ ������ �ּҰ��� �Ҿ������ �����̴�.
//
//	free(pp);
//
//
//}


//
//void getmydata(int **q)
//{
//
//	*q = (int* )malloc(8);
//
//}
//
//void main()
//{
//	int *p;
//	getmydata(&p);
//	*p = 5;
//	free(p);
//
//
//

//
//void main() 
//{
//	unsigned char *p_limit_table;
//	unsigned char **p;
//	int age, age_step, member, temp, sum;
//
//
//	printf("20�� ���ɺ��� �����ؼ� �������� �� �� �ΰ���?: ");
//	scanf("%d", &age_step);
//	p_limit_table = (unsigned char*)malloc(age_step);
//	// ���ɺ� �ο����� ������ �޸𸮸� �����Ҵ�
//	p = (unsigned char *)malloc(sizeof(unsigned char *) * age_step);
//	
//	for (age = 0; age < age_step; age++) {
//	
//		printf("\n %d0�� ������ ��������Ű�� Ƚ��\n", age + 2);
//		printf("�� ���ɴ�� ����ΰ�? ");
//		scanf("%d", &temp);
//
//		*(p_limit_table + age) = (unsigned char)temp;
//		*(p + age) = (unsigned char*)malloc(*(p_limit_table + age));
//
//		for (member = 0; member < *(p_limit_table + age); member++) {
//		
//			printf("%dth: ", member + 1);
//			scanf("%d", &temp);
//			*(*(p + age) + member) = (unsigned char)temp;
//		}
//	
//	}
//
//	printf("\n\n ���ɺ� ��� ���� ����Ű�� Ƚ����\n");
//	for (age = 0; age < age_step; age++) {
//	
//		sum = 0;
//		printf("%d0��: ", age + 2);
//		for (member = 0; member < *(p_limit_table + age); member++) {
//		
//			sum = sum + *(*(p + age) + member);
//		
//		
//		}
//		
//		printf("%5.2f\n",(double)sum / *(p_limit_table+age));
//		free(*(p + age));
//
//	
//	}
//
//	free(p);
//	free(p_limit_table);
//
//
//}

//void main() {
//
//
//	char *p = (char*)malloc(12);
//	printf("������ ������ ������� %d", sizeof(p));
//	printf("������ ������ �����ϴ� ������� %d", sizeof(*p));
//
//	free(p);
//
//}




//void main()
//{
//	int *p_num_list, count = 0, limit = 0, i;
//	printf(" �Է��ϰ��� ������ ������ �Է��Ͻÿ�: ");
//	scanf("%d", &limit);
//
//	p_num_list = (int*)malloc(sizeof(int)*limit);
//
//	while (count < limit)
//	{
//		printf("���ڸ� �Է��Ͻÿ�: ");
//		scanf("%d", p_num_list + count);
//		if (*(p_num_list + count) == 9999) break;
//		count++;
//	
//	
//	
//	}
//
//	free(p_num_list);
//
//
//}

//void main()
//{
//
//	char **pp;
//	pp = (char**)malloc(sizeof(char*));
//	
//	*pp = (char*)malloc(sizeof(char));
//	printf("**pp ����:%d\n", **pp);
//	printf("**pp �޸𸮴�: %d\n", sizeof(**pp));
//	printf("**pp�� �ּҴ�: %d\n", &**pp);
//	
//	printf("*pp ����:%d\n", *pp);
//	printf("*pp �޸𸮴�: %d\n", sizeof(*pp));
//	printf("*pp�� �ּҴ�: %d\n", &*pp);
//	
//	printf("pp ����:%d\n", pp);
//	printf("pp �޸𸮴�: %d\n", sizeof(pp));
//	printf("pp�� �ּҴ�: %d\n", &pp);
//
//
//
//	**pp = 10;
//	
//	free(*pp);
//	free(pp);
//}


//void main()
//{
//	//�ο����� ������ �迭
//	unsigned char limit_table[3];
//	unsigned char **p;
//	//���ɺ� ��������Ű�� Ƚ�� ����
//	unsigned char *p[3];
//	int age, member, temp, sum;
//	for (age = 0; age < 3; age++)
//	{
//
//		printf("\n%d0�� ������ ��������Ű�� Ƚ��\n", age + 2
//		);
//		printf("�� ���ɴ�� ����Դϱ�? : ");
//		scanf("%d", &temp);
//		
//		limit_table[age] = (unsigned char)temp;
//
//		p[age] = (unsigned char *)malloc(limit_table[age]);
//		
//		for (member = 0; member < limit_table[age]; member++)
//		{
//			printf("%dth: ", member + 1);
//			scanf("%d", &temp);
//			*(p[age] + member) = (unsigned char)temp;
//
//		}
//
//
//	}
//	free(p);
//}
//
//void main()
//{
//	unsigned char *p_limit_table;
//	unsigned char **p;
//	int age, age_step, member, temp, sum;
//
//	printf("�������� � �ΰ���?: ");
//	scanf("%d", &age_step);
//
//	p_limit_table = (unsigned char *)malloc(age_step);
//	p = (unsigned *)malloc(sizeof(unsigned char*)*age_step);
//
//	for (age = 0; age < age_step; age++)
//	{
//		printf("\n%d0�� ������ ��������Ű�� Ƚ��", age + 1);
//		printf("�� ���ɴ�� ����Դϱ�?");
//		scanf("%d", &temp);
//		*(p_limit_table + age) = (unsigned char)temp;
//		*(p + age) = (unsigned char *)malloc(*(p_limit_table + age));
//		for (member = 0; member < *(p_limit_table + age); member++)
//		{
//			printf("%dth :", member + 1);
//			scanf("%d", &temp);
//			*(*(p + age) + member) = (unsigned)temp;
//
//
//		}
//
//		free(p);
//		free(p_limit_table);
//
//
//	}
//
//
//}