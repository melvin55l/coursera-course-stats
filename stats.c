//**
// * @file	<stats.c> 
// * @brief	<Add Brief Description Here >
// *
// *		<Add Extended Description Here>
// *
// * @author	<Xiu Kai Lim>
// * @date	<6/6/2021 >
// *
//*/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

   unsigned char test[SIZE] = {  34, 201, 190, 154,   8, 194,   2,   6,
	                        114,  88,  45,  76, 123,  87,  25,  23,
		   	        200, 122, 150,  90,  92,  87, 177, 244,
			        201,   6,  12,  60,   8,   2,   5,  67,
			          7,  87, 250, 230,  99,   3, 100,  90};

   /* Other Variable Declarations Go Here */
   unsigned char max, min;
   double mean, median;

   /* Statistics and Printing Functions Go Here */
   printf("Array before sorting is :\n");
   print_array(test, SIZE);
   printf("\nArray after sorting is :\n");
   sort_array(test, SIZE);
   print_array(test, SIZE);
   max = find_maximum(test, SIZE);
   min = find_minimum(test, SIZE);
   mean = find_mean(test, SIZE);
   median = find_median(test, SIZE);
   print_statistics(max, min, mean, median);
}

void print_statistics( unsigned char max, unsigned char min, double mean, double median) {

   printf("\nMax value of array is %d\n",max);
   printf("Min value of array is %d\n",min);
   printf("Mean value of array is %.2f\n",mean);
   printf("Median value of array is %.2f\n",median);
   return;
}

void print_array(unsigned char * array, int len) {

    // printf("Array before sorting: \n");
    for(int i=0; i<len; i++){
       printf("%d ", array[i]);
    }
    return;
}

double find_median(unsigned char * array, int len){
    
    double temp = 0;
    temp = (double)(array[len/2]+array[len/2-1])/2;
    return temp;
}

double find_mean(unsigned char * array, int len){
    
    double temp = array[0];
    for(int i=1; i<len; i++){
    	temp += array[i];
    }
    temp /= len;
    return temp;
}

unsigned char find_maximum(unsigned char * array, int len) {

    int temp = array[0];
    for(int i=1; i<len; i++){
        if(array[i]>temp){
            temp = array[i];
        }
    }
    return temp;

}

unsigned char find_minimum(unsigned char * array, int len) {

    int temp = array[0];
    for(int i=1; i<len; i++){
        if(array[i]<temp){
            temp = array[i];
        }
    }
    return temp;

}

void sort_array(unsigned char * array, int len) {

    int temp = 0;
    for(int i=0; i<len; i++){		// first element until last element 
	for(int j=i+1; j<len; j++){	// second element until last element
	    if(array[i]<array[j]){	// compare which element is larger
	       temp = array[j];	
	       array[j] = array[i];
	       array[i] = temp;		// put in descending order
            }
	}
    }
}


/* Add other Implementation File Code Here */

