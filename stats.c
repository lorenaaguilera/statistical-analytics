/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char list[]);
void sort_array(unsigned char list[]);
void print_statistics(unsigned char list[]);
float find_median(unsigned char list[]);
float find_mean(unsigned char list[]);
float find_maximum(unsigned char list[]);
float find_minimum(unsigned char list[]);

void main() {

  unsigned char list[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  print_array(list);
  sort_array(list);
  print_statistics(list);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char list[]) {
	for (int i=0; i<SIZE; i++){ 
		printf("%u, ", list[i]);
	}
}

void sort_array(unsigned char list[]){
	for (int i=0; i<SIZE-1; i++){
		for (int j=0; j < SIZE-i-1; j++){
			if (list[j] < list[j+1]){	
				float temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
}

void print_statistics(unsigned char list[]){
	float finalmedian = find_median(list);
	printf ("\nthis is the median %.3f\n", finalmedian);
	
	float finalmean = find_mean(list);
	printf ("this is the mean %.3f\n", finalmean);
	
	float finalmax = find_maximum(list);
	printf ("this is the maximum %.3f\n", finalmax);
	
	float finalmin = find_minimum(list);
	printf ("this is the minimum %.3f\n", finalmin);
}

float find_median(unsigned char list[]){
	float median, temp1, temp2;

	if (SIZE % 2 == 0){
		temp1 = list[SIZE/2];
		temp2 = list[(SIZE/2)-1];
		median = (temp1+temp2)/(float)2;
	}
	else{
		median = list[SIZE/2];
	}
	
	return median;
}

float find_mean(unsigned char list[]){
	float temp, mean;
	
	for(int i=0; i<SIZE; i++){
		temp += list[i];
	}
	
	mean = temp / SIZE;
	return mean;
}

float find_maximum(unsigned char list[]){
	return list[0];
}

float find_minimum(unsigned char list[]){
	return list[SIZE-1];
}



