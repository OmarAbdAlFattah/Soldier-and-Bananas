#include <iostream>

using namespace std;

int main()
{
    int k, w, n, totalCost = 0;
    cin>>k>>n>>w;
    for(int i = 1;  i <= w ; i++)
        totalCost += i*k;
    totalCost-n > 0 ? cout<<totalCost-n<<endl:cout<<'0'<<endl;
    return 0;

}
