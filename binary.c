#include <stdio.h>
int main(void) 
{
int size,i,flag=0;
int lis[15],sorted,j;
printf("Enter size of array: \n");
  scanf("%d",&size);
printf("\n Enter elements : \n");
for(i=0;i<size;i++)
  scanf("%d",&lis[i]);

for(i=1;i<size;i++)
{
   sorted=lis[i];
  for(j=i-1;j>=0&& lis[j]>=sorted;j--)
    {
      lis[j+1]=lis[j];
    }
    lis[j+1]=sorted;
}
  
printf("list after sorting:");
  for(i=0;i<size;i++)
     printf("\n%d",lis[i]);

  
  return 0;
}
