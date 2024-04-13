#include <stdio.h>


int main(){
    int i, numeros[3], n;
    
    
    for(i=0; i<3 ;i++){
    printf("ingrese un numero");
    scanf("%d",&n);
        numeros[i]= n;
        
    }
    
    for (i=0 ;i<3 ;i++){
        printf("%d,",numeros[i]+1);
    }
    return 0;
}
