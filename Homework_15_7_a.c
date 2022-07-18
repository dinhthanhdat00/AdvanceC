#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t stringEqual (char chuoi1[], char chuoi2[])
{
  int n = 0;
  int m = 0;
  while(chuoi1[n] != '\0')
  {
      n++;
  }
  while(chuoi2[m] != '\0')
  {
      m++;
  }
  printf ("%d\n", n);
  printf ("%d\n", m);
  if (n != m)
    return 0;
  for (int i = 0; i < n - 1; i++)
    {
      if (chuoi1[i] != chuoi2[i])
	return 0;
    }
  return 1;
}

int main ()
{
  char chuoix1[] = "Hello World";
  char chuoix2[] = "Hello World!!!!";
  char chuoix3[] = "Hello World";
  uint8_t x = stringEqual (chuoix1, chuoix2);
  if (x)
    printf ("Hai chuoi giong nhau");
  else
    printf ("Hai chuoi khac nhau");
  return 0;
}
