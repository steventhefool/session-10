#include <stdio.h>
using namespace std;
int main (){
	int a[5]={1,2,3,4,5},n,vitri;
	printf ("nhap vao so can tim: ");
	scanf ("%d", &n);
	for (int i =0; i<=5;i++){
		if (n==a[i]){
			vitri=i;
		}
	}
	printf ("vi tri cua phan tu can tim la: %d",vitri);
	return 0;
}
