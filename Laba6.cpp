//Игорь Цакелов ИП-82
#include <iostream>
#include <cmath>
using namespace std;
float arithmetic_root(int p, int n, int a) {
       int x_prev = 1;
       int x_n = 0;
       for (int i = 0; i < n; i++) {
              x_n = x_prev / pow(p, 2)*(int)((pow(p, 2) - 1) + 0.5*(p + 1)*a /
pow(x_prev, p) - 0.5*(p + 1)*pow(x_prev, p) / p);
       x_prev = x_n;
return x_n;}}
int fact(int a) {
       if (a = 1) {
return 1; }
       else {
              return a * fact(a - 1);
} }
int main() {
       int m, k, n;
       cout << "Enter m, k, n" << endl;
       cin >> m >> k >> n;
       if (k < 0) {
              cout << "Enter positive value of k" << endl;
cin >> k; }
float y = fact(k) / fact(m)*pow(arithmetic_root(3, n, k), 2) - pow(m, 2)*pow(arithmetic_root(5, n, k), 3);
       cout << "Result is " << y << endl;
       system("pause");
     }
