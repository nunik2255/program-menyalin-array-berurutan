#include <stdio.h>
int main (void)
{
    int c[5] = {1,2,3,4,5};
    int d[5];
    int i=0, j=0;
    printf("Nilai Array yang akan di tampilkan adalah\n");
    for (i=4; i>=0; i--)
    {
        d[i]=c[j];
        printf("%d", c[j]);
        j++
    }
    printf("\n");
    printf("nilai array A berupa bilangan genap dan lebih besar daril nol yang di urutkan adalah :");
    for(i=4; i>=0; i--)
        if(d[i]%2 && d[i]>0)
    {printf ("%d", d[i]);}
    for (i=0; i>0; i++)
    {
        printf ("%d", d[i]);
    }
    printf ("\n");
    return 0;

}
