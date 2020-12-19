#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int swap = 0;
	int sr = 0;
	int n;
	printf("Enter quantity ");
	scanf_s("%d", &n);
	int* a = new int[n];
	for (int i = 0; i < n; ++i) scanf_s("%d", &a[i]);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - 1; ++j) {
			sr++;
			if (a[j] > a[j + 1]) {
				printf("%d %d\n", a[j], a[j + 1]);
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				swap++;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	printf("Сравнений ");
	printf("%d \n", sr);
	printf("Перестановок ");
	printf("%d", swap);
}