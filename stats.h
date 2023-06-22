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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/*
 * @brief Prints the mean, median, max, and min of the list
 * 
 * This function takes a unsigned char array input. 
 * Functions find_median, find_mean, find_maximum, and find_minimum
 * are called, passed the array and saves their result to a float
 * so it can then be printed. 
 * 
 * @param list the unsigned char array to be passed into the called functions
*/
void print_statistics();


/*
 * @brief Prints the complete unsigned char array
 * 
 * This function takes a unsigned char array input.
 * The function then prints all of the elements using a forloop to iterate
 * though every element.
 * 
 * @param list the unsigned char array to be printed
*/
void print_array();


/*
 * @brief Determines the median of an even or odd sorted unsigned char array
 * 
 * This function takes a unsigned char array input.
 * Using an if else statement, the function determines if the array length
 * is even or odd. If the array is even, it stores both of the middle
 * elements in temporary float variables, adds them, and divides them by two 
 * in order to determine the median. If the array is odd, the median is the 
 * middle element of the list.
 * 
 * @param list the unsigned char array to calculate the median from
 * @return the float number determined to be the median
*/
float find_median();


/*
 * @brief Calculates the mean of a sorted unsigned char array
 * 
 * This function takes a unsigned char array input.
 * Using a forloop, the function adds every element in the array storing the 
 * result in a temporary float variable. The result is then divided by the 
 * total number of elements in the array resulting in the mean.
 * 
 * @param list the unsigned char array to calculate the mean from
 * @return the float number determined to be the mean
*/
float find_mean();


/*
 * @brief Determines the maximum of a sorted unsigned char array
 * 
 * This function takes a unsigned char array input.
 * After the array has been sorted, the maximum element is the first
 * element of the list.
 * 
 * @param list the unsigned char array to search for the maximum
 * @return The last element of the array
*/
float find_maximum();


/*
 * @brief Determines the minimum of a sorted unsigned char array
 * 
 * This function takes a unsigned char array input.
 * After the array has been sorted, the minimum element is the last
 * element of the list.
 * 
 * @param list the unsigned char array to search for the minimum
 * @return The first element of the array
*/
float find_minimum();


/*
 * @brief Sorts the elements of a un-sorted unsigned char array
 * 
 * This function takes a unsigned char array input.
 * Using the bubble sort algorithm, the neighboring elements of the
 * list are compared and sorted as many times as there are elements
 * leading to sorting the entire list from greatest to smallest.
 * 
 * @param list the unsigned char array to be sorted 
*/
void sort_array();

#endif /* __STATS_H__ */
