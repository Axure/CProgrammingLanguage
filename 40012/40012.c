#include <stdio.h>
#include <math.h>

int main() {
	int denominator, flag;
	int repeat, ri;
	double eps, item, sum;
	
	scanf("%d", &repeat);
	for (ri = 1; ri <= repeat; ri++) {
		scanf("%le", &eps);
		sum = 0;
		for (flag = 1; ; flag++) {
			if (flag % 2 == 0) {
				sum -= 1.0/(flag*3-2);
			} else {
				sum += 1.0/(flag*3-2);
			}
			if (1.0/(flag*3-2) < eps) break;
	    }
/*---------*/
		printf("sum = %.6f\n", sum);
	}
	return 0;
}
