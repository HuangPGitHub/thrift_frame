#include"server.h"


ServHandler::ServHandler()
{


}


void ServHandler::add(const Student& s)
{
	S  s_struct;
	s_struct.sno = s.sno;
	s_struct.sage = s.sage;		
	s_struct.ssex = s.ssex;	
	add_cfun(s_struct);
}

//Student ServHandler::get()
void ServHandler::get(Student& _return)
{
	S s;
	s = get_cfun();
	_return.__set_sno(s.sno);
	_return.__set_ssex(s.ssex);
	_return.__set_sage(s.sage);
	
//	return stu;
}


