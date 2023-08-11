//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

# include <stdio.h>
#include<math.h>
int main() {
	int a, rem, sum = 0;;
	scanf("%d", &a);
	while (a--) {

		int n;
		scanf("%d", &n);
		while(n!=0) {
			rem = n % 10;
			sum = sum * 10 + rem;
			n = n / 10;
		}
		printf("%d\n", sum);
		sum = 0;

		}
	return 0;

	}

