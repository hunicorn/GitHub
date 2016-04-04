#include <stdio.h>

int main()
{
	
	int grade[5];
	int pass=0;
	int fail=0;
	int sum=0;
	float average;
	int i=0;
	
	while(i<=5)
	{
		
		if(0<grade[i]<60)
		{
			fail=fail+1;
		}
		else if(60<=grade[i]<100)
		{
			pass=pass+1;
		}
		sum=sum+grade[i];
		i=i+1;
		
	}
	average=sum/6;
	
	printf("Passes: %d\n",pass);
	printf("Fails: %d}n",fail);
	printf("Average: %f\n",average);
	
	
	return 0;
		
