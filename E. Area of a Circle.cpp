#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout << fixed << setprecision(9);
    double R;
    const double PI =3.141592653;
    cin>>R;
    cout<<(PI*(R*R));

    return 0;
}
