#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int do_not_advertise, advertise, ad_cost;

	if (scanf("%d %d %d", &do_not_advertise, &advertise, &ad_cost) != 3 || ad_cost < 0) return 0;

	printf("%s\n", do_not_advertise + ad_cost < advertise ? "advertise" : do_not_advertise + ad_cost > advertise ? "do not advertise" : "does not matter");

	return 0;
}