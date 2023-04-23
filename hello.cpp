#include <stdlib.h>
#include <iostream>

int main() {
  std::cout << "hello" << std::endl;
  char *x = (char*)malloc(10 * sizeof(char*));
  free(x);
  return x[5];
}
