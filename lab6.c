#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[255];
    int i, k, j=0, x=0;
    printf("enter a sentence:");
    fgets(sentence, 255, stdin);
    for(i=0;i<255;i++)
    {
        if(sentence[i]==' ')
        {
            j=i;
            break;
        }
    }
    for(i=0;i<j;i++)
    {
        for(k=j;k<255;k++)
        {
            if(sentence[i]==sentence[k])
            {
                if(i==(j-1))
                {
                    x=1;
                    printf("identical word found!\n");
                    i+=100;
                    break;
                }
            }
        }
    }
    if(x==0)
    {
        printf("identical word not found!\n");
    }
    return 0;
}
