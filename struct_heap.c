#include <stdio.h>
#include <stdlib.h>
struct employee
{
  int emp_no;
  char emp_name[10];
  float emp_sal;
};
 int main()
  {
  struct employee *ptr;
  int size,i;
  printf("Enter the number of records: ");
  scanf("%d", &size);
  // Memory allocation for no size structures
  ptr = (struct employee *)malloc(size * sizeof(struct employee));
  if(ptr==NULL)
	printf("failed to allocate the memory in heap\n");
  else
  	printf("successfully allocate the memory in heap\n");
  for (i = 0; i < size; i++)
   {
   	printf("Enter employee details:\n");
    scanf("%d %s %f", &(ptr+i)->emp_no,(ptr+i)->emp_name,&(ptr+i)->emp_sal);
  }
  printf("Displaying Employee details:\n");
  for (i = 0; i < size; i++)
   {
    printf("%d\t%s\t%f\n", (ptr+i)->emp_no,(ptr+i)->emp_name,(ptr+i)->emp_sal);
  }
  free(ptr);

  return 0;
}

