#include<stdio.h>
#include<string.h>
#include<string>
int ZH(char str[])
{
    if(strcmp("��",str)==0)
		return 0;
    if(strcmp("һ",str)==0)
		return 1;
    if(strcmp("��",str)==0)
		return 2;
    if(strcmp("��",str)==0)
		return 3;
    if(strcmp("��",str)==0)
		return 4;
    if(strcmp("��",str)==0)
		return 5;
    if(strcmp("��",str)==0)
		return 6;
    if(strcmp("��",str)==0)
		return 7;
    if(strcmp("��",str)==0)
		return 8;
    if(strcmp("��",str)==0)
		return 9;
    if(strcmp("ʮ",str)==0)
		return 10;
}
int ZH(char a[10])
{
        if(strcmp(a,b)==0)
        {   k=10;   }
        else if(strcmp(a,c)==0)
        {   k=9;    }
        else if(strcmp(a,d)==0)
        {   k=8;    }
        else if(strcmp(a,e)==0)
        {   k=7;    }
        else if(strcmp(a,f)==0)
        {   k=6;    }
        else if(strcmp(a,g)==0)
        {   k=5;    }
        else if(strcmp(a,h)==0)
        {   k=4;    }
        else if(strcmp(a,i)==0)
        {   k=3;    }
        else if(strcmp(a,j)==0)
        {   k=2;    }
        else if(strcmp(a,m)==0)
        {   k=1;    }
        else if(strcmp(a,n)==0)
        {   k=0;}
        else
            printf("k:NULL\n");
        return k;
}
int main()
{
int sum=0;
char a[20],b[20],c[20],d[20],ad[20],l[20],x[20],fir[20],num[20];
char q[20],w[20],e[20],r[20],t[20],y[20],u[20],i[20],o[20];
scanf("%s %s %s %s",a,b,c,d);
if(strcmp(c,"����")==0)
sum=change(d);

while(3)
{
scanf("%s",fir);
if(strcmp(fir,b)==0)
{
scanf("%s",ad);
if(strcmp(ad,"����")==0)
{
scanf("%s",num);
sum=sum+change(num);
}
if(strcmp(ad,"����")==0)
{
scanf("%s",num);
sum=sum-change(num);
}
}
if(strcmp(fir,"����")==0)
{
scanf("%s",l);

}
if(strcmp(fir,"���")==0)
{
scanf("%s %s %s %s %s %s %s %s %s",q,w,e,r,t,y,u,i,o);
if(sum > 8)
{dx(sum);printf("\n%s",y);}
else
{
	printf("%s",o);break;
}
}
}
}

