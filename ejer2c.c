#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int fedad(int edad) {

  if (edad >= 16) {
    return 1;
  } else {
    return 0 ;
  }
}

int main() 
{
  int edad;
  char sexo[2]; // Para almacenar 'F' o 'M' y el carácter nulo ('\0')

  printf("Ingrese su edad: ");
  scanf("%d", &edad);
 
  printf("Ingrese su sexo (F si es femenino y M si es masculino): ");
  scanf("%s", sexo);
 int resultado = fedad(edad);
 
 if (resultado == 1){
    printf("usted es mayor y puede votar"); 
   }
 else(resultado == 0);
  
   {
    printf("usted es menor y no puede votar");
   }

  return 0;
}
