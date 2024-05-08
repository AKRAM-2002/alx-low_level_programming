#include "search_algos.h"

/*
 * Function: binary_search
 * ------------------------
 * Description: Implements the Binary search algorithm to find a value in a sorted array of integers.
 * 
 * Parameters:
 *   - array: input array
 *   - size: size of the array
 *   - value: value to search for
 * 
 * Returns:
 *   - Always EXIT_SUCCESS
 */


int binary_search(int *array, size_t size, int value){

    


    
    int left = 0;
    int right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right){
        int i, middle;

        middle = (left + right) / 2;
        printf("Searching in array: ");
        for (i = left; i <= right; i++){
            printf("%d", array[i]);
            if (i < right){
                printf(", ");
            }
        }
        printf("\n");
        if (array[middle] == value){
            return middle;
        }
        else if (array[middle] > value){
            right = middle - 1;
        }
        else{
            left = middle + 1;
        }
    }
    return (-1);

}
