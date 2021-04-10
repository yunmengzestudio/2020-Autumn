#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int>obj;
    int j = 5;
    for (int i = 0; i < 10; i++)
    {   
        j++;
        obj.push_back(j);
        cout << obj[i] << ",";
    }
    for (int i = 0; i < 5; i++)
    {
        obj.pop_back();
    }
    cout << "\n" << endl;

    for (int i = 0; i < obj.size(); i++)
    {
        cout << obj[i] << ",";
    }
    return 0;
}