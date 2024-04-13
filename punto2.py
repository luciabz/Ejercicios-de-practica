edad = int(input("Ingrese su edad: "))
sexo = input("Ingrese su sexo (F si es femenino y M si es masculino): ").upper()

if edad >= 16:
    if sexo == "F":
        print("Usted es mujer y puede votar")
    elif sexo == "M":
        print("Usted es hombre y puede votar")
    else:
        print("Opción de sexo no válida")
else:
    print("Usted no puede votar")
