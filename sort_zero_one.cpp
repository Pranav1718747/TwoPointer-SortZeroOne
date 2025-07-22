#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 0, 0, 1};
    int i = 0, j = arr.size() - 1;

    while (i < j) {
        if (arr[i] == 1 && arr[j] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        } else {
            if (arr[i] == 0) i++;
            if (arr[j] == 1) j--;
        }
    }

    for(int i=0;i<n;i++){
       cout << num << " ";
    }
    return 0;
}
