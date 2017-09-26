#include<stdio.h>
#include"test.h"

extern void add_c_cplus(S s);
extern S get_c_cplus();

int main(int argc, char **argv)
{
	S s;
	S s_get;

	s.sno = 10;
	s.ssex = 1;
	s.sage = 200;

	add_c_cplus(s);

	s_get = get_c_cplus();
	printf("get--  s_get.sno:%d  s_get.ssex:%d  s_get.sage:%d\n", s_get.sno, s_get.ssex, s_get.sage);
	return 0;
}
