#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double n, m, a;
    cin >> n >> m >> a;

    long long c = ceil(n/a);
    long long b = ceil(m/a);

    long long result = c*b;

    cout << result;
    return 0;
}
