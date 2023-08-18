#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	float a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%f%f%f%f",&a,&b,&x,&y);
	    if((a/x)<(b/y))
	    printf("Chef\n");
	    else if((a/x)>(b/y))
	    printf("Chefina\n");
	    else
	    printf("Both\n");
	}
	return 0;
}

