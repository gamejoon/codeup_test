#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _score
{
	char name[10];
	int score;
} DATA;

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 3 || n > 50) return 0;

	DATA* data = (DATA*)malloc(sizeof(DATA) * n);
	
	for (int i = 0; i < n; i++) if (scanf("%s %d", data[i].name, &data[i].score) != 2 || data[i].score < 0 || data[i].score > 100) return 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (data[j].score > data[j - 1].score)
			{
				DATA tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
		}
	}

	printf("%s\n", data[2].name);

	free(data);

	return 0;
}