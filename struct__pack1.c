#include<stdio.h>
#pragma pack(1)
struct data
{
	int a;
	char b;
	int c;
};
void main()
{
struct data d;

printf("size without padding %ld\n",sizeof(d));

}

