#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int N,i;
	    scanf("%d",&N);
	    char s[N + 1];
	    scanf("%s",s);
	    for(i=0;i<N;i+=2){
	    if(s[i]=='0' && s[i+1]=='0'){
	        printf("A");
	    }
	    else if(s[i]=='0' && s[i+1]=='1'){
	        printf("T");
	    }
	    else if(s[i]=='1' && s[i+1]=='0'){
	        printf("C");
	    }
	    else if(s[i]=='1' && s[i+1]=='1')
	        printf("G");
	}
	printf("\n");
}
	return 0;
}

