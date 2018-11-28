#include "conexo.h"

int
esConexo (int vertices[10], int aristas[25][2])
{
  int retorno = 1;
  int verticesMarcados[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  int noMarcados[10];
  int pasoValores = 0;
  int analisis = 0;
  int verticeEje = 0;
  int comparacion = 0;
  int marcar = 0;
  int colocar = 0;
  int sumar;
  int contadorSumar = 0;
  for (pasoValores = 0; pasoValores < 10; pasoValores++)
    {
      noMarcados[pasoValores] = vertices[pasoValores];
    }
  verticesMarcados[0] = noMarcados[0];
  noMarcados[0] = 0;
  for (analisis = 0; analisis < 10; analisis++)
    {
      verticeEje = verticesMarcados[analisis];
      for (comparacion = 0; comparacion < 25; comparacion++)
	{
	  if (aristas[comparacion][0] == verticeEje)
	    {
	      for (marcar = 0; marcar < 10; marcar++)
		{
		  if (aristas[comparacion][1] == noMarcados[marcar])
		    {
		      for (colocar = 0; colocar < 10; colocar++)
			{
			  if (verticesMarcados[colocar] == 0)
			    {
			      verticesMarcados[colocar] = noMarcados[marcar];
			      noMarcados[marcar] = 0;
			      colocar = 10;
			    }
			}
		    }
		}
	    }
	  else if (aristas[comparacion][1] == verticeEje)
	    {
	      for (marcar = 0; marcar < 10; marcar++)
		{
		  if (aristas[comparacion][0] == noMarcados[marcar])
		    {
		      for (colocar = 0; colocar < 10; colocar++)
			{
			  if (verticesMarcados[colocar] == 0)
			    {
			      verticesMarcados[colocar] = noMarcados[marcar];
			      noMarcados[marcar] = 0;
			      colocar = 10;
			    }
			}
		    }
		}
	    }
	}
    }
  for (contadorSumar = 0; contadorSumar < 10; contadorSumar++)
    {
      if (noMarcados[contadorSumar] != 0)
	{
	  retorno = 0;
	}
    }
  return retorno;
}
