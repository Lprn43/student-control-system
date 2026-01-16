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
    printf("Isim gir:");
    scanf("\n");
    fgets(o[ogr_sayi].isim,30,stdin);
    //scanf("%s",&o[ogr_sayi].isim);
    //printf("%s",o.isim);
    printf("Okul No Gir:");
    scanf("%d",&o[ogr_sayi].okulno);
    printf("Not Gir:");
    scanf("%d",&o[ogr_sayi].not);
    ogr_sayi++;
    printf("-Islem Tamamlandi Menuye Donuluyor-\n");
    menu();
}
int ogr_gor()
{
    int n;
    printf("Gormek Istediginiz Ogrencinin Sirasini Seciniz:");
    scanf("%d",&n);
    printf("Isim: %sNo: %d\nNot: %d\n",o[n-1].isim,o[n-1].okulno,o[n-1].not);
    menu();
}
int ort_hesap()
{

    for (int i = 0; i < ogr_sayi; i++)
    {
        toplam = toplam + o[i].not;
    }
    ort = toplam/ogr_sayi;
    printf("Sinif ortalamasi: %d\n",ort);
    menu();
}
int tum_ogr()
{
    for (int i = 0; i < ogr_sayi; i++)
    {
        printf("-%d. Ogrenci-\nIsim: %sNo: %d\nNot: %d\n",i+1,o[i].isim,o[i].okulno,o[i].not);
    }
    menu();
}
void menu()
{
    int menusecim;
    printf("1- Ogrenci Gir\n");
    printf("2- Bir Ogrenciyi Goruntule\n");
    printf("3- Tum Ogrencileri Goruntule\n");
    printf("4- Ortalamayi Hesapla\n");
    printf("5- Cikis\n");
    printf("Islem Seciniz:");
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