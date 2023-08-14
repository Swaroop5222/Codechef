#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	char str[100];
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    scanf("%s",str);
	    for(int i=0; i<n; i++){
	        if(str[i]=='\0')
	        break;
	        else if(str[i]=='A')
	        printf("%c",'T');
	        else if(str[i]=='T')
	        printf("%c",'A');
	        else if(str[i]=='C')
	        printf("%c",'G');
	        else
	        printf("%c",'C');
	        
	    }
	    printf("\n");
	    
	}
	return 0;
}

