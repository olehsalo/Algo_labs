#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[20];
	char birthdate[20];
	char adress[20];
	int rate;


};

int save(char * filename, struct student *st, int n);
int load(char * filename);

int main()
{
	char * filename1 = "students1";
	char * filename2 = "students2";
	struct student students1[500];
	struct student students2[500];
	struct student stud1;
	int n, i, j, k=0;
	printf("enter the number of students:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf( "student %d\nFull", i+1);
      fgets(stud1.name, 20, stdin);
      printf( "name :");
      fgets(stud1.name, 20, stdin);
      printf("\n");
      printf( "Birthdate :");
      fgets(stud1.birthdate, 20, stdin);
      printf("\n");
      printf( "Adress :");
      fgets(stud1.adress, 20, stdin);
      printf("\n");
      printf( "Rate :");
      scanf("%d",&stud1.rate);
      printf("\n");
      students1[i]=stud1;
   }
   printf("File 1:\n");
	save(filename1, students1, n);
   load(filename1);
   printf("\n");
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(i!=j)
   		{
   		   if(strcmp(students1[i].birthdate,students1[j].birthdate)!=0)
   		   {
   			   students2[k]=students1[i];
   			   k++;
   		   }
   		}
   	}
   }
   printf("File 2:\n");
	save(filename2, students2, k);
   load(filename2);
   printf("\n");
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
