#include <stdio.h>

int arr[1000001];
long long int arr_three[1000001];

int main() {
	int counter = 1;
	int a;
	long long int number;
	int count;

	for (long long i = 0; i < 1000001; i++) {
		arr[i] = i;
		arr_three[i] = i * i * i;
	}

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%lld", &number);

		for (a = 0; a < 1000001; a++) {

			if (number >= arr_three[a]) {
				if (number == arr_three[a]) { //arr[a]출력
					printf("#%d %d\n", counter, arr[a]);
					counter++;
					break;
				}
				continue;
			}
			else {
				printf("#%d -1\n", counter);
				counter++;
				break;
			}
		}
		a = 0;
	}

	return 0;
}