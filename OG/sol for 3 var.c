#include<stdio.h>
int main()
{
	printf("Finding solution for 3 variables \n");
	char* alpha[]={"a","b","c","d"};
	double coeff[3][4];
	int i , j ;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%s : ", alpha[j]);
            scanf("%lf", &coeff[i][j]);
        }
    }
    printf("\n");
    printf("%.0lf x + %.0lf y + %.0lf z = %.0lf\n", coeff[0][0],coeff[0][1],coeff[0][2],coeff[0][3]);    
	printf("%.0lf x + %.0lf y + %.0lf z = %.0lf\n", coeff[1][0],coeff[1][1],coeff[1][2],coeff[1][3]);
	printf("%.0lf x + %.0lf y + %.0lf z = %.0lf\n", coeff[2][0],coeff[2][1],coeff[2][2],coeff[2][3]);
	printf("The coefficient matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.0lf   ", coeff[i][j]);
        }
        printf("\n \n");
    }
    printf("\n");
    //making the 1st coeff to 1
    if (coeff[0][0]!=0)
    {
    	double divisor = coeff[0][0];
        printf("R1 / %.0lf \n\n", divisor);
        for (i = 0; i < 4; i++)
        {
            coeff[0][i] = coeff[0][i] / divisor;
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    //making 2nd row 1st col 0
	if(coeff[1][0]!=0)
	{
		printf("( R2 / %.2lf ) - R1 \n \n", coeff[1][0]);
		double divisor = coeff[1][0];
		for (i = 0; i < 4; i++)
        {
            coeff[1][i] = coeff[1][i] / divisor;
            coeff[1][i] = coeff[1][i] - coeff[0][i];
        }
	}
	for (i = 0; i < 3; i++)    //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
    //making 3rd row 1st col 0
	if(coeff[2][0]!=0)
	{
		printf("( R3 / %.2lf ) - R1 \n \n", coeff[2][0]);
		double divisor = coeff[2][0];
		for (i = 0; i < 4; i++)
        {
            coeff[2][i] = coeff[2][i] / divisor;
            coeff[2][i] = coeff[2][i] - coeff[0][i];
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
	//making 2nd row 2nd col 1
	if(coeff[1][1]!=1)
	{
		printf("R2 / %.2lf \n \n", coeff[1][1]);
		double divisor = coeff[1][1];
		for (i = 0; i < 4; i++)
        {
            coeff[1][i] = coeff[1][i] / divisor;
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
	//making 3rd row 2nd col 0
	if(coeff[2][1]!=0)
	{
		printf("R3 - ( R2 * %.2lf )\n \n", coeff[2][1]);
		double divisor = coeff[2][1];
		for (i = 0; i < 4; i++)
        {
            coeff[2][i] = coeff[2][i] - (coeff[1][i]*divisor);
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
	//making 3rd row 3rd col 1
	if(coeff[2][2]!=1)
	{
		printf("R3 / %.2lf \n \n", coeff[2][2]);
		double divisor = coeff[2][2];
		for (i = 0; i < 4; i++)
        {
            coeff[2][i] = coeff[2][i] / divisor;
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
    //making 2nd row 3rd col 0
	if(coeff[1][2]!=1)
	{
		printf("R2 - ( R3 * %.2lf ) \n \n", coeff[1][2]);
		double divisor = coeff[1][2];
		for (i = 0; i < 4; i++)
        {
            coeff[1][i] = coeff[1][i] - ( coeff[2][i] * divisor );
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
    //making 1st row 3rd col 0
	if(coeff[0][2]!=0)
	{
		printf("R1 - ( R3 * %.2lf ) \n \n", coeff[0][2]);
		double divisor = coeff[0][2];
		for (i = 0; i < 4; i++)
        {
            coeff[0][i] = coeff[0][i] - ( coeff[2][i] * divisor );
        }
	}
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
	//making 1st row 2nd col 0
	if(coeff[0][1]!=0)
	{
		printf("R1 - ( R2 * %.2lf ) \n \n", coeff[0][1]);
		double divisor = coeff[0][1];
		for (i = 0; i < 4; i++)
        {
            coeff[0][i] = coeff[0][i] - ( coeff[1][i] * divisor );
        }
	}
	printf("By Gaussian Elimination : \n");
	for (i = 0; i < 3; i++)   //repeating loop
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf   ", coeff[i][j]);
        }
        printf("\n\n");
    }
	printf("Therefore,\n x is %.2lf \n y is %.2lf \n z is %.2lf \n", coeff[0][3],coeff[1][3],coeff[2][3]);	
	return 0;
 }
