#include <stdio.h>
int main()
{ 
  int i,n,find,first,mid ,sec,a[100];
  printf("enter the no of array");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
  	printf ("enter the elements of array");
  	scanf("%d",&a[i]);
  }
    printf("enter the element to be search");
    scanf("%d",&find);
    first=0; sec=n-1; mid =(first+sec)/2;
    while(first<=sec)
    {
    	if (a[mid]<find)
    	{
    	  first=mid+1; 
        }
    	else if(a[mid]==find)
    	{
    		printf ("the value %d searched is at %d ",find,i);
    		break;
		}
		else
		 sec=mid-1;
	      mid=(first+sec)/2;
	}
	if(first>sec)
	printf("not valied");
return 0;
}

