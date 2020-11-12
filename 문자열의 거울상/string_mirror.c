#include <stdio.h>

int main() {
	int i = 0;
	int count, important = 0;
	int answer_num = 1;
	char input[1001];
	char temp[1001];
	char answer[1001];

	scanf("%d", &count);
	getchar();

	for (int a = 0; a < count; a++) {

		for (i = 0; i < 1001; i++) {
			scanf("%c", &input[i]);

			if (input[i] == '\n') break;
		}
		i -= 1;
		important = i;

		for (i; i >= 0; i--) { //회문 생성
			temp[important - i] = input[i];
			answer[important - i] = temp[important - i];
		}
		printf("#%d ", answer_num);
		for (int a = 0; a <= important; a++) { //출력
			if (answer[a] == 'b') printf("d");
			if (answer[a] == 'd') printf("b");
			if (answer[a] == 'q') printf("p");
			if (answer[a] == 'p') printf("q");
		}
		answer_num++;
		printf("\n");
	}
}