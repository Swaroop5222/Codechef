#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x>65)
	    printf("Overload\n");
	    else if(x<=65 && x>=35)
	    printf("Normal\n");
	    else
	    printf("Underload\n");
	}
	return 0;
}

