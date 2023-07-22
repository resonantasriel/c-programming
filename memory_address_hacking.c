#include <stdio.h>

/** First, we need to initialize an `int main() {}` function to add code to. This will be the starting point of our execution. */
int main() {
  /** printf() is an intrinsic function given by the memory address sanitizer,
  using it allows us to message the kernel's operating system to tell it to change
  the pixels on the graphical user interface. */

  printf(
    /** printf can only take a series of characters (known as char*). we must cast our string to a char* type. */
    (char*)"HELLO WORLD"
  ); 

  /** Now, we have opened the kernel for communication. We have maliciously
  acquired the kernel's trust and we can manipulate it to our advantage.
  Let us crash the kernel HAHAHHAHAHAHAHAHHAHAHAHAHAAHAHHA. */

  for (long long int i = 0; ++i; (&i)[i] = i);

  /** We have exploited the kernel's trust and destroyed it.
  We have successfully hacked the memory.
  */
};
