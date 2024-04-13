const readline = require('readline-sync');
const PI = Math.PI;

function main() {
    while (true) {
        console.log('\nBienvenido a la Calculadora de perimetro y area');
        console.log('1. Calcular el perímetro y área de un círculo');
        console.log('2. Calcular el perímetro y área de un pentágono');
        console.log('3. Calcular el perímetro y área de un rectángulo');
        console.log('4. Salir');
        
        const opcion = parseInt(readline.question('\nSeleccione una opción (1-4): '));
        
        switch (opcion) {
            case 1:
                const radio = parseFloat(readline.question('Ingrese el radio del círculo: '));
                const perimetroCirculo = 2 * PI * radio;
                const areaCirculo = PI * Math.pow(radio, 2);
                console.log('El perímetro del círculo es:', perimetroCirculo);
                console.log('El área del círculo es:', areaCirculo);
                break;
            case 2:
                const ladoPentagono = parseFloat(readline.question('Ingrese la longitud de un lado del pentágono: '));
                const apotema = (5 * Math.pow(ladoPentagono, 2)) / (4 * Math.tan(PI / 5));
                const perimetroPentagono = 5 * ladoPentagono;
                const areaPentagono = (5 * ladoPentagono * apotema) / 2;
                console.log('El perímetro del pentágono es:', perimetroPentagono);
                console.log('El área del pentágono es:', areaPentagono);
                break;
            case 3:
                const baseRectangulo = parseFloat(readline.question('Ingrese la base del rectángulo: '));
                const alturaRectangulo = parseFloat(readline.question('Ingrese la altura del rectángulo: '));
                const perimetroRectangulo = 2 * (baseRectangulo + alturaRectangulo);
                const areaRectangulo = baseRectangulo * alturaRectangulo;
                console.log('El perímetro del rectángulo es:', perimetroRectangulo);
                console.log('El área del rectángulo es:', areaRectangulo);
                break;
            case 4:
                console.log('Saliendo del programa...');
                return;
            default:
                console.log('Opción no válida. Por favor, seleccione una opción válida.');
                break;
        }
    }
}

main();
