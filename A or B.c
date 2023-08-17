#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if((500-(2*x))+(1000-(4*(x+y)))>(500-(4*y))+(1000-(2*(x+y))))
	    printf("%d\n",(500-(2*x))+(1000-(4*(x+y))));
	    else
	    printf("%d\n",(500-(4*y))+(1000-(2*(x+y))));
	}
	return 0;
}

