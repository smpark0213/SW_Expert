#include <stdio.h>

int main() {
	int arr[] = { 1, 4, 9, 121, 484 };
	int count;
	int start, end;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d %d", &start, &end);
		int result = 0;
		for (; end >= start; start++) {
			for (int i = 0; i < 5; i++) {
				if (arr[i] == start) {
					result += 1;
				}
			}
		}
		printf("#%d %d\n", i + 1, result);

	}

	return 0;
}