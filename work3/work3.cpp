#include<stdio.h>
double area[4] = {0,0,0,0};
void data();
void Area();
void Perimeter();
int main() {
	data();
	Area();
	return 0;
}
void data() {
	printf("Claculate area rectangle and Square perimeter\n");
	printf("width : ");
	scanf_s("%lf", area[0]);
	printf("heigth : ");
	scanf_s("%lf", area[1]);
}
void Area() {
	area[2] = area[1] * area[0];
	printf("Area rectangle : %.2lf\n", area[2]);
}
void Perimeter() {
	area[3] = (2*area[1])+(2*area[0]);
	printf("Square perimeter : %.2lf\n", area[3]);
}