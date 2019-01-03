#include <stdio.h>

//void main() 
//{
//	char input_data[10];
//	gets(input_data);
//	printf("input: %s\n ", input_data);
//
//
//}

//void main()
//{
//	char input_string[10];
//	if (NULL != gets(input_string)) {
//	
//		printf("input: %s\n", input_string);
//			
//	}
//	else {
//	
//		printf("input->canceled\n");
//	}
//
//
//}


//int get_my_string(char buffer[], int limit)
//{
//	int i;
//	for (i = 0; i < limit; i++)
//	{
//		buffer[i] = getchar();
//		if (buffer[i] == '\n') {
//			buffer[i] = 0;
//			return 1;
//		}
//	
//	
//	}
//	buffer[i] = 0;
//	rewind(stdin);
//	return 0;
//}
//
//void main() {
//
//	char temp[10];
//	int state;
//
//	state = get_my_string(temp, 9);
//
//	if (state == 1) printf("input: %s\n", temp);
//	else printf("input: %s out of range\n", temp);
//
//}
//
//void main()
//{
//	int pos_num = 100, num = 0, i, temp_num;
//	char num_string[4] = "123";
//	for (i = 0; i < 4; i++)
//	{
//		temp_num = num_string[i] - '0';
//		num = num + temp_num * pos_num;
//		pos_num = pos_num / 10;
//
//	}
//
//	printf("%s -> %d\n", num_string, num);
//
//
//}

//int array_to_integer(char string[])
//{
//	int count = 0, num = 0;
//	while (string[count] != 0)
//	{
//		num = num * 10 + string[count] - '0';
//		count++;
//	}
//	return num;
//}
//void main() 
//{
//	int first_num, second_num;
//	char first_string[16], second_string[16];
//
//	printf("input first_number: ");
//	gets(first_string);
//	printf("input second_number: ");
//	gets(second_string);
//
//	first_num = array_to_integer(first_string);
//	second_num = array_to_integer(second_string);
//
//	printf("%d + %d =%d", first_num, second_num, first_num + second_num);
//
//
//
//
//}
// scanf È°¿ë
