#include<stdio.h>
int main() {
	/*
	int var = 20;
	int* ip;
	ip = &var;
	printf("var�����ĵ�ַ��%p\n", &var);
	//��ָ������д洢��ַ
	printf("ip�����洢�ĵ�ַ:%p\n", ip);
	printf("%p", &ip);
	//ʹ��ָ�����ֵ
	printf("*ip ������ֵ:%d\n", &*ip);
	printf("%d\n", ip);
	return 0;


	int a = 100;
	char str[20] = "c.biancheng.net";
	printf("%#X,%#X\n", &a, str);
	return 0;

	int a = 10;
	int* p1 = &a, * p2 = NULL;
	printf("p1=%p,p2=%p\n", p1, p2);
	p2 = a;
	printf("p2=%p\n%d", p2);
	
	int a = 100;
	int* p;
	p = &a;
	printf("&a=%p\n", &a);
	printf("p=%p\n", p);
	*/

	int arr[] = { 99, 15, 100, 888, 252 };
	int len = sizeof(arr) / sizeof(int);  //�����鳤��
	int i;
	for (i = 0; i < len; i++) {
		printf("%d  ", *(arr + i));  //*(arr+i)�ȼ���arr[i]
	}
	printf("\n");
	return 0;

}