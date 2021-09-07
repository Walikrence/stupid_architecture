#ifndef MODULE_BASE
#define MODULE_BASE
#include "MODULE_DEF.h"

class module_base {
 public:
  virtual void Register() = 0;
};

#endif