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
 * @file <stats.h> 
 * @brief <Add Brief Description Here >
 * 
 * <Add Extended Description Here>
 * 
 * @author <Xiu Kai Lim>
 * @date <6/6/2-21>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief <Add Brief Description of Function Here>
 *  
 * <Add Extended Description Here>
 * 
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * 
 * @return <Add Return Informaiton here>
 */

unsigned char find_maximum(unsigned char * array, int len);
unsigned char find_minimum(unsigned char * array, int len);
double find_mean(unsigned char * array, int len);
double find_median(unsigned char * array, int len);
void print_array(unsigned char * array, int len);
void sort_array(unsigned char * array, int len);
void print_statistics( unsigned char max, unsigned char min, double mean, double median);


#endif /* __STATS_H__ */

