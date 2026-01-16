#include <stdio.h>
int ogr_sayi = 0;
int toplam;
int ort;
typedef struct ogrenciler
{
    char isim[30];
    int not;
    int okulno;
}ogr;
ogr o[10];

int ogr_gir()
{
    printf("Write Students Name:");
    scanf("\n");
    fgets(o[ogr_sayi].isim,30,stdin);
    //scanf("%s",&o[ogr_sayi].isim);
    //printf("%s",o.isim);
    printf("Write Students School No:");
    scanf("%d",&o[ogr_sayi].okulno);
    printf("Write Students Grade:");
    scanf("%d",&o[ogr_sayi].not);
    ogr_sayi++;
    printf("-Process Completed. Returning to Main Menu-\n");
    menu();
}
int ogr_gor()
{
    int n;
    printf("Write the number of the student you want to see:");
    scanf("%d",&n);
    printf("Name: %sNo: %d\nGrade: %d\n",o[n-1].isim,o[n-1].okulno,o[n-1].not);
    menu();
}
int ort_hesap()
{

    for (int i = 0; i < ogr_sayi; i++)
    {
        toplam = toplam + o[i].not;
    }
    ort = toplam/ogr_sayi;
    printf("Class's Average: %d\n",ort);
    menu();
}
int tum_ogr()
{
    for (int i = 0; i < ogr_sayi; i++)
    {
        printf("-%d. Student-\nName: %sNo: %d\nGrade: %d\n",i+1,o[i].isim,o[i].okulno,o[i].not);
    }
    menu();
}
void menu()
{
    int menusecim;
    printf("\n1- Sign a new student\n");
    printf("2- View a student\n");
    printf("3- View all students\n");
    printf("4- Calculate class's average\n");
    printf("5- Exit\n");
    printf("Select a interaction:");
    scanf("%d",&menusecim);
    switch (menusecim)
    {
    case 1:
        ogr_gir();
        break;

    case 2:
        ogr_gor();
        break;

    case 3:
        tum_ogr();
        break;

    case 4:
        ort_hesap();
        break;
    
    case 5:

        break;

    default:
        break;
    }
}
int main()
{
    menu();
    return 0;
}