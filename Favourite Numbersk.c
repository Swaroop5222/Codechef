#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&a);
	    if(a%2==0 && a%7==0)
	    printf("alice\n");
	    else if(a%2!=0 && a%9==0)
	    printf("bob\n");
	    else
	    printf("charlie\n");
	}
	return 0;
}

