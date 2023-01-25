#include <stdio.h>
int main() {
	int x, y, res;
	scanf("%d %d", &x, &y);
	res = (x > y) ? x : y;

	while (1) {
		if (res % x == 0 && res % y == 0) {
			printf("%d",res);
			break;
		}
		++res;
	}

	return 0;
}