THRIFT_DIR = /usr/local/include/thrift
LIB_DIR = /usr/local/lib

GEN_SRC = ./Serv.cpp student_types.cpp student_constants.cpp server_h.cpp libc_fun.so
GEN_SRC_C = ./Serv.cpp student_types.cpp student_constants.cpp

default: server c_client 
server: server.cpp  
	g++ -o server  ${GEN_SRC} -I${THRIFT_DIR} -L${LIB_DIR} -lthrift server.cpp
c_client: c_client.c libmid_client.so 
	gcc c_client.c -o c_client -L. -lmid_client 
libmid_client.so: mid_client.cpp libclient.so
	g++ -shared -fPIC -o libmid_client.so mid_client.cpp -I${THRIFT_DIR} -L. -lclient
libclient.so: client.cpp
	g++ -shared -fPIC -o  libclient.so client.cpp ${GEN_SRC_C} -I${THRIFT_DIR} -L${LIB_DIR} -lthrift 
.PHONY : clean
clean:
	rm -r server c_client libmid_client.so libclient.so
	
