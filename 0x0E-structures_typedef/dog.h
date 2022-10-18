#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct used to hold information about a dog 
 * @name: name of the dog 
 * @age: age of the dog
 * @owner: stores details of the dog's owner
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

#endif
