#include<stdio.h>
#include<string.h>
struct Student{
1: i32 sno;
2: bool ssex;
3: i16 sage;
}

service Serv
{
	void add(1: Student s);
	Student get();
}
