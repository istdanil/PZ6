#include <Windows.h>
#include <stdio.h>
#include <math.h>   


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char input[50];
	fgets(input, sizeof(input), stdin);
	int c1, c2, c3, c4;
	sscanf_s(input, "%d %d %d %d", &c1, &c2, &c3, &c4);
	int x = fabs(c1 - c3);
	int y = fabs(c2 - c4);

	float result = sqrt(pow(x, 2) + pow(y, 2));
	printf("%5.6f\n", result);

}