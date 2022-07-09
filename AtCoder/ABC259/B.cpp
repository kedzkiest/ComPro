#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a, b, d;
    cin >> a >> b >> d;
    
    double x, y, rad;
    rad = d * M_PI / 180.0;
    x = a * cos(rad) - b * sin(rad);
    y = b * cos(rad) + a * sin(rad);
    
    cout << fixed << setprecision(12) << x << " " << y << endl;
}
