#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Prints an Arrow
void print_arrow(int triLeftCol, int triSize, int sqLeftCol, int sqSize)
{
  //drawing the top part of the arrow
  for (int row = 0; row <= triSize; row++)
    {
      int minCol = triLeftCol + triSize - row, maxCol = triLeftCol + triSize + row;
      int col;
      for (col = 0; col < minCol; col++) putchar(' ');
      for (       ; col <= maxCol; col++) putchar('*');
      putchar('\n');
    }
  //drawing the bottom part of the arrow
  int i, j;
  int endCol = sqLeftCol + sqSize;
  for (int row = 0; row < sqSize; row++){
    int sqCol;
    for (sqCol = 0; sqCol < sqLeftCol; sqCol++) putchar(' ');
    for (       ; sqCol < endCol;  sqCol++) putchar('*');
    putchar('\n');
  }
}
