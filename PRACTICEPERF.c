#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[4];
	int count=0;
	for(int i=0;i<4;i++){
	    scanf("%d",&arr[i]);
	    if(arr[i]>=10){
	        count=count+1;
	    }
	}
	
  printf("%d",count);
	

	
	
	
	return 0;
}

