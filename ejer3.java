import java.util.Scanner;

public class Mainjava {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double acumulador = 0.0;
        double promedio = 0.0;
        int contador = 0;
        int edad;

        do {
            System.out.print("Ingrese edad: ");
            edad = scanner.nextInt();
            contador++;
            acumulador += edad;
        } while (edad != 0);

        contador--;
        if (contador != 0) {
            promedio = acumulador / contador;
        }

        System.out.println("El promedio es: " + promedio);
    }
}
