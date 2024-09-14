#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int midterm_exam, final_exam, performance_evaluation;
	float midterm_rate, final_rate, performance_rate;

	if (scanf("%f %d", &midterm_rate, &midterm_exam) != 2 || midterm_exam < 0 || midterm_rate < 0);
	if (scanf("%f %d", &final_rate, &final_exam) != 2 || final_exam < 0 || final_rate < 0);
	if (scanf("%f %d", &performance_rate, &performance_evaluation) != 2 || performance_evaluation < 0 || performance_rate < 0) return 0;

	printf("%.1f\n", midterm_exam * midterm_rate + final_exam * final_rate + performance_evaluation * performance_rate);

	return 0;
}