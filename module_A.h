#ifndef MODULE_A_H
#define MODULE_A_H
#include <iostream>

#include "global_server.h"
#include "module_base.h"
using namespace std;
class module_A : public module_base {
 public:
  void print();
  virtual void Register();
};
void module_A::print() { cout << "A" << endl; }

void module_A::Register() { g_global_server->module_handle[MODULE_A] = this; }

#endif