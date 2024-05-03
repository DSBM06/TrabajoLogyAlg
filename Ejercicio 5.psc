Algoritmo CalcularAprobados
	Definir estudiantes, contadorAprobados, contadorNoAprobados Como Entero
	Definir suma, nota, contador Como Entero
	Definir promedio Como Real
	
	estudiantes <- 8
	contadorAprobados <- 0
	contadorNoAprobados <- 0
	
	suma <- 0 
	
	Para contador <- 1 hasta 8 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante " contador, ": "
		Leer nota
		suma <- suma + nota
	FinPara
	
	promedio <- suma / 8
	
	Para i <- 1 Hasta estudiantes con paso 1 Hacer
		Si nota >= 60 Entonces
			Escribir "El estudiante ", i , "aprobó"
			contadorAprobados<- contadorAprobados + 1
		SiNo
			Escribir "El estudiante ", i , "desaprobó"
		FinSi
	FinPara
	
	Escribir "Total de estudiantes que aprobaron: " contadorAprobados
	Escribir "Total de estudiantes que desaprobaron: " contadorNoAprobados
	Escribir "El promedio general de la seccion es: " promedio
	
FinAlgoritmo
