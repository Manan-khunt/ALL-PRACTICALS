//Programer : MANAN KHUNT
#include <stdio.h>
#include <string.h>
void main()
{
    char name[5][10],t[10] ;
    int n, i, j ;

    printf("Enter number of student :");
    scanf("%d", &n);

    for(i=0; i<n ; i++)
    {
        scanf("%s", name[i]);
        fflush(stdin);
    }

    for(i=0; i<(n-1) ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(strcmp(name[i], name[j])>0)
            {
                strcpy(t, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], t);
            }

        }
    }

    for(i=0 ; i<n ; i++)
    {
        printf("%s\n", name[i]);
    }

}
