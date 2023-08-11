#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0, t, a, c;
	scanf("%d",&t);
	while(i<t){
	    i++;
	    scanf("%d%d",&a,&c);
	    if((a+c)%2==0)
	        printf("%d\n",(a+c)/2);
	        else
	        printf("-1\n");
	    
	    
	}
	return 0;
}

