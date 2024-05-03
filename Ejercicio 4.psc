Algoritmo PromedioSeccion
	Definir suma, nota, contador Como Entero
	Definir promedio Como Real
	
	suma <- 0
	
	Para contador <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante " contador "n: "
		Leer nota
		suma <- suma + nota
	FinPara
	
	promedio <- suma / 10
	
	Escribir " El promedio general de la seccion es: " promedio
FinAlgoritmo
