#include <stdio.h>

typedef int liste[100];

void saisie( liste L);
int test(liste L);

void saisie( liste L)
{
    printf("Saisir le nb de valeur:");
    scanf("%d",&L[0]);

    for(i=1;i<=L[0];i++)
    {
        printf("Saisir la valeur L[%d]: ",i);
        scanf("%d",&L[i]);
    }

}

int test(liste L)
{
    nb=0;
    for(i=1;i<=L[0];i++)
    {
        if(L[i]%2!=0&&i%2==0)
        {
            if(nb<L[i])
                {
                    nb=L[i];
                }
            else {nb=-1;}
        }
    }
    return nb;
}


}
int main (void)
{
    liste A;
    int nb_rech;

    saisie(A);


    nb_rech=test(A);


    printf("Retourne %d\n",nb_rech);

    return 0;
}