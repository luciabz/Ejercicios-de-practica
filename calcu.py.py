import math

opcion = 0

while opcion != 4:
    print("Calculadora de perímetro y área")
    print("1. Círculo  2. Pentágono  3. Rectángulo  4. Salir")
    opcion = int(input("Seleccione una opción (1-4): "))
    
    if opcion == 1:
        radio = float(input("Radio del círculo: "))
        perimetro = 2 * math.pi * radio
        area = math.pi * radio * radio
    elif opcion == 2:
        lado = float(input("Lado del pentágono: "))
        apotema = (5 * lado * lado) / (4 * math.tan(math.pi / 5))
        perimetro = 5 * lado
        area = (5 * lado * apotema) / 2 
    elif opcion == 3:
        base = float(input("Base del rectángulo: "))
        altura = float(input("Altura del rectángulo: "))
        perimetro = 2 * (base + altura)
        area = base * altura
    elif opcion == 4:
        print("Saliendo...")
    else:
        print("Opción no válida.")
    
    if opcion != 4:
        print("Perímetro:", perimetro)
        print("Área:", area)
