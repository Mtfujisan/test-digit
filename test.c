
#include<stdbool.h>
#include<stdio.h>

int main(void)
{
  bool digit_seen[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  char n[10000];
  int i; 
  int repeat = 0;

  printf("Enter a number: ");
  scanf("%s", n);
  i = 0; 
  while(1) {
                  char c = n[i];
                  if(c == 0)
                        break;
                  i++;
        }
  
        return 0;
}

an example from the C-programmer instructor
