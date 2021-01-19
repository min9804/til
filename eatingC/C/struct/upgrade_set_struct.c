#include <stdio.h>
struct test 
{
	int age;
	int gender;
	char name[20];
};

int set_human(struct test *a, int age, int gerder, const char *name);
char copy_str(char *dest, const char *src);

int main()
{
	struct test human;

	set_human(&human, 10, 1, "Lee");

	printf("age : %d // gender : %d // name : %s \n", human.age, 
			human.gender, human.name);
	return 0;
}

int set_human(struct test *a, int age, int gender, const char *name)
{
	a->age = age;
	a->gender = gender;
	copy_str(a->name, name);

	return 0;
}
char copy_str(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return 1;
}

