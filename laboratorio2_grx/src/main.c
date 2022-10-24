
#include "lib_grx.h"
#include "lib1.h"

int main (int argc,char *argv[])
{

	char *dir_buff, b;
	unsigned int longitud;
	int len;	
	clock_t tiempo_inicio, tiempo_fin;
        double tiempo_usado = 0;
        

	//Validación de argumentos
	if (argc !=4)
        {
                printf("\nError en la cantidad de argumentos");
        	exit(1);
        }

	//Invocación de funciones
	dir_buff = read_file_to_buffer(argv[2], &longitud); //función que lee el archivo
	
	//Inicio tiempo uno
	tiempo_inicio = clock();
	
	len = tamano(dir_buff, longitud);                   //funcion que arroja el tamañano para arr_num
	
	double arr_num[len];  
	
	conversion_double(dir_buff, arr_num, len);              //función que convierte la direccion a double
	
	
	//Fin tiempo uno
	tiempo_fin = clock();

	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
	printf ("El tiempo de ejecución 1 del programa es: %f\n", tiempo_usado);

        
	//Se selecciona el tipo de función de ordenamiento
	
	int selector = atoi(argv[1]); 
	if (selector==1)                                      
	{	
		//Inicio tiempo dos para insertion_sort
		tiempo_inicio = clock(); 
		insertion_sort(arr_num, len);
		//Fin tiempo dos para insertion_sort
		tiempo_fin = clock();
	}
	else if(selector==2)
	{	
		//Inicio tiempo dos para bubble_sort
		tiempo_inicio = clock();
		bubble_sort(arr_num, len);
		//Fin tiempo dos para bubble_sort
		tiempo_fin = clock();
      	}
	
	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
	printf ("El tiempo de ejecución 2 del programa es: %f\n", tiempo_usado);

	//Inicio tiempo tres 
	tiempo_inicio = clock();
	write_dArray_to_file(arr_num, len, argv[3]);
	//Fin tiempo tres
	tiempo_fin = clock();

	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
        printf ("El tiempo de ejecución 3 del programa es: %f\n", tiempo_usado);

	free_buffer_mem(dir_buff);

	return 0;

}



