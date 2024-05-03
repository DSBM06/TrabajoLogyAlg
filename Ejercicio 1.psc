Algoritmo sumaNaturales
	Definir n, suma, i Como Entero;
	
	Escribir "Ingrese un numero natural: "
	
	Leer n;
	
	suma <- 0
	Para i <- 1 hasta n Con Paso 1
		suma <- suma + 1
	FinPara
	
	Escribir "La suma de los numeros naturales desde 1 hasta ", n , "es: ", suma
FinAlgoritmo
