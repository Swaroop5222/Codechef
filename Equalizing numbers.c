#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    int d;
	    d=abs(a-b);
	    if(d%2==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

