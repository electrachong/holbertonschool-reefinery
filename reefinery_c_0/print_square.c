#include "my_functions.h"

/* print a square with the size of the arguments */
void print_square(int size)
{
  int dashes = size - 2;

  if (size == 1)
    {
      print_char('o');
      print_char('\n');
    }
  
  else if (size > 0)
    {
      print_top_bottom(dashes);
      print_sides(dashes);
      print_top_bottom(dashes);
    }
  
}

/* print the tops and bottoms, which will include the corners */
void print_top_bottom(int dashes)
{
  print_char('o');
  print_dashes(dashes);
  print_char('o');
  print_char('\n');
}

/* print the number of dashes in the square */
void print_dashes(int dashes)
{
  for (; dashes > 0; dashes --)
    {
      print_char('-');
    }
}

/* print the number of vertical dashes in the square */
void print_sides(int dashes)
{
  int spaces = dashes;
  
  for (; dashes > 0; dashes --)
   {
     print_char('|');
     print_spaces(spaces);
     print_char('|');
     print_char('\n');
   }
}

/* print the number of spaces between each vertical dash */
void print_spaces(int spaces)
{
  for (; spaces > 0; spaces --)
  {
    print_char(' ');
  }
}
