#include<stdio.h>

float calcularmedia(int tem[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += tem[i];
    }

    return (float)suma / n;
}

int media_y_mayor_o_igual(int tem[], int n) {
    int suma = 0;

    // Calcular la suma de los números
    for (int i = 0; i < n; ++i) {
        suma += ni];
    }
}
    // Calcular la media
    float media = (float)suma / n;
    printf("La media es: %.2f\n", media);


int mayor_o_igual = tem[0];{
    for (int i = 1; i < longitud; ++i) {
        if (numeros[i] >= media && tem[i] > mayor_o_igual) {
            mayor_o_igual = tem[i];
        }
    }

    return mayor_o_igual;

}
int main(){
  int n ;
   printf ("ingrese numero de temeperaturas a ingresar: ") ;
   scanf("%d",&n);

   int tem[n];
    printf("Ingrese temperaturas:\n");
   for(int i= 0; i< n ; i++) {
   
   printf("ingrese temperatura %d: ", i +1);
   scanf("%d",&tem[i]);

   }
   printf("la media de temperatura es de: %.2f\n", calcularmedia(tem, n));
   resultado =  media_y_mayor_o_igual(tem, n);
    printf("tempertura mayor o igual a la media: ")
   return 0;
}