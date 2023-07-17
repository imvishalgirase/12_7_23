#include<stdio.h>

main()
{
	int a[100],b[100],mrg[200];
	int n1,n2,i,k,tn;
	
	printf("Enter Size of Array A = ");
	scanf("%d",&n1);
    printf("Enter Elements Value A = \n")	;
    
    for(i=0;i<n1;i++)
    {
    	printf("a[%d]",i);
    	scanf("%d",&a[i]);
    	mrg[i]=a[i];
    	
	}
	k=i;
	
    printf("Enter Size of Array B = ");
	scanf("%d",&n2);
	
    printf("Enter Elements Value B = \n")	;
    
    for(i=0;i<n2;i++)
    {
    	printf("b[%d]",i);
    	scanf("%d",&b[i]);
    	mrg[k]=b[i];
    	k++;	
	}
	tn=n1+n2;
	printf("Merge Array Value = \n");
	for(i=0;i<tn;i++)
	{
		printf("mrg[%d] = %d \n",i,mrg[i]);
	}
	
