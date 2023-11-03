#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size){

    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));

    if (table == NULL)
        return NULL;


    table->size = size;
    table->array = (hash_node_s*) calloc(table->size,sizeof(hash_node_s))
    if(table->array == NULL)
        return NULL;

    for(i = 0; i < table->size; i++){
        table->array[i]= NULL;
    }


    return (table);
}

