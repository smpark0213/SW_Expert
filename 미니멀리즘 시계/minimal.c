#include <stdio.h>

int main() {
	
	int num, count;
	int hour, minute;
	int hour_temp, minute_temp;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d", &num);

		hour = num / 30;
		minute_temp = num % 30;
		minute = minute_temp * 2;

		printf("#%d %d %d\n", i + 1, hour, minute);
	}
	

	return 0;
}