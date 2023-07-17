#include<stdio.h>
main()

{
     	int a[100],b[100],c[100];
          int i,n;	

	printf("Plz enter the total array element number== ");
	scanf("%d",&n);
	printf("Plz enter the each array element==");
	for(i=0;i<=n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	
		
		for(i=0;i<=n;i++)
		{
			
            printf("\nb%d =",i);
		scanf("%d",&b[i]);
	
			
		}
			for(i=0;i<=n;i++)
				{
		
				c[i]=a[i]+b[i];
				
				
			}
			printf ("sum of two array =");
				for(i=0;i<=n;i++)
				{
					
						printf("%d ",c[i]);					
				}
			
		
		
	
	
}

