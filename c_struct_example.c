#include <stdio.h>

typedef struct {
  int length;
  int width;
} Rectangle;

int perimiter(Rectangle r)
{
  return (r.length + r.width) * 2;
}

int area(Rectangle r)
{
  return r.length * r.width; 
}

void print_rectangle(Rectangle r)
{
  int i, j;

  printf("\033[1;33mRectangle\x1b[0m\n");
  printf("===========\n");
  printf("\033[1;33mLength: %d\n", r.length); 
  printf("Width: %d\n", r.width);
  printf("Area: %d\n", area(r));
  printf("Perimiter: %d\n", perimiter(r));
  for(i=0; i<r.length; i++){
    for(j=0; j<r.width; j++)
      printf("\033[1;45mX");
    printf("\x1b[0m\n");
  }
}

Rectangle new_rectangle(int length, int width)
{
  Rectangle r;

  r.length = length;
  r.width = width;

  return r;
}

int main()
{
  Rectangle r = new_rectangle(5, 25);

  print_rectangle(r);
}
