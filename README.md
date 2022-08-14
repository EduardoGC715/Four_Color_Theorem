# Four_Color_Theorem
 Estructuras de Datos Caso #1 Four Color Theorem

 La estructura Utilizada fue una matriz de relaciones de tamaño definido por la cantidad de regiones dada por un mapa.
 Primero se deben de numerar las regiones de dicho mapa, una vez hecho esto se le asigna el máximo valor a la matriz,
 es decir, si el mapa cuenta con 5 regiones, la matriz será de tamaño 5x5. Una vez hecho esto se procede a llenar las
 relaciones, por ejemplo, si la región 1 se encuentra junto a la región 3, entonces dentro de la matriz se deberá
 especificar que en la posición X=1 y Y=3 hay una relación. Esto se puede hacer mediante un numero 1. Esto para cada
 región hasta rellenar todas as relaciones, después de esto ya es posible obtener una solución para rellenar el mapa.
 Dentro del progrma tambien hay un generador de matrices aleatoria, aunque no es recomendado.