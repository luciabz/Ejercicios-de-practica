const readline = require('readline-sync');

function main() {
    while (true) {
        console.log("\nBienvenido a la Calculadora de Figuras");
        console.log("1. Calcular el perímetro y área de un círculo");
        console.log("2. Calcular el perímetro y área de un pentágono");
        console.log("3. Calcular el perímetro y área de un rectángulo");
        console.log("4. Salir");
        
        const opcion = parseInt(readline.question("\nSeleccione una opción (1-4): "));
        
        switch (opcion) {
            case 1:
                const radio = parseFloat(readline.question("Ingrese el radio del círculo: "));
                const perimetro = 2 * 3.1416 * radio;
                const area = 3.1416 * radio * radio;
                console.log("El perímetro del círculo es:", perimetro);
                console.log("El área del círculo es:", area);
                break;
            case 2:
                const lado = parseFloat(readline.question("Ingrese la longitud de un lado del pentágono: "));
                const perimetroPentagono = 5 * lado;
                const areaPentagono = (lado * lado * 3.1416) / 4;
                console.log("El perímetro del pentágono es:", perimetroPentagono);
                console.log("El área del pentágono es:", areaPentagono);
                break;
            case 3:
                const base = parseFloat(readline.question("Ingrese la base del rectángulo: "));
                const altura = parseFloat(readline.question("Ingrese la altura del rectángulo: "));
                const perimetroRectangulo = 2 * (base + altura);
                const areaRectangulo = base * altura;
                console.log("El perímetro del rectángulo es:", perimetroRectangulo);
                console.log("El área del rectángulo es:", areaRectangulo);
                break;
            case 4:
                console.log("Saliendo del programa...");
                return;
            default:
                console.log("Opción no válida. Por favor, seleccione una opción válida.");
        }
    }
}

main();
