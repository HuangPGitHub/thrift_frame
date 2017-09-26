#include <stdio.h>
//#include<stdint.h>
#include"test.h"
#include<memory.h>
#include<stdlib.h>
/*typedef struct tagStudent
{
	int32_t sno;
	int8_t ssex;
	int16_t sage;
}S;

*/
int main(int argc, char** argv)
{
	S *s=malloc(sizeof(S));
//	printf("sizeof(Student):%lu\n", sizeof(Student));
	s->sno = 1;
//	s.ssex = 0;
//	s.sage = 20;
	add_c(s);
	return 0;
}
