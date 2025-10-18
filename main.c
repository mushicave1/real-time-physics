#include <stdio.h>
#include <string.h>

const char * msg = "Hello, %s";

int main(int argc, char *argv[]) 
{
  char buffer[100];
  int sz = snprintf(buffer, sizeof(buffer), msg, "World");
  for (int i = 0; i < sz; ++i) 
  {
    printf("%c", buffer[i]);
  } 
  return 0;
}
