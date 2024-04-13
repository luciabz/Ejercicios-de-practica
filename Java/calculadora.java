package Java;
import java.util.Scanner;

public class calculadora {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int opcion = 0;

            while (opcion != 4) {
                System.out.println("Calculadora de perímetro y área");
                System.out.println("1. Círculo  2. Pentágono  3. Rectángulo  4. Salir");
                System.out.print("Seleccione una opción (1-4): ");
                opcion = scanner.nextInt();

                double perimetro = 0, area = 0;

                switch (opcion) {
                    case 1:
                        System.out.print("Radio del círculo: ");
                        double radio = scanner.nextDouble();
                        perimetro = 2 * Math.PI * radio;
                        area = Math.PI * radio * radio;
                        break;
                    case 2:
                        System.out.print("Lado del pentágono: ");
                        double lado = scanner.nextDouble();
                        double apotema = (5 * lado * lado) / (4 * Math.tan(Math.PI / 5));
                        perimetro = 5 * lado;
                        area = (5 * lado * apotema) / 2;
                        break;
                    case 3:
                        System.out.print("Base del rectángulo: ");
                        double base = scanner.nextDouble();
                        System.out.print("Altura del rectángulo: ");
                        double altura = scanner.nextDouble();
                        perimetro = 2 * (base + altura);
                        area = base * altura;
                        break;
                    case 4:
                        System.out.println("Saliendo...");
                        break;
                    default:
                        System.out.println("Opción no válida.");
                        continue;
                }

                if (opcion != 4) {
                    System.out.println("Perímetro: " + perimetro);
                    System.out.println("Área: " + area);
                }
            }
        }
    }
}