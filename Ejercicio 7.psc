Algoritmo sumaVectores
	Definir Long, i Como Entero
	Definir vector1, vector2, sumaVector como Entero
	
	Escribir "Ingrese la longitud de los vectores: "
	Leer Long
	
	Dimension vector1[Long]
	Dimension vector2[Long]
	Dimension sumaVector[Long]
	
	Escribir "Ingrese los elementos del primer vector: "
	Para i = 1 Hasta Long 
		Escribir "Elemento ", i, ":"
		Leer vector1[i]
	FinPara
	
	Escribir "Ingrese los elementos del 2 vector: "
	Para i = 1 Hasta Long 
		Escribir "Elemento ", i, ":"
		Leer vector2[i]
	FinPara
	
	Para i = 1 Hasta Long
		sumaVector[i] = vector1[i] + vector2[i]
	FinPara
	
	Escribir "La suma de los vectores es: "
	Para i = 1 Hasta Long 
		Escribir sumaVector[i]
	FinPara
	
FinAlgoritmo
