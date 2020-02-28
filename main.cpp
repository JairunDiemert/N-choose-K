
#include <iostream>
using namespace std;  
  
int nChoose(int n, int k)  
{   
    if (k == 0 || k == n) { 
        return 1;  
    }
    return nChoose(n - 1, k - 1) +  nChoose(n - 1, k);               
}  
  
int main()  
{  
    int n;
    int k; 
    cout << "Please enter a value for n: ";
    cin >> n;
    cout << endl << "Please enter a value for k: ";
    cin >> k;
    cout << endl;
    cout << "Value of C(" << n << ", " << k << ") is " << nChoose(n, k);  
    return 0;  
}  
