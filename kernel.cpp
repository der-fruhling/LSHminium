#include <stdio.h>
#include <stdlib.h>
#include <string>

void print(const char *text) {
  printf(text);
  printf("\n");
} 

void error(int a) {
  system("play sound.wav -q");
  exit(a);
}

void non_fatal_error(const char *reason) {
  system("play sound.wav -q");
  print(reason);
}

char* cmdGET(const char *prompt) {
  printf(prompt);
  char *input;
  scanf("%c", input);
  return input;
}



int main(int argc, char const *argv[])
{
  print("[LSH] Kernel Begin");
  // Expansion code goes here...
  print("[LSH] Starting loop");
  while(true) {
    char *a = cmdGET("LSH> ");
    if (fopen(a, "r")) system(a);
    else non_fatal_error("Invalid Command");
  }
  return 0;
}
