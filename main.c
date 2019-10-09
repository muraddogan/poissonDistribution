#include <stdio.h>
#include <stdlib.h>
void poisson(int,int);
void binom(double,double);
int main()
{

    int select;
    bas:
    printf("1)Poisson\n2)Binom\n");
    printf("Lutfen Sayi Giriniz...");scanf("%d",&select);
    if(select==1)
    {
        int a,b;
    printf("\t\t\t************Poisson Dagilimi************\n\nx giriniz:5 \t\tlambda giriniz:5\t");poisson(5,5);
    printf("\n\nx giriniz:");
    scanf("%d",&a);
    printf("\nlambda giriniz: ");
    scanf("%d",&b);
    printf("\n");
    poisson(a,b);
    goto bas;
    }
    else if(select==2)
    {
        int c,d;
        printf("\n\n\n\t\t\t************Binom Dagilimi************\n\nn giriniz:2 \t\tx giriniz:1\t\t");
    binom(1,2);
    printf("\n\nn giriniz:");
    scanf("%d",&d);
    printf("\n\nx giriniz:");
    scanf("%d",&c);
    binom(c,d);
    goto bas;
    }
    else{printf("yanlis secim!");goto bas;}

}

void poisson(int a,int b)
{
    int x=a;
    int lmbd=b;
    int i,j;
    float toplam1=0,toplam2=0,toplam3=1,toplam=0;

    toplam1=lmbd;
    for(i=1;i<x;i++)
    {
        toplam1=toplam1*lmbd;

    }

    toplam2=exp(lmbd);

    if(0<=x)
    {
    for(j=1;j<=x;j++)
    {
        toplam3*=j;
    }

    }
    else
    {
        printf("negatif sayi");
    }
    toplam=toplam1/(toplam2*toplam3);
    printf("toplam:%.5f\n\n",toplam);
}

void binom(double c,double d)
{
    double x=c;
    double n=d;

    float com;
    float fak(int n);
    com=fak(n)/(fak(x)*fak(n-x));//kombinasyon hesaplama

    double p[10];
    double toplam1[10];
    double toplam2[10];
    double toplam[10];

    p[0]=0.05;
    p[1]=0.1;
    p[2]=0.2;
    p[3]=0.3;
    p[4]=0.4;
    p[5]=0.5;
    p[6]=0.6;
    p[7]=0.7;
    p[8]=0.8;
    p[9]=0.9;
    p[10]=0.95;

    int i;
    for(i=0;i<=10;i++)
    {
        toplam1[i]=pow(p[i],x);
    }
    printf("\n\n");

    p[0]=0.05;
    p[1]=0.1;
    p[2]=0.2;
    p[3]=0.3;
    p[4]=0.4;
    p[5]=0.5;
    p[6]=0.6;
    p[7]=0.7;
    p[8]=0.8;
    p[9]=0.9;
    p[10]=0.95;

    int j;
    for(j=0;j<=10;j++)
    {
        toplam2[j]=pow(1-p[j],n-x);
    }
int m;
for(m=0;m<=10;m++)
{
    printf("%.3f icin==> C(%.f ,%.f)* (%.3f^%.f)* (1-%.3f)^(%.f-%.f)=%.3f\n",p[m],n,x,p[m],x,p[m],n,x,com*toplam1[m]*toplam2[m]);
}

}
//faktöriyel hesaplama(kombinasyon için)
 float fak(int n){
    float f;
    f=1;
    int i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
    }
