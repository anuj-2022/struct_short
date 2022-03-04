#include<stdio.h>

struct data
{
	int a;
	char b;
	int c;
}__attribute__((packed));;
void main()
{
struct data d;

printf("size without padding attribute %ld\n",sizeof(d));

}

