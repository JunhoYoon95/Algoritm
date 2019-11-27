#include <iostream>
#include <vector>
using namespace std;

void timeSpent(int n);

int main()
{
    int T;
    cin >> T;
    int n;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        timeSpent(n);
    }
    return 0;
}

void timeSpent(int n)
{
    vector <int> machineA(n,0);
    vector <int> machineB(n,0);
    
    int bufferA = 0;
    int bufferB = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> machineA[i] >> machineB[i];
        if(machineA[i] + bufferA > machineB[i] + bufferB)
        {
            bufferB += machineB[i];
        }else{
            bufferA += machineA[i];
        }
    }
    
    if(bufferB > bufferA)
    {
        cout << bufferB << endl;
    }else{
        cout << bufferA << endl;
    }
    
}
