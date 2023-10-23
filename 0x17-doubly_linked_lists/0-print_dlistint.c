#include "lists.h"


/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h){

        /* decalre count variable */
	size_t count = 0;
    		
   	while(h){
        
        	
        	printf("%d\n",h->n)
        
       		h = h->next;
		count ++;
        
    }
    
   		return (count);
}
