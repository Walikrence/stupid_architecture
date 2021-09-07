#include <iostream>

#include "MODULE_DEF.h"
#include "global_server.h"
#include "module_A.h"
#include "module_B.h"
#include "module_C.h"
#include "module_base.h"
using namespace std;

bool init() {
  g_global_server = new global_server();
  module_base* ma = new module_A;
  ma->Register();
  module_base* mb = new module_B;
  mb->Register();
  module_base* mc = new module_C;
  mc->Register();
  return true;
}

int main(int argc, char const* argv[]) {
  init();
  module_A* ma = (module_A*)g_global_server->get_module(MODULE_A);
  module_B* mb = (module_B*)g_global_server->get_module(MODULE_B);
  module_C* mc = (module_C*)g_global_server->get_module(MODULE_C);
  if (ma == NULL || mb == NULL || mc == NULL) {
    cout << "module == NULL" << endl;
  }
  ma->print();
  mb->print();
  mc->print();
  return 0;
}