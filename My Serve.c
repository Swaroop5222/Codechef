#include <stdio.h>

int main(void) {
	// your code goes here
	int t, p, q;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&p,&q);
	    if((p+q+1)%4==1 || (p+q+1)%4==2)
	    printf("Alice\n");
	    else
	    printf("Bob\n");
	}
	return 0;
}

