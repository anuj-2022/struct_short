#include<stdio.h>
struct padding
{

	int b; // 4 bytes
	char c; // 4 byte
	int *d;// 8 byte	
};
void main()
{

    struct padding var[2];
	printf("%p %p \n",&var[0].d,&var[1].d);
	struct padding  d;
	printf("Size of structure: %ld\n",sizeof(d));
	int *ptr;
	char *ptr1;
	float *ptr2;
	double *ptr3;
	printf("Size of integer pointer : %ld\n",sizeof(ptr));
	printf("Size of integer pointer : %ld\n",sizeof(ptr1));
	printf("Size of integer pointer : %ld\n",sizeof(ptr2));
	printf("Size of integer pointer : %ld\n",sizeof(ptr3));
	printf("\n");
	printf("Size of integer pointer : %ld\n",sizeof(*ptr));
	printf("Size of integer pointer : %ld\n",sizeof(*ptr1));
	printf("Size of integer pointer : %ld\n",sizeof(*ptr2));
	printf("Size of integer pointer : %ld\n",sizeof(*ptr3));
	struct padding var1;
	printf("%p %p %p\n",&var1.b,&var1.c,&var1.d);
	
}
