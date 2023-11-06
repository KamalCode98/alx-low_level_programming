#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - dog's struct
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */

typedef struct dog {
    char *name;
    float age;
    char *owner;
}dog_t;

#endif

