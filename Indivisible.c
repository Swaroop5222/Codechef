#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    int i;
	    for(i=1; i<100; i++){
	        if((a%i)!=0 && (b%i)!=0 && (c%i)!=0){
	    printf("%d\n",i);
	    break;
	        }
	    }
	}
	return 0;
}

