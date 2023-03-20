#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic info on a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A collection of info on a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct doginfo
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
