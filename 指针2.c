#include<stdio.h>
int main() {
	/*
	int var = 20;
	int* ip;
	ip = &var;
	printf("var变量的地址：%p\n", &var);
	//在指针变量中存储地址
	printf("ip变量存储的地址:%p\n", ip);
	printf("%p", &ip);
	//使用指针访问值
	printf("*ip 变量的值:%d\n", &*ip);
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
	int len = sizeof(arr) / sizeof(int);  //求数组长度
	int i;
	for (i = 0; i < len; i++) {
		printf("%d  ", *(arr + i));  //*(arr+i)等价于arr[i]
	}
	printf("\n");
	return 0;

}