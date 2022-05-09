#include <stdlib.h>

#include "fcgi_stdio.h"

int main(void)

{
  int count = 0;

  while (FCGI_Accept() >= 0) {
    printf(
        "Content-type: text/html\r\n"
        "\r\n"
        "<title>Hello World!</title>"
        "<h1>Hello World!</h1>\n");
  }
  return 0;
}