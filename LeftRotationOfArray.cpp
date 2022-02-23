#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "enter the number of left rotations to perform" << endl;
    cin >> d;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    for (int j = 0; j< d; j++)
    {
        int temp = A[0];
        for (int i = 0; i < n - 1; i++)
        {
            A[i] = A[i + 1];
            
        }
        A[n - 1] = temp;
        
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}