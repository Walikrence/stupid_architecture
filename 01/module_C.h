#ifndef MODULE_C_H
#define MODULE_C_H
#include <iostream>

#include "global_server.h"
#include "module_base.h"
using namespace std;
class module_C : public module_base {
 public:
  void print();
  virtual void Register();
};
void module_C::print() { cout << "C" << endl; }

void module_C::Register() { g_global_server->module_handle[MODULE_C] = this; }

#endif