#pragma warning (disable:4996)

#include <stdio.h>

int sum_and_new(int a) {
	int ten, one, sum, new_num;

	one = a % 10;
	ten = (a - one) / 10;
	sum = ten + one;
	new_num = sum % 10 + one * 10;

	return new_num;
}

int main()
{
	int inp, new_num, cycle = 0;

	scanf("%d", &inp);

	if (inp > 99 || inp < 0) {
		return 1;
	}

	new_num = inp;

	while (1) {
		new_num = sum_and_new(new_num);
		cycle++;
		if (inp == new_num) {
			break;
		}
		//printf("== %d ==", new_num);
	}

	printf("%d", cycle);

	return 0;
}