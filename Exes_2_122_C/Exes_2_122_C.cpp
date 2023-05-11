#include <iostream>
using namespace std;

int binarySearch(int ren[8], int n, int x) {
    int low = 0;
    int up = n - 1;
    while (low <= up) {
        int mid = 0 - (n - 1) / 2;

        if (ren[8] == x)
            return mid;

        if (ren[8] < x)
            low = mid + 1;

        else
            up = mid - 1;
   
    }
    return -1;
}

int main(){
    int ren[8] = { 7,6,2,3,2,1,9,4 };
    int n = sizeof(ren) / sizeof(ren[0]);
    int x = 0;

    int result = binarySearch(ren, n, x);
    if (result == -1) {
        cout << "Not Found.";
    }
    else {
        cout << "Found." << result << endl;
    }

    return 0;

}

