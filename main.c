#include <stdio.h>
#include <stdlib.h>
void poissonDagilim(int,int);
void binomDagilim(double,double);
int main()
{

    int a,b;
    printf("\tPoisson Dagilimi:\n\nx giriniz:5 \nlambda giriniz:5\n");poissonDagilim(5,5);
    printf("\n\nx giriniz:");
    scanf("%d",&a);
    printf("lambda giriniz: ");
    scanf("%d",&b);
    poissonDagilim(a,b);

    int c,d;
    printf("\n\n\n\tBinom Dagilimi:\n\nn giriniz:2 \t\tx giriniz:1\t\t");
    binomDagilim(1,2);
    printf("\n\nn giriniz:");
    scanf("%d",&d);
    printf("\n\nx giriniz:");
    scanf("%d",&c);
    binomDagilim(c,d);

}

void poissonDagilim(int a,int b)
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


    for(j=1;j<=x;j++)
    {
        toplam3*=j;
    }

    toplam=toplam1/(toplam2*toplam3);
    printf("toplam:%.5f\n\n",toplam);
}

void binomDagilim(double c,double d)
{
    double x=c;
    double n=d;

    float combination;
    float fak(int n);
    combination=fak(n)/(fak(x)*fak(n-x));

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


    int j;
    for(j=0;j<=10;j++)
    {
        toplam2[j]=pow(1-p[j],n-x);
    }
int m;
for(m=0;m<=10;m++)
{
    printf("%.3f\n",combination*toplam1[m]*toplam2[m]);
}
printf("\n\n");

}
 float fak(int n){
    float f;
    f=1;
    int i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
    }
