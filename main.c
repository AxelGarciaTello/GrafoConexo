#include "conexo.h"

int
main (void)
{
  int vertices[10] = { 1, 2, 3, 4, 5, 6 };
  int aristas[25][2] = { {1, 2},
  {1, 3},
  {2, 3},
  {3, 4},
  {4, 5},
  {4, 6},
  {5, 6}
  };
  int conexo = 0;
  conexo = esConexo (vertices, aristas);
  return 0;
}
