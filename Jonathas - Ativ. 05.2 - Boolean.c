/*Ativ. 05.2 - Boolean*/

#include<stdio.h>
#include "boolean.h"

int main() {
  printf("%s ", bool(NOT false));
  printf("%s ", bool(false AND true));
  printf("%s ", bool(true OR false));
  return 0;
}
