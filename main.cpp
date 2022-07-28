#include <iostream>
#include <stdlib.h>
#include <string.h>
#include<vector>
using namespace std;
int main() {
    vector <int> candidates = {1,2,3,4,5};

    for(vector<int>::iterator iter=candidates.begin();iter!=candidates.end();iter++) {
        cout<<*iter;
    }

    return 0;
}
