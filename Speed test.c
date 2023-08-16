#include <stdio.h>

int main(void) {
	// your code goes here
	int t; 
	float a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%f%f%f%f",&a,&x,&b,&y);
	    if((a/x)>(b/y))
	    printf("Alice\n");
	    else if((a/x)<(b/y))
	    printf("Bob\n");
	    else
	    printf("Equal\n");
	}
	return 0;
}

