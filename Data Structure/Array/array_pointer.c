//下面为数组指针的demo，数组指针为int (*p)[24],指针数组为  int *p[24]

#include <stdio.h>

int a[3][24]={
{11,12,13,14,15,16,17,18,19,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124},
{21,22,23,24,25,26,27,28,29,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224},
{31,32,33,34,35,36,37,38,39,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324},
};

int main(int argc,char ** argv)
{
        int i,j,k,l;

        for (i=0;i<3;i++)
        {
                for(j=0;j<24;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }

//====================== slash =========================

        int (*p)[24];
        p=a;

        for (k=0;k<3;k++)
        {
                for(l=0;l<24;l++)
                {
                        printf("%d ",(*p)[l]);
                }
                p++;
                printf("\n");
        }

}
