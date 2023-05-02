#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs information
 * @name: pointer to the name string
 * @age: age of the dog
 * @owner: pointer to the owner string
 *
 * Description: structure holding dogd information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
