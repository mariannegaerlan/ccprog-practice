#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

struct myStructure2 {
  int myNum2;
  char myLetter2;
};

int main() {
  // Create different struct variables
  struct myStructure s1;
  struct myStructure2 s2;

  // Assign values to different struct variables
  s1.myNum = 13;
  s1.myLetter = 'B';

  s2.myNum2 = 50;
  s2.myLetter2 = 'x';

  // Print values
  printf("s1 number: %d\n", s1.myNum);
  printf("s1 letter: %c\n", s1.myLetter);

  printf("s2 number: %d\n", s2.myNum2);
  printf("s2 letter: %c\n", s2.myLetter2);

  return 0;
}