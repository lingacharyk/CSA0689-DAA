#include <stdio.h>
#include <string.h>

int main() {

  char str[100];
  printf("Enter a string: ");
  gets(str);

  int i, j;
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  printf("The reversed string is: %s\n", str);

  return 0;
}
