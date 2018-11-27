#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[20];
	char birthdate[20];
	char adress[20];
	int rate;


};

int save(char * filename, struct student *st, int n);
int load(char * filename);

int main(void)
{
	char * filename = "students.dat";
	struct student students[] = { {"Tom", "28ma.04.2001", "fredra street", 99},{ "Alice","15.05.2001","fredra street", 82},{ "Bob","25.09.2001","fredra street", 89}, {"Kate","25.09.2001" ,"fredra street",78} };
	int n = sizeof(students) / sizeof(students[0]);

	save(filename, students, n);
	load(filename);
	return 0;
}
int save(char * filename, struct student * st, int n)
{
	FILE * fp;
	char *c;

	int size = n * sizeof(struct student);

	if ((fp = fopen(filename, "wb")) == NULL)
	{
		perror("Error occured while opening file");
		return 1;
	}
	c = (char *)&n;
	for (int i = 0; i<sizeof(int); i++)
	{
		putc(*c++, fp);
	}

	c = (char *)st;
	for (int i = 0; i < size; i++)
	{
		putc(*c, fp);
		c++;
	}
	fclose(fp);
	return 0;
}

int load(char * filename)
{
	FILE * fp;
	char *c;
	int m = sizeof(int);
	int n, i;

	int *pti = (int *)malloc(m);

	if ((fp = fopen(filename, "r")) == NULL)
	{
		perror("Error occured while opening file");
		return 1;
	}
	c = (char *)pti;
	while (m>0)
	{
		i = getc(fp);
		if (i == EOF) break;
		*c = i;
		c++;
		m--;
	}
	n = *pti;

	struct student * ptr = (struct student *) malloc(n * sizeof(struct student));
	c = (char *)ptr;
	while ((i= getc(fp))!=EOF)
	{
		*c = i;
		c++;
	}
	printf("\n%d people in the file stored\n\n", n);

	for (int k = 0; k<n; k++)
	{
		printf("%d   %s   %s   %s   %d \n", k + 1, (ptr + k)->name, (ptr + k)->birthdate, (ptr + k)->adress, (ptr + k)->rate);
	}

	free(pti);
	free(ptr);
	fclose(fp);
	return 0;
}
