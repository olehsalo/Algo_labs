int i, j, n, k=0;
char word[100];
char sentence1[100];
char sentence2[100];

printf("\nEnter a sentence: ");
fgets(sentence1, 100, stdin);
n=strlen(sentence1);

for(i=0;sentence1[i]!=' ';i++)
{
    word[i]=sentence1[i];
}
for(j=i+1;j<n;j++)
{
    sentence2[k]=sentence1[j];
    k++;
}
if(strstr(sentence2,word) != 0)
{
    printf("word found!\n");
}
else
{
    printf("word not found!\n");
}

return 0;
}
