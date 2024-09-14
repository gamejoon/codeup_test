#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
reload:
	scanf("%d", &num);
	if (num != 0)
	{
		printf("%d\n", num);
		goto reload;
	}
	/*do
	{
		scanf("%d", &num);
		if(num != 0) printf("%d\n", num);
	} while (num != 0);
	for, while, do - while문 사용 불가문제
	*/

	return 0;
}