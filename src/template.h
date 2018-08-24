#pragma once
#include "parser.h"
#include "basic_string.h"

namespace kagami {
  template <class T>
  shared_ptr<void> SimpleSharedPtrCopy(shared_ptr<void> target) {
    T temp(*static_pointer_cast<T>(target));
    return make_shared<T>(temp);
  }
}