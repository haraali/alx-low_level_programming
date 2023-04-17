#ifndef DOG
#define DOG
/**
 * struct dog - dog details
 * @name: input value
 * @age: input value
 * @owner: input value
 * Description: details of a certain dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the stuct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float *age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
