#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //adding numbers into vector

    vector<int> num{ 1, 2, 3 };

    num.push_back(4);
    num.push_back(5);

    cout << "vector with added 4 and 5: ";

    for (const int& i : num) {
        cout << i << "  ";
    }
}

