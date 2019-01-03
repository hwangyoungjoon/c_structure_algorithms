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
//	free(*pp); //두번째 상자를 먼저 해제 해야함, 세번쨰 상ㅇ자의 주소값을 잃어버리기 때문이다.
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
//	printf("20대 연령부터 시작해서 연령층이 몇 개 인가요?: ");
//	scanf("%d", &age_step);
//	p_limit_table = (unsigned char*)malloc(age_step);
//	// 연령별 인원수를 저장할 메모리를 동적할당
//	p = (unsigned char *)malloc(sizeof(unsigned char *) * age_step);
//	
//	for (age = 0; age < age_step; age++) {
//	
//		printf("\n %d0대 연령의 윗몸일으키기 횟수\n", age + 2);
//		printf("이 연령대는 몇명인가? ");
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
//	printf("\n\n 연령별 평균 윗못 일으키기 횟수는\n");
//	for (age = 0; age < age_step; age++) {
//	
//		sum = 0;
//		printf("%d0대: ", age + 2);
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
//	printf("포인터 변수의 사이즈는 %d", sizeof(p));
//	printf("포인터 변수가 참조하는 사이즈는 %d", sizeof(*p));
//
//	free(p);
//
//}




//void main()
//{
//	int *p_num_list, count = 0, limit = 0, i;
//	printf(" 입력하고픈 숫자의 갯수를 입력하시오: ");
//	scanf("%d", &limit);
//
//	p_num_list = (int*)malloc(sizeof(int)*limit);
//
//	while (count < limit)
//	{
//		printf("숫자를 입력하시오: ");
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
//	printf("**pp 값은:%d\n", **pp);
//	printf("**pp 메모리는: %d\n", sizeof(**pp));
//	printf("**pp의 주소는: %d\n", &**pp);
//	
//	printf("*pp 값은:%d\n", *pp);
//	printf("*pp 메모리는: %d\n", sizeof(*pp));
//	printf("*pp의 주소는: %d\n", &*pp);
//	
//	printf("pp 값은:%d\n", pp);
//	printf("pp 메모리는: %d\n", sizeof(pp));
//	printf("pp의 주소는: %d\n", &pp);
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
//	//인원수를 저장할 배열
//	unsigned char limit_table[3];
//	unsigned char **p;
//	//연령별 윗몸일으키기 횟수 저장
//	unsigned char *p[3];
//	int age, member, temp, sum;
//	for (age = 0; age < 3; age++)
//	{
//
//		printf("\n%d0대 연령의 윗몸일으키기 횟수\n", age + 2
//		);
//		printf("이 연령대는 몇명입니까? : ");
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
//	printf("연령층은 몇개 인가요?: ");
//	scanf("%d", &age_step);
//
//	p_limit_table = (unsigned char *)malloc(age_step);
//	p = (unsigned *)malloc(sizeof(unsigned char*)*age_step);
//
//	for (age = 0; age < age_step; age++)
//	{
//		printf("\n%d0대 연령의 윗몸일으키기 횟수", age + 1);
//		printf("이 연령대는 몇명입니까?");
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