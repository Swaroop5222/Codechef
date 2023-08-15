#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    if(21-(a+b)>=1 && 21-(a+b)<=10)
	    printf("%d\n",21-(a+b));
	    else
	    printf("-1\n");
	}
	return 0;
}

