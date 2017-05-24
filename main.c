#include <stdio.h>
#include <stdlib.h>
int secim (int x, int s1, int s2)
{
    int sonuc;
    switch (x)
    {
        case 0: sonuc = topla(s1,s2); break;
        case 1: sonuc = cikar(s1,s2); break;
        case 2: sonuc = carp(s1,s2); break;
        case 3: sonuc = bol(s1,s2); break;
        default:break;
    }
    return sonuc;
}
int topla(int s1, int s2)
{
    int sonuc;
    sonuc = s1 + s2;
    return sonuc;
}
int cikar (int s1, int s2)
{
    int sonuc;
    sonuc = s1 - s2;
    return abs(sonuc);
}
int carp (int s1, int s2)
{
    int sonuc;
    sonuc = s1 * s2;
    return sonuc;
}
int bol (int s1, int s2)
{
    int sonuc;
    sonuc = s1 / s2;
    return sonuc;
}
int main()
{
    int menu;
    bastan:
    printf("1. Bolum icin 1'e basin! || 2. Bolum icin 2'ye basin!  : ");
    scanf("%d",&menu);
    printf("\n");
    if (menu == 1)
    {
    int random1, i;
    srand(time(NULL));
    int ran1[6];
    ran1[5] = 10+rand()%90;
    for (i=0;i<5;i++)
    {
        random1 = 1+rand()%8;
        ran1[i] = random1;
    }
    printf("Kullanabileceginiz random sayilar\n");
    for (i=0;i<6;i++)
    {
        printf("%d",ran1[i]);
        if (i != 5)
            printf("-");
    }
    int random2 = 4+rand()%2;
    printf("\nHedef sayiya ulasmak icin secilecek eleman sayisi: %d\n",random2);
    printf("Hedef sayiyi olusturmak icin secilen sayilar\n");
    int r1, r2;
    int ran2[random2];
    if (random2 == 4)
    {
        r1 = rand()%6;
        g1:
        r2 = rand()%6;
        if (r1 == r2)
            goto g1;
        int j = 0;
        for (i=0;i<4;i++)
        {
            if (j == r1 || j == r2)
                j++;
            ran2[i] = ran1[j];
            j++;
        }
    }
    else if(random2 == 5)
    {
        r1 = rand()%6;
        int j = 0;
        for (i=0;i<5;i++)
        {
            if (j == r1)
                j++;
            ran2[i] = ran1[j];
            j++;
        }
    }
    else
    {
        for (i=0;i<6;i++)
            ran2[i] = ran1[i];
    }
    for (i=0;i<random2;i++)
    {
        printf("%d",ran2[i]);
        if (i != random2-1)
            printf("-");
    }
    printf("\n");
    // 0=toplama || 1=cikarma || 2=carpma || 3=bolme //
    int s1, s2, s3, s4, rd1, rd2, islem;
    if (random2 == 4)
    {
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i]=ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i]=ran2[i+1];
        }
        bolme:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[2] = s3;
        rd1 = rand()%3;
        s1 = ran2[rd1];
        for (i=0;i<3;i++)
        {
            if (i>=rd1)
                ran2[i]=ran2[i+1];
        }
        rd2 = rand()%2;
        s2 = ran2[rd2];
        for (i=0;i<2;i++)
        {
            if (i>=rd2)
                ran2[i]=ran2[i+1];
        }
        bolme2:
        islem = rand()%4;
        if (islem == 3)
        {
            if(s1%s2 != 0)
                goto bolme2;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        s4 = ran2[0];
        bolme3:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s3%s4 != 0)
                goto bolme3;
        }
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,secim(islem,s3,s4));
    }
    if (random2 == 5)
    {
        rd1 = rand()%5;
        s1 = ran2[rd1];
        for (i=0;i<5;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%4;
        s2 = ran2[rd2];
        for (i=0;i<4;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme4:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme4;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[3] = s3;
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme5:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme5;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[2] = s3;
        rd1 = rand()%3;
        s1 = ran2[rd1];
        for (i=0;i<3;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%2;
        s2 = ran2[rd2];
        for (i=0;i<2;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme6:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme6;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        s4 = ran2[0];
        bolme7:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme7;
        }
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,secim(islem,s3,s4));
    }
    if (random2 == 6)
    {
        rd1 = rand()%6;
        s1 = ran2[rd1];
        for (i=0;i<6;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%5;
        s2 = ran2[rd2];
        for (i=0;i<5;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme8:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme8;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[4] = s3;
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme9:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme9;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[3] = s3;
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme10:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme10;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        ran2[2] = s3;
        rd1 = rand()%3;
        s1 = ran2[rd1];
        for (i=0;i<3;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%2;
        s2 = ran2[rd2];
        for (i=0;i<2;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolum11:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolum11;
        }
        s3 = secim(islem,s1,s2);
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,s3);
        s4 = ran2[0];
        bolum12:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s3%s4 != 0)
                goto bolum12;
        }
        printf("Kullanilan islem kodu = %d = ve elde edilen sonuc: (%d)\n",islem,secim(islem,s3,s4));

    }
    }
    else if (menu == 2)
    {
        srand(time(NULL));
        int random_sayi,i;
        int ran1[6];
        for (i=0;i<5;i++)
        {
            random_sayi = 1+rand()%8;
            ran1[i] = random_sayi;
        }
        ran1[5] = 10+rand()%90;
        printf("Kullanabileceginiz sayilar: ");
        for (i=0;i<6;i++)
        {
            printf("%d",ran1[i]);
            if (i != 5)
                printf("-");
        }
        int ran2[6];
        for (i=0;i<6;i++)
            ran2[i] = ran1[i];
        printf("\n");
        int rd1, rd2,s1, s2, s3, s4, islem, hedef;
        //Bilgisayar Islemleri
            rd1 = rand()%6;
        s1 = ran2[rd1];
        for (i=0;i<6;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%5;
        s2 = ran2[rd2];
        for (i=0;i<5;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme18:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme18;
        }
        s3 = secim(islem,s1,s2);
        ran2[4] = s3;
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme19:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme19;
        }
        s3 = secim(islem,s1,s2);
        ran2[3] = s3;
        rd1 = rand()%4;
        s1 = ran2[rd1];
        for (i=0;i<4;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%3;
        s2 = ran2[rd2];
        for (i=0;i<3;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolme110:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolme110;
        }
        s3 = secim(islem,s1,s2);
        ran2[2] = s3;
        rd1 = rand()%3;
        s1 = ran2[rd1];
        for (i=0;i<3;i++)
        {
            if (i>=rd1)
                ran2[i] = ran2[i+1];
        }
        rd2 = rand()%2;
        s2 = ran2[rd2];
        for (i=0;i<2;i++)
        {
            if (i>=rd2)
                ran2[i] = ran2[i+1];
        }
        bolum111:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s1%s2 != 0)
                goto bolum111;
        }
        s3 = secim(islem,s1,s2);
        s4 = ran2[0];
        bolum112:
        islem = rand()%4;
        if (islem == 3)
        {
            if (s3%s4 != 0)
                goto bolum112;
        }
        hedef = secim(islem,s3,s4);
        //


        int sayi1, sayi2, sonuc, islem2, ctrl=0, index;
        printf("Islemler: 0-Toplama || 1-Cikarma || 2-Carpma || 3-Bolme\n");
        printf("Lutfen islem 3 icin kalansiz sayilar secin yoksa sayi secimine geri doneceksiniz!!!\n");
        printf("Ulasmaniz gereken sayi: %d\n",hedef);
        printf("Sayi girin: ");
        scanf("%d",&sayi1);
        for (i=0;i<6;i++)
        {
            if (ran1[i] == sayi1)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi1);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<6;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        printf("Sayi girin: ");
        scanf("%d",&sayi2);
        for (i=0;i<5;i++)
        {
            if (ran1[i] == sayi2)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi2);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<5;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        islembastan1:
        printf("Islem kodunu giriniz(0-1-2-3): ");
        scanf("%d",&islem2);
        if (islem == 3)
        {
            if (sayi1%sayi2 != 0)
                goto islembastan1;
        }
        sonuc = secim(islem2,sayi1,sayi2);
        printf("Islem Sonucu: %d",sonuc);
        ran1[4] = sonuc;
        printf("\nKullanabileceginiz sayilar: ");
        for(i=0;i<5;i++)
        {
            printf("%d",ran1[i]);
            if (i != 4)
                printf("-");
        }
        printf("\nSayi girin: ");
        scanf("%d",&sayi1);
        for (i=0;i<5;i++)
        {
            if (ran1[i] == sayi1)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi1);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<5;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        printf("Sayi girin: ");
        scanf("%d",&sayi2);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi2)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi2);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        islembastan2:
        printf("Islem kodunu giriniz(0-1-2-3): ");
        scanf("%d",&islem2);
        if (islem == 3)
        {
            if (sayi1%sayi2 != 0)
                goto islembastan2;
        }
        sonuc = secim(islem2,sayi1,sayi2);
        printf("Islem Sonucu: %d",sonuc);
        ran1[3] = sonuc;
        printf("\nKullanabileceginiz sayilar: ");
        for(i=0;i<4;i++)
        {
            printf("%d",ran1[i]);
            if (i != 3)
                printf("-");
        }
        printf("\nSayi girin: ");
        scanf("%d",&sayi1);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi1)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi1);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        printf("Sayi girin: ");
        scanf("%d",&sayi2);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi2)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi2);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        islembastan3:
        printf("Islem kodunu giriniz(0-1-2-3): ");
        scanf("%d",&islem2);
        if (islem == 3)
        {
            if (sayi1%sayi2 != 0)
                goto islembastan3;
        }
        sonuc = secim(islem2,sayi1,sayi2);
        printf("Islem Sonucu: %d",sonuc);
        ran1[2] = sonuc;
        printf("\nKullanabileceginiz sayilar: ");
        for(i=0;i<3;i++)
        {
            printf("%d",ran1[i]);
            if (i != 2)
                printf("-");
        }
        printf("\nSayi girin: ");
        scanf("%d",&sayi1);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi1)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi1);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        printf("Sayi girin: ");
        scanf("%d",&sayi2);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi2)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi2);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        islembastan4:
        printf("Islem kodunu giriniz(0-1-2-3): ");
        scanf("%d",&islem2);
        if (islem == 3)
        {
            if (sayi1%sayi2 != 0)
                goto islembastan4;
        }
        sonuc = secim(islem2,sayi1,sayi2);
        printf("Islem Sonucu: %d",sonuc);
        ran1[1] = sonuc;
        printf("\nKullanabileceginiz sayilar: ");
        for(i=0;i<2;i++)
        {
            printf("%d",ran1[i]);
            if (i != 1)
                printf("-");
        }
        printf("\nSayi girin: ");
        scanf("%d",&sayi1);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi1)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi1);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        printf("Sayi girin: ");
        scanf("%d",&sayi2);
        for (i=0;i<4;i++)
        {
            if (ran1[i] == sayi2)
            {
                ctrl=1;
                index = i;
                break;
            }
        }
        if (ctrl == 0)
        {
            printf("%d sayisini kullanamazsiniz!!!",sayi2);
            return 0;
        }
        ctrl = 0;
        for (i=0;i<4;i++)
        {
            if (i >= index)
                ran1[i] = ran1[i+1];
        }
        islembastan5:
        printf("Islem kodunu giriniz(0-1-2-3): ");
        scanf("%d",&islem2);
        if (islem == 3)
        {
            if (sayi1%sayi2 != 0)
                goto islembastan5;
        }
        sonuc = secim(islem2,sayi1,sayi2);
        printf("Islem Sonucu: %d",sonuc);
        if (sonuc == hedef)
            printf("\nTebrikler! %d dogru cevap | 10 puan",sonuc);
        else
            printf("\nMaalesef! %d yanlis cevap | 0 puan",sonuc);


    }
    else
    {
        printf("Lutfen dogru bir secim yapiniz!\n");
        goto bastan;
    }
    return 0;
}
