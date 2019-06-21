//
// Created by Jiss Xavier on 2019-05-31.
//

#include "matrix.h"
#include <stdio.h>

double determinant(double f[20][20],int x)
{

    double pr,c[20],d=0,newMatrix[20][20];
    int j,p,q,t;
    if(x==2)
    {
        d=0;

        d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
        return(d);

    }
    else
    {
        for(j=1;j<=x;j++)
        {
            int r=1,s=1;
            for(p=1;p<=x;p++)
            {
                for(q=1;q<=x;q++)
                {
                    if(p!=1&&q!=j)
                    {
                        newMatrix[r][s]=f[p][q];
                        s++;
                        if(s>x-1)
                        {
                            r++;
                            s=1;
                        }
                    }
                }
            }
            for(t=1,pr=1;t<=(1+j);t++)
                pr=(-1)*pr;
            c[j]=pr*determinant(newMatrix,x-1);
        }
        for(j=1,d=0;j<=x;j++)
        {
            d=d+(f[1][j]*c[j]);
        }
        return(d);
    }
}
