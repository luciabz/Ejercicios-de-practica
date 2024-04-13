import java.util.Scanner;

public class Votacion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int edad;
        String sexo;
        
        System.out.print("Ingrese su edad: ");
        edad = scanner.nextInt();
        scanner.nextLine(); // Consumir el salto de línea pendiente
        
        System.out.print("Ingrese su sexo (F si es femenino y M si es masculino): ");
        sexo = scanner.nextLine();
        
        if (edad >= 16) {
            if (sexo.equalsIgnoreCase("F")) {
                System.out.println("Usted es mujer y puede votar");
            } else if (sexo.equalsIgnoreCase("M")) {
                System.out.println("Usted es hombre y puede votar");
            } else {
                System.out.println("Sexo ingresado inválido");
            }
        } else {
            System.out.println("Usted no puede votar");
        }
        
        scanner.close();
    }
}
