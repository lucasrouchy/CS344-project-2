#include <stdio.h>
int main(void)
{
  int i;
  int x = 12;
  float y = 3.14;
  char* s = "Hello World!";
  printf("x is %d\n", x);
  printf("y is %f\n", y);
  printf("%s\n", s);

  for(i = 0; i <5; i = i +1) {
    printf("%d x 5 = %d\n",i , i * 5);
  }
}
