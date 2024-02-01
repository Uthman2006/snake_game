#include "snake.h"
void snake(int **data, char *c, int *a, int *b) {
  system("clear");
  if (*c == 'w' && *(a) > 1) {
    (*a)--;
    data[*a][*b] = 3;
  } else if (*c == 'd' && *b < NMAXX - 2) {
    (*b)++;
    data[*a][*b] = 3;
  } else if (*c == 's' && *a < NMAXY - 2) {
    (*a)++;
    data[*a][*b] = 3;
  } else if (*c == 'a' && *b > 1) {
    (*b)--;
    data[*a][*b] = 3;
  } else if (*a < 3 || *b < 3 || *b > NMAXX - 3 || *a > NMAXY - 3) {
    *a = 12;
    *b = 40;
    data[*a][*b] = 3;
  }
}