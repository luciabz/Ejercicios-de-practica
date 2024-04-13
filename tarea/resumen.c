#include <stdio.h>
#include <stdlib.h>
//while
int contador = 0;
while (contador < 5) {
    printf("Contador: %d\n", contador);
    contador++;
}



// do while
int contador = 0;
do {
    printf("Contador: %d\n", contador);
    contador++;
} while (contador < 5);





//switch
int opcion = 2;
switch (opcion) {
    case 1:
        printf("Opción 1\n");
        break;
    case 2:
        printf("Opción 2\n");
        break;
    default:
        printf("Opción no válida\n");
}




//for
for (int i = 0; i < 5; i++) {
    printf("Iteración %d\n", i);
}




// if 
int numero = 10;
if (numero > 5) {
    printf("El número es mayor que 5.\n");
} else {
    printf("El número no es mayor que 5.\n");
}




//funciones
int suma(int a, int b) {
    return a + b;
}

int resultado = suma(3, 4);
printf("La suma es: %d\n", resultado);






//vector
int vector[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, vector[i]);
}






//matriz
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
printf("Elemento en la fila 1, columna 2: %d\n", matriz[0][1]);

//recursividad
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}





int resultado = factorial(5);
printf("Factorial de 5: %d\n", resultado);
 
 //punteros
int valor = 42;
int *puntero = &valor;
printf("Valor: %d\n", *puntero); // Acceder al valor a través del puntero









#include <stdio.h>

int main() {
    FILE *archivo; // Declarar un puntero a tipo FILE

    // Abrir el archivo en modo de escritura ("w")
    archivo = fopen("mi_archivo.txt", "w");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1; // Salir con un código de error
    }

    // Escribir datos en el archivo
    fprintf(archivo, "Hola, este es un archivo de ejemplo.\n");

    // Cerrar el archivo
    fclose(archivo) ;

    printf("Archivo creado exitosamente.\n");

    return 0 ; // Salir sin errores
}







//ordenamiento burbuja

#include <stdio.h>

// Función de ordenación burbuja
 #include <stdio.h>

// Función de ordenación burbuja
void ordenacionBurbuja(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor que el siguiente, intercambiarlos
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

// Función para imprimir un arreglo
void imprimirArreglo(int arreglo[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}






int main() {
    int n;

    // Solicitar al usuario ingresar la cantidad de números
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    // Crear un arreglo de tamaño n
    int arreglo[n];

    // Solicitar al usuario ingresar los números
    printf("Ingrese %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Imprimir el arreglo antes de ordenar
    printf("Arreglo original: ");
    imprimirArreglo(arreglo, n);

    // Ordenar el arreglo usando el algoritmo de ordenación burbuja
    ordenacionBurbuja(arreglo, n);

    // Imprimir el arreglo después de ordenar
    printf("Arreglo ordenado: ");
    imprimirArreglo(arreglo, n);

    return 0;
}




//arrays
#include<stdio.h>


int main(){
    int arrays[3];

   for (int i=0;i<3; i++){
    printf("ingrese numro");
    scanf("%d", &arrays[i]);
   };
printf("numeros ingresados");
  for(int i=0; i<3 ; i++){
  printf("%d", arrays[i]);
      
  };
   return 0;
}







#include <stdio.h>
#include <stdlib.h>

// Definir una estructura para almacenar los datos de una persona
struct Persona {
    char nombre[50];
    int edad;
    char direccion[100];
};

int main() {
    FILE *archivo;
    struct Persona persona;

    // Abrir el archivo en modo de escritura ("w")
    archivo = fopen("personas.txt", "w");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Solicitar y registrar los datos de las personas
    int numPersonas;
    printf("Ingrese el número de personas a registrar: ");
    scanf("%d", &numPersonas);

    for (int i = 0; i < numPersonas; i++) {
        printf("\nPersona %d:\n", i + 1);

        // Ingresar el nombre
        printf("Nombre: ");
        scanf("%s", persona.nombre);

        // Ingresar la edad
        printf("Edad: ");
        scanf("%d", &persona.edad);

        // Ingresar la dirección
        printf("Dirección: ");
        scanf("%s", persona.direccion);

        // Escribir los datos en el archivo
        fprintf(archivo, "Nombre: %s\nEdad: %d\nDirección: %s\n\n",
                persona.nombre, persona.edad, persona.direccion);
    }

    // Cerrar el archivo
    fclose(archivo);

    printf("Datos guardados correctamente en el archivo 'personas.txt'.\n");

    return 0;
}


