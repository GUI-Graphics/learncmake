#include <stdio.h>
#include <config.h>

#ifdef USE_MY_SUM
	#include <mysum.h>
#endif

int sum(int a, int b) {
	printf("without using mysum library\n");
	return a + b;
}

int main() {
	int res;

	#ifdef USE_MY_SUM
		res = mysum(3, 5);
	#else
		res = sum(3, 5);
	#endif

	printf("%d\n", res);

	return 0;
}