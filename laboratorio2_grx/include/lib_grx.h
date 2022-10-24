#ifndef LIB_GRX_H
#define LIB_GRX_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//Declaración funciones

unsigned int tamano (char *dir_buff, unsigned int longitud);

void conversion_double (char *dir_buff, double *arr_num, unsigned int len);

void bubble_sort (double *arr_num, unsigned int longitud);

void insertion_sort(double *arr_num, unsigned int longitud);

void swap (double *a, double *b);

#endif

