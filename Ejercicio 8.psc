Algoritmo puntoMedio
	Definir  long, i Como Entero
	Definir vector1, vector2, punto Como Real
	
	Escribir "Ingrese la longitud de los vectores: "
	Leer long
	
	Dimension vector1[long]
	Dimension vector2[long]
	Dimension punto[long]
	
	Escribir "Ingrese los elementos del primer vector: "
	Para i <- 1 Hasta long
		Leer vector1[i]
	FinPara
	
	Escribir "Ingrese los elementos del segundo vector: "
	Para i <- 1 Hasta long
		Leer vector2[i]
	FinPara
	
	Escribir "El punto medio de los vectores: "
	Para i <- 1 Hasta long 
		punto[i]<- (vector1[i]+vector2[i])/2
		Escribir punto[i]
	FinPara
FinAlgoritmo
