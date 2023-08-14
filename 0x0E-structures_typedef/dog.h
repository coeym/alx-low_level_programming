#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog information
  * @name: The name
  * @age: The age
  * @owner: The owner
  * Description: detailed information of the dog
  */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
