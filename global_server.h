#ifndef GLOBAL_SERVER_H
#define GLOBAL_SERVER_H
#include "MODULE_DEF.h"
#include "module_base.h"

class global_server {
 public:
  module_base* get_module(em_module_name module_name);

 public:
  module_base* module_handle[MAX_MODULE_NUM];
};
global_server* g_global_server;

module_base* global_server::get_module(em_module_name module_name) {
  if (module_handle[module_name] != NULL) {
    return module_handle[module_name];
  }
  return NULL;
}
#endif