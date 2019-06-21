#include<stdio.h>
#include "matrix.h"

    typedef struct MATRIX{
    double Matrix[20][20];
}Matrix;

double orginalMatrix[20][20];
int order;
double determinant(double f[20][20],int a);

int main(int argc, char** argv)
{
    FILE *myFile;
    char* fileName = argv[1];
    myFile = fopen(fileName, "r");

    //read file into array

    fscanf(myFile, "%d", &order);
    fscanf(myFile, "%d", &order);

    for (int i = 1; i <= order; i++)
    {
        for (int j = 1; j <= order; j++){
            fscanf(myFile, "%lf", &orginalMatrix[i][j]);
        }
    }
    printf("The determinant is %.2lf.",determinant(orginalMatrix,order));

}

