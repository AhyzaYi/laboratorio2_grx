#include "lib1.h"
#include "lib_grx.h"


unsigned int tamano (char *dir_buff, unsigned int longitud)
{
	unsigned int len=0, cont = 0;

	for (cont = 0; cont < longitud; cont ++ )
	{
		if(dir_buff[cont] == '\n')
		{
		       len = len+1;
		}
	}
	return len;			

}

void  conversion_double(char *dir_buff, double *arr_num, unsigned int len)
{
	unsigned int cont;
	char *dir_temp;
	dir_temp= dir_buff;
	char *dir_temp2;
        for(cont=0; cont < len; cont++)
        {
		arr_num[cont] = atof(dir_temp);
		dir_temp2 = strchr(dir_temp, '\n');
                dir_temp = dir_temp2 + 1;
		        }
}


void swap (double *a, double *b)
{
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort (double *arr_num, unsigned int len)
{
	int i=0, j=0;
	for (i=0; i < len-1; i++)
	{
		for (j=len-1; j > i; j--)
		{
			if (arr_num[j]<arr_num[j-1])
			{
				swap(&arr_num[j], &arr_num[j-1]);
			}
		}
	}
}

void insertion_sort (double *arr_num, unsigned int len)
{
	int i=0, j=0;
	float key=0;
	for (j=1; j < len; j++)
	{
		i=j-1;
		key=arr_num[j];
		while (i > -1 && arr_num[i] > key)
		{
			arr_num[i+1]=arr_num[i];
			i=i-1;
		}
		arr_num[i+1]=key;
	}
}


