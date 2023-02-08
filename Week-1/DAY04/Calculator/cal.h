/*
Author: Rushabh Shah
Date of Creation: 8th Feb 2023
Subject: Calculator head file
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void addition();
int subtraction();
int multiply(int x,int y);
void division(float, float);
void modulo();
void kgtogm();
void ltoml();
void dollartorupees();
void squareroot();
void simpleinterest();
void compoundinterest();
int power();
void celiustofareheint();
void cmtom();
void foottoinch();
void miletoyard();
void militomicro();
void areaofcircle();
void areaofrectangle();
void areaofcylinder();
void areaoftriangle();
void areaofrhombus();
void areaoftrapezium();
void areaofsquare();

void addition()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nThe addition of %d and %d is %d",a,b,c);
}

void modulo()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("\nThe Modulo of %d and %d is %d",a,b,c);
}

int subtraction()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
int multiplication(int x,int y)
{
	int ans;
	printf("\nEnter the numbers for multiplication: ");
	scanf("%d%d",&x,&y);
	ans=x*y;
	return ans;
}

void division(float x, float y)
{
	float z;
	printf("\nEnter the numbers for division: ");
	scanf("%f%f",&x,&y);
	z=x/y;
	printf("\nDivision of %f and %f is %.2f",x,y,z);

}

void simpleinterest()
{
	float principle,time,rate,SI;
	printf("\nEnter principle, time, and rate: ");
	scanf("%f%f%f",&principle,&time,&rate);
	SI=(principle*time*rate)/100;
	printf("\nSimple Interest is %f",SI);
}

void compoundinterest()
{
	float principle,time,rate,CI;
	printf("\nEnter principle, time, and rate: ");
	scanf("%f%f%f",&principle,&time,&rate);
	CI=principle*(pow((1+rate/100),time));
	printf("\nCompound Interest is %f",CI);
}
void squareroot()
{
	int n;
	printf("\nEnter the value to find square root of: ");
	scanf("%f",&n);
	printf("Square root: %f",sqrt(n));
}

int power()
{
	int base,exp;
	long double result = 1.0;
	printf("\nEnter the base and exponent: ");
	scanf("%d%d",&base,&exp);
	while(exp!=0)
	{
		result*=base;
		--exp;
	}
	return result;
}

void kgtogm()
{
	float kg,g;
	printf("\nEnter the kilogram: ");
	scanf("%f",&kg);
	g=kg*1000;
	printf("\nGram: %0.2f",g);
}

void ltoml();
{
	float l,ml;
	printf("\nEnter the litre: ");
	scanf("%f",&l);
	ml=l*1000;
	printf("\nMililitre: %0.2f",ml);
}
void dollartorupees()
{
	float dollar,rupees;
	printf("\nEnter Dollars: ");
	scanf("%f",&dollar);
	rupees=dollar*80;
	printf("\nRupees: %.02f",rupees);
}

void celiustofareheint()
{
    float celsius,fahrenheit;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
}
void cmtom()
{
    float centim, meter;
   printf("enter length in cm: ");
   scanf("%f", &centim);
   meter = centim / 100.0;
   printf("length in mtrs = %.4f", meter);
}
void foottoinch()
{
    int feet;
    double inch;
    printf("\nPlease enter feet: ");
    scanf("%d",&feet);
    inch = 12 * feet;
    printf ("Value in Inch is: %.2f \n", inch); 
}
void miletoyard()
{
    float mile,yard;
	printf("\nEnter Miles: ");
	scanf("%f",&mile);
	yard=mile*1760;
	printf("\nYards: %.02f",mile);
}
void militomicro()
{
    float mili,micro;
	printf("\nEnter Milimetres: ");
	scanf("%f",&mili);
	micro=mili*1000;
	printf("\nMicrometres: %.02f",micro);
}

void areaofcircle();
{
    
}
void areaofrectangle();
void areaofcylinder();
void areaoftriangle();
void areaofrhombus();
void areaoftrapezium();
void areaofsquare();
