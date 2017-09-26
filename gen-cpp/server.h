#include"Serv.h"
#include "test.h"
#ifdef __cplusplus
extern "C"{
#endif

void add_cfun(S s);
S get_cfun();

#ifdef __cplusplus
}
#endif


class ServHandler : virtual public ServIf {
 public:
  ServHandler(); 
    // Your initialization goes here
  

  void add(const Student& s);	
//  Student  get();
  void get(Student& _return);
};
