#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a, b, c;
	
	cout << "Nhap vao 3 he so a, b, c: ";
	cin >> a >> b >> c;
	
	if (a==0){
		if(b==0){
			if(c==0){
				cout <<"Phuong trinh co vo so nghiem.\n"<< endl;
			}else {
				cout <<"Phuong trinh vo nghiem.\n"<< endl;
			}
		}else {
			float x = -c/b;
			cout <<"Phuong trinh co mot nghiem duy nhat: x = "<< x << endl;
		}
	}else {
		float delta = b*b - 4*a*c;
		if(delta < 0){
			cout <<"Phuong trinh vo nghiem.\n"<< endl;
		}else if (delta == 0) {
			float x = -b/(2*a);
			cout <<"Phuong trinh co nghiem kep: x1 = x2 = %.2f\n"<< x << endl;
		}else{
			float x1 = (-b - sqrt(delta)) / (2*a);
			float x2 = (-b + sqrt(delta)) / (2*a);
			cout <<"Phuong trinh co hai nghiem phan biet:\n"<< endl;
			cout <<"x1 = %.2f\n"<< x1 << endl;
			cout <<"x2 = %.2f\n"<< x2 << endl;
		}	
	}
	return 0;
}

