#include"server.h"
#include"test.h"
//#include"student_types.h"
#ifdef __cplusplus
extern "C"{
#endif

void add_c(/*const*/ S *s );

#ifdef __cplusplus
}
#endif 

void add_c(/*const*/ S *s)
{
	Student  stu;
	ServHandler handle;
	stu.__set_sno(s->sno);
	
	printf("sno %d\n", s->sno);
	handle.add(stu);
}
