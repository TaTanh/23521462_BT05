#include <iostream>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC a;
	Nhap(a);
	Xuat(a);
	cout << "\nNhap x: ";
	float x;
	cin >> x;
	cout << "Gia tri cua don thuc tai x = " << x <<" la "<< TinhGiaTri(a, x);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\n He so: " << f.a;
	cout << "\n So mu: " << f.n;
}

float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
	{
		T = T * x;
	}
	T = T * f.a;
	return T;
}