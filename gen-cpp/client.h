#include<stdio.h>
#include<string>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include<thrift/server/TSimpleServer.h>
#include<thrift/transport/TServerSocket.h>
#include<thrift/transport/TBufferTransports.h>
#include"student_types.h"
#include"Serv.h"

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;
using boost::shared_ptr;


class MyClass
{
public:
	MyClass();
	~MyClass();

public:
	void add(Student s); //类
//	Student  get();
	void get(Student& s);
public:
	shared_ptr<TSocket>  socket;
	shared_ptr<TTransport>  transport;
	shared_ptr<TProtocol>   protocol;

//	ServClient client;
};






