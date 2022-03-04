#include<stdio.h>

struct data
{
int a;
char b;
int c;
};
void main()
{
unsigned int i,n=0;
struct data d[2];

i=(int)(&d[1].a);
n=(int)(&d[0].a);
i=i-n;
printf("sizeof %ld\n",i);
printf("%ld %ld",&d[0].a,&d[1].a);
}
