#ifndef Xcept
#define Xcept
#include <excpt.h>
#include <new.h>

class BadInitializers {
   public:
      BadInitializers() {}
};

class NoMem {
   public:
      NoMem() {}
};

void my_new_handler()
{
   throw NoMem();
};

class OutOfBounds {
   public:
      OutOfBounds() {}
};

class SizeMismatch {
   public:
      SizeMismatch() {}
};

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
