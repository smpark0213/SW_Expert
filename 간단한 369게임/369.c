#include <stdio.h>

void qor(int a);
void tlq(int a);
void dlf(int a);

int main() {

	int a;
	int temp;

	scanf("%d", &a);

	if (a > 0 && a < 10) dlf(a);
	else if (a >= 10 && a < 100) tlq(a);
	else if (a >= 100 && a <= 1000) qor(a);


	return 0;
}

void qor(int a) {
	int temp;
	int temp1;
	dlf(9);
	tlq(99);
	for (int i = 100; i <= a; i++) {
		temp = (i / 100) * 100; //백의 자릿수만 남김.
		temp1 = ((i / 10) * 10) - temp; //십의 자릿수만 남김.
		if ((i >= 300 && i < 400) || (i >= 600 && i < 700) || (i >= 900 && i < 1000)) {
			if (((i - temp) >= 30 && (i - temp) < 40) || ((i - temp) >= 60 && (i - temp) < 70) || ((i - temp) >= 90 && (i - temp) < 100)) {
				if ((i - temp - temp1) == 3 || (i - temp - temp1) == 6 || (i - temp - temp1) == 9) {
					printf("-");
				}
				printf("-");
			}
			printf("- ");
		}
		else {
			if (((i - temp) >= 30 && (i - temp) < 40) || ((i - temp) >= 60 && (i - temp) < 70) || ((i - temp) >= 90 && (i - temp) < 100)) {
				if ((i - temp - temp1) == 3 || (i - temp - temp1) == 6 || (i - temp - temp1) == 9) {
					printf("-");
				}
				printf("- ");
			}
			else {
				if ((i - temp - temp1) == 3 || (i - temp - temp1) == 6 || (i - temp - temp1) == 9) {
					printf("- ");
				}
				else {
					printf("%d ", i);
				}
			}
		}


	}
}

void tlq(int a) {
	int temp;
	dlf(9);
	for (int i = 10; i <= a; i++) {
		temp = (i / 10) * 10;
		if ((i >= 30 && i < 40) || (i >= 60 && i < 70) || (i >= 90 && i < 100)) {
			if ((i - temp) == 3 || (i - temp) == 6 || (i - temp) == 9) {
				printf("-");
			}
			printf("- ");
		}

		else if ((i - temp) == 3 || (i - temp) == 6 || (i - temp) == 9) {
			printf("- ");
			}

		else printf("%d ", i);

	}
}

void dlf(int a) {
	for (int i = 1; i <= a; i++) {
		if (i == 3 || i == 6 || i == 9) {
			printf("- ");
		}
		else printf("%d ", i);
	}
}
