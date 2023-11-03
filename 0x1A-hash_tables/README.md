# Hash Tables Project

Welcome to the Hash Tables project! This project aims to help you understand and implement hash tables in the C programming language. You'll be working with hash functions, data structures, and various operations associated with hash tables.

## Introduction

In this project, you will be working with hash tables to store key-value pairs. Hash tables are a fundamental data structure in computer science and are used to efficiently store and retrieve data based on a key.

This project covers the following key aspects:
- Understanding the basics of hash tables, hash functions, and collision resolution methods.
- Implementing a set of functions to create, manipulate, and manage hash tables.

## Project Details

### Learning Objectives

By the end of this project, you will be able to explain the following concepts without the help of external resources:

**General:**
- What is a hash function?
- What makes a good hash function?
- What is a hash table, how do they work, and how to use them?
- What is a collision and what are the main ways to deal with collisions in the context of a hash table?
- What are the advantages and drawbacks of using hash tables?
- What are the most common use cases of hash tables?

**Requirements:**
- Allowed text editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Your code should follow the Betty coding style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `hash_tables.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### Data Structures

For this project, you will use the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

### Project Tasks
The project consists of the following tasks:

1. 0x1A. C - Hash tables
Create a function that creates a hash table.
2. djb2
Implement a hash function using the djb2 algorithm.
3. key -> index
Create a function that gives you the index of a key in the hash table.
4. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.
5. >>> ht['betty']
Implement a function that retrieves a value associated with a key.
6. >>> print(ht)
Write a function that prints the hash table.
7. $ht['Betty'] = 'Cool'
Implement a sorted hash table with the ability to print and manipulate sorted key-value pairs.

For details on how to implement each task, please refer to the respective source code files provided in the GitHub repositor
