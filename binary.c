// binary search
#include <stdio.h>
int main (void)
{
  int size,i,flag=0,f=0;
  int lis[15],search,low=0,high=size-1,mid;
  printf("Enter size of array: \n");
  scanf("%d",&size);
  printf("\n Enter elements : \n\n");

  for(i=0;i<size;i++)
    scanf("%d",&lis[i]);
  printf("\n Enter element to be searched: ");
  scanf("%d",&search);
  low=0,high=size-1;
  while(low<=high)
  {  mid=(low+high)/2;
  if(search==lis[mid])
  { printf("\n Element found at %d position",mid+1);
  flag=1;
  break;
  }
   else if(search<lis[mid])
     high=mid-1;
  else 
    low=mid+1;
  }

  return 0;
  }
