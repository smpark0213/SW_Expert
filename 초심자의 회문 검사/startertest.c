#include <stdio.h>

int main() {
	int count;
	int ttemp = 0;
	int i, important;
	char string[11];
	char temp[11];
	char isTrue[10] = { 0 };
//
	scanf("%d", &count);
	getchar();
	for (int a = 0; a < count; a++) { //count만큼 반복
		//printf("\n---------------\n");
		for (i = 0; i < 11; i++) { //회문확인을 위한 string 입력.
			scanf("%c", &string[i]);

			if (string[i] == '\n') {
				i = i - 1;
				break;
			}

		}
		important = i;

		for (i; i >= 0; i--) { //회문 생성
			temp[ttemp] = string[i];
			ttemp++;
		}
		//printf("\nbefore\n");
		//for (int j = 0; j <= important; j++) printf("%c", string[j]);
		//printf("\n\nafter\n");
		//for (int j = 0; j <= important; j++) printf("%c", temp[j]);
		

		for (int j = 0; j <= important; j++) {

			if (j == important) isTrue[a] = 1;
			else {
				if (temp[j] == string[j]) continue;

				else break;
			}
		}
		ttemp = 0;
	}

	for (int a = 0; a < 10; a++) {
		printf("#%d %d\n", a + 1, isTrue[a]);
	}
	
	return 0;
}