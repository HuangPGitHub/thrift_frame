#include<iostream>
#include"client.h"
#include "test.h"

#ifdef __cplusplus
extern "C"{
#endif

void add_c_cplus(S s);
S get_c_cplus();

#ifdef __cplusplus
}
#endif

MyClass mc;

void add_c_cplus(S s)
{
	Student stu;
	stu.__set_sno(s.sno);
	stu.__set_ssex(s.ssex);
	stu.__set_sage(s.sage);

	mc.add(stu);
}

S get_c_cplus()
{
	S s;
	Student stu;
	mc.get(stu);
	s.sno = stu.sno;
	s.ssex = stu.ssex;
	s.sage = stu.sage;

	return s;
}
