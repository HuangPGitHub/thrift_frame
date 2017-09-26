#include "client.h"

MyClass::MyClass()
{
	socket = shared_ptr<TSocket>(new TSocket("localhost", 9090));
      	transport = shared_ptr<TBufferedTransport>(new TBufferedTransport(socket));
	protocol = shared_ptr<TBinaryProtocol>(new TBinaryProtocol(transport));
	transport->open();
//	client = ServClient(protocl);
}

MyClass::~MyClass()
{
	transport->close();
}

void MyClass::add(Student s)
{
	ServClient client(protocol);
	client.add(s);
}


//Student MyClass::get()
void MyClass::get(Student& s)
{
	ServClient client(protocol);
	client.get(s);
}
