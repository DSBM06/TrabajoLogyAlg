Algoritmo multiplicacionMatrices
	Definir matriz1, matriz2, resultado Como Entero
	Definir filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2 Como Entero
	
	Dimension matriz1[10,10]
	Dimension matriz2[10,10]
	Dimension resultado[10,10]
	
	Escribir "Ingrese el numero de filas de la primera matriz: "
	Leer filas_matriz1atriz1
	Escribir "Ingrese el numero de columnas de la primera matriz: "
	Leer columnas_matriz1
	Escribir "Ingrese el numero de filas de la segunda matriz: "
	Leer filas_matriz2
	Escribir "Ingrese el numero de columnas de la segunda matriz: "
	Leer columnas_matriz2
	
	Si columnasMatriz1 <> filasMatriz2 Entonces
		Escribir "Las dimensiones de las matrices no son compatibles para la multiplicacion."
	SiNo
		Para i <- 1 Hasta filasMatriz1
			Para j<- 1 Hasta columnasMatriz2
				resultado[i,j] <- 0
				Para k <- 1 Hasta columnasMatriz1
					resultado[i,j] <- resultado [i,j] + (matriz1[i,k]*matriz2[k,j])
				FinPara
			FinPara
			
			Escribir "Ingrese los elementos de la primera matriz: "
			Para i <- 1 Hasta filas_matriz1
				Para j <- 1 Hasta columnas_matriz1
					Escribir "Ingrese el elemento de [" ,i, "][" ,j, "]:"
					Leer matriz1[i,j]
				FinPara
			FinPara
			
			Escribir "Ingrese los elementos de la segunda matriz: "
			Para i <- 1 Hasta filas_matriz2
				Para j <- 1 Hasta columnas_matriz2
					Escribir "Ingrese el elemento de [" ,i, "][" ,j, "]:"
					Leer matriz1[i,j]
				FinPara
			FinPara
			
			Escribir "El resultado de la multiplicacion de matrices es:"
			Para i<- 1 Hasta filas_matriz1
				Para j <- 1 Hasta columnas_matriz2
					Escribir resultado[i,j]
				FinPara
				Escribir ""
			FinPara
			
		FinPara
	FinSi
	
FinAlgoritmo
