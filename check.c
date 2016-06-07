    #include <stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	if(n>0)
    		printf("NUMBER IS POSITIVE");
    	else
    	{
    		if(n<0)
    			printf("NUMBER IS NEGATIVE");
    		else
    			printf("NUMBER IS ZERO");
    	}
    	return 0;
    }
