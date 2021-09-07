#ifndef MODULE_B_H
#define MODULE_B_H
#include <iostream>

#include "global_server.h"
#include "module_base.h"
using namespace std;
class module_B : public module_base {
 public:
  void print();
  virtual void Register();
};
void module_B::print() { cout << "B" << endl; }

void module_B::Register() { g_global_server->module_handle[MODULE_B] = this; }

#endif