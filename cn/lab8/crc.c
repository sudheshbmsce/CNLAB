#include<conio.h>
#include<stdio.h>
#include<string.h>
char c[20];
char m[25];
char r[10];
char d[10];
char q[25];
char g[16]="10001000000100001";
char e[16];
char w[16]="00000000000000000";
void codeword();
int main()
{

printf("enter the data\t");


scanf("%s\n",c);
printf("%s\n",g);
printf("%s\n",w);
strcpy(m,c);
for(int i=7;i<23;i++)
{ m[i]='0';
}
printf("modified data is %s",m);
strcpy(q,m);
strcpy(e,g);
codeword();
return 0;
}
void codeword()
{ int j;
    printf("\ndivide operation to get codeword\n");
    for(int i=0;i<(strlen(m)-strlen(g));i++)
    {
        for( j=0;j<16;j++)
        {

            if(j==0)
            {

                if(q[j]==e[j]&&q[j]==1)
                    d[i]='1';
                  else{
                    d[i]='0';
                    strcpy(e,w);
                    }
            }
               if(j!=16)
              {
                  if(m[j]!=e[j])
                  {
                      r[j]='1';


                  }
                  else
                    r[j]='0';

              }
        }
        r[j-1]=m[j];
        strcpy(q,r);
        strcpy(e,g);

    }
    printf("%s",r);
return;
}
