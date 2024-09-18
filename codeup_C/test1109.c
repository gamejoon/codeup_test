#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[21], department_code;
	int age;
	float security_key;

	if (scanf(" %s", name) != 1) return 0;
	if (scanf(" %d", &age) != 1) return 0;
	if (scanf(" %c", &department_code) != 1 || (department_code != 'A' && department_code != 'B' && department_code != 'C')) return 0;
	if (scanf(" %f", &security_key) != 1) return 0;

	printf("%s\n%d\n%c\n%g", name, age, department_code, security_key);

	return 0;
}