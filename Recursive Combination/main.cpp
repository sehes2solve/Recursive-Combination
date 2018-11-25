#include <iostream>

using namespace std;
int C(int n,int r);
int main () {

    cout << C(6,2);
    return 0;
}

int C(int n,int r)
{
    if(n <= 0 || r <= 0 || r > n || n == r)
        return 1;
    else
        return C(n-1,r-1) + C(n-1,r);
}
