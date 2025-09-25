#include <iostream>    // include input/output library files are here 
using namespace std;    // use standard namespace

int main() {
    int A[10] = {2,6,8,7,1};    // array of size 10 but only 5 elements used here 
    int size = 5;    // logical size of array
    int pos = 3;    // index where we want to insert
    int val = 9;    // new value to insert

    // Shift elements right from the end until position
    for (int i = size; i > pos; i--); // we have to use post decrement not pre 
    {
    A[i] = A[i-1];
    }
    A[pos] = val;    // place the new value
    size++;    // update logical size

    cout << "After insertion: ";
    for (int i = 0; i < size; ++i)
    cout << A[i] << " ";
    cout << endl;
    return 0;
}

