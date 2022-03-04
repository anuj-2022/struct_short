#include<stdio.h>
#pragma pack(2)
struct data
{
	int a;
	char b;
	int c;
};
void main()
{
struct data d;

printf("size without padding pack2 %ld\n",sizeof(d));

}

