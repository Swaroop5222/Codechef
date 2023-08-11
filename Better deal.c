#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    if((100-a)<(200-2*b))
	    printf("First\n");
	    else if((100-a)>(200-2*b))
	    printf("Second\n");
	    else if((100-a)==(200-2*b))
	    printf("Both\n");
	}
	return 0;
}

