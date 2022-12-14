// exception classes for various error types

#ifndef Xcept_
#define Xcept_

#include "xcept8.h"
#include <new.h>

// bad initializers
class BadInitializers {
   public:
      BadInitializers() {}
};

// insufficient memory
class NoMem {
   public:
      NoMem() {}
};

// change new to throw NoMem instead of xalloc
void my_new_handler()
{
   throw NoMem();
};


// improper array, find, insert, or delete index
// or deletion from empty structure
class OutOfBounds {
   public:
      OutOfBounds() {}
};

// use when operands should have matching size
class SizeMismatch {
   public:
      SizeMismatch() {}
};

// use when zero was expected
class MustBeZero {
   public:
      MustBeZero() {}
};

// use when zero was expected
class BadInput {
   public:
      BadInput() {}
};

#endif
