#include "search_algos.h"

/*
 * Function: linear_search
 * ------------------------
 * Description: Implements the Linear search algorithm to find a value in an array of integers.
 * 
 * Parameters:
 *   - array: input array
 *   - size: size of the array
 *   - value: value to search for
 * 
 * Returns:
 *   - Always EXIT_SUCCESS
 */


int linear_search(int *array, size_t size, int value){

    int i;
    for(i = 0; i < (int)size; i++){
        printf("Value Checked array[%u] = %d\n", i, array[i]);
        if(array[i] == value){
            return i;
        }
    }
    return -1;
}

