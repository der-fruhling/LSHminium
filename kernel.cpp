#include <stdio.h>
#include <stdlib.h>
#include <string>

void error() {
  system("play sound.wav");
  exit(1);
}

void print(char *text) {
  printf(strcat(text, "\n"));
} 

int main(int argc, char const *argv[])
{
  print("[LSH] Kernel Begin");
  
  return 0;
}
