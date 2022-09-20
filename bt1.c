#include<stdio.h>
#include<math.h>
int n;

void NhapN(){
	printf("\n Nhap n = ");
	scanf("%d", &n);
}

void NhapMang(int a[]){
	int i;
	for(i = 0; i < n; i++){
		printf(" Phan tu %d = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[]){
	printf("\n Mang ban dau:");
	int i;
	for(i = 0; i < n; i++){
		printf(" %d ,", a[i]);
	}
}

void XuatMangSX(int a[]){
	printf("\n Mang sau khi sap xep:");
	int i;
	for(i = 0; i < n; i++){
		printf(" %d ,", a[i]);
	}
}

void SapXep(int a[]){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		while((pos>=0)&&(a[pos]<x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}

void MaxMin(int a[]){
	SapXep(a);
	printf("\n Max = %d",a[0]);
	printf("\n Min = %d",a[n-1]);
}

void Dem(int a[], int x){
	int i, dem=0;
	for(i=0;i<n;i++){
		if(a[i]==x) dem++;
	}
	printf("\n Dem = %d",dem);
}

int SoNguyenTo(int param)
{
    if (param < 2)
        return 0;
    int i;
    for (i = 2; i <= sqrt(param); i++)
    {
        if (param % i == 0)
            return 0;
    }
    return 1;
}

void CacSoNguyenTo(int a[])
{
    int i, dem = 0;
    for (i = 0; i < n; i++)
    {
        if (SoNguyenTo(a[i]))
        {
            dem++;
        }
    }
    printf("\n So ng/to xuat hien trong mang: %d", dem);
}
int main(){
	NhapN();
	int a[n];
	NhapMang(a);
	XuatMang(a);
	SapXep(a);
	XuatMangSX(a);
	MaxMin(a);
	int x;
	printf("\n Nhap phan tu muon chon: ");
	scanf("%d",&x);
	Dem(a,x);
	CacSoNguyenTo(a);
	return 0;
}
