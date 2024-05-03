Algoritmo TransposicionMatriz
    Definir matriz, matriz_transpuesta, filas, columnas como Entero
    Escribir "Ingrese el número de filas de la matriz:"
    Leer filas
    Escribir "Ingrese el número de columnas de la matriz:"
    Leer columnas
    
    Dimension matriz[10,10]
    Dimension matriz_transpuesta[10,10]
    
    Escribir "Ingrese los elementos de la matriz:"
    Para i <- 1 Hasta filas
        Para j <- 1 Hasta columnas
            Escribir "Ingrese el elemento en la posición ", i, ",", j, ":"
            Leer matriz[i,j]
        FinPara
    FinPara
    
    Escribir "Matriz original:"
    Para i <- 1 Hasta filas
        Para j <- 1 Hasta columnas
            Escribir matriz[i,j], " "
        FinPara
        Escribir ""
    FinPara
    
    Para i <- 1 Hasta filas
        Para j <- 1 Hasta columnas
            matriz_transpuesta[j,i] <- matriz[i,j]
        FinPara
    FinPara
    
    Escribir "Matriz transpuesta:"
    Para i <- 1 Hasta columnas
        Para j <- 1 Hasta filas
            Escribir matriz_transpuesta[i,j], " "
        FinPara
        Escribir ""
    FinPara
FinAlgoritmo