#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int do_not_advertise, advertise, ad_cost;

	if (scanf("%d %d %d", &do_not_advertise, &advertise, &ad_cost) != 3 || do_not_advertise < 1 || advertise < 1 || ad_cost < 1) return 0;

	printf("%s\n", do_not_advertise + ad_cost < advertise ? "advertise" : do_not_advertise + ad_cost > advertise ? "do not advertise" : "does not matter");

	return 0;
}