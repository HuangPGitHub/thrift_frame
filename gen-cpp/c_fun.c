#include"test.h"
#include<stdio.h>

S g_s;

void add_cfun(S s)
{
	printf("s.sno:%d  s.ssex:%d  s.sage:%d\n", s.sno, s.ssex, s.sage);
	printf("connect!\n");
	g_s = s;
}


S get_cfun()
{
	return g_s;
}
