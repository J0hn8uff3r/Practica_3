#include <stdio.h>
// El archivo de cabecera de la biblioteca estándar de C limits.h 
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo entero, 
// propiedades como por ejemplo la definición de su rango.
// http://www.tutorialspoint.com/c_standard_library/limits_h.htm
// http://tigcc.ticalc.org/doc/limits.html
#include <limits.h>
//
// El archivo de cabecera de la biblioteca estándar de C float.h 
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo float, 
// propiedades como por ejemplo la definición de su rango. FLT_MIN,FLT_MAX
#include <float.h>
 
int main()
{
   printf("El número de bits en un byte es: %d\t\t\n", CHAR_BIT);//Devuelve el tamaño en bits dentro de un byte
   printf("Storage size for int : %d \n", (int) sizeof(int)); //Devuelve el tamaño en bytes del tipo entero (int).
   printf("Storage size for short int : %d \n", (short int) sizeof(short int)); //Devuelve el tamaño en bytes del tipo entero (int).
   printf("Storage size for unsigned int : %d \n", (unsigned int) sizeof(unsigned int)); //Devuelve el tamaño en bytes del tipo entero (int).
   printf("Storage size for float : %f \n", (float) sizeof(float)); //Devuelve el tamaño en bytes del tipo flotante (float).
   printf("Storage size for char : %f \n", (char) sizeof(char)); //Devuelve el tamaño en bytes del tipo char (char).
   printf("Storage size for long : %ld \n", (long) sizeof(long)); //Devuelve el tamaño en bytes del tipo long (long).
   printf("Storage size for double : %f \n", (double) sizeof(double)); //Devuelve el tamaño en bytes del tipo double (double). 
   printf("\n\n");
   printf ("Mínimo y máximo valor del tipo de datos short int valor= %d\t\t%d\n",SHRT_MIN,SHRT_MAX);
   printf ("Mínimo y máximo valor del tipo de datos short int sin signo valor= \t\t%d\n",USHRT_MAX);
   printf ("Mínimo y máximo valor del tipo de datos int valor= %d\t\t%d\n",INT_MIN,INT_MAX);
   printf ("Mínimo y máximo valor del tipo de datos float valor= %f\t\t\t%f\n",FLT_MIN,FLT_MAX);
   printf ("Mínimo y máximo valor del tipo de datos char sin signo valor= \t\t%d\n",UCHAR_MAX);
   printf ("Mínimo y máximo valor del tipo de datos char valor= %d\t\t\t%d\n",CHAR_MIN,CHAR_MAX);
   //32 bit compiler LONG_MIN=-2.147.483.648 & LONG_MAX=2147483647 
   //64 bit compiler LONG_MIN=-9.223.372.036.854.775.808 & LONG_MAX=+9.223.372.036.854.775.807
   printf ("Mínimo y máximo valor del tipo de datos long con signo valor= %ld\t%ld\n",LONG_MIN,LONG_MAX);
   printf ("Mínimo y máximo valor del tipo de datos long sin signo valor= \t\t%lu\n",ULONG_MAX);
   printf ("Mínimo y máximo valor del tipo de datos double con signo valor= %ld\t%ld\n",DBL_MIN,DBL_MAX);
   printf ("Mínimo y máximo valor del tipo de datos multi-byte valor= \t\t\t%d\n",MB_LEN_MAX);
   printf("\n\n");
   return 0;
}
 
//
//Referencias para códigos de formatos en la función printf
//https://msdn.microsoft.com/es-es/library/aa291517(v=vs.71).aspx
//http://es.cppreference.com/w/cpp/io/c/printf_format
