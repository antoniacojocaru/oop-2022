#include "Sort.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    Sort d(12, 70, 415);
    int arr[] = { 2, 5, 6, 7, 1, 2, 3 };
    Sort r(arr, 7);
    Sort t(7, 1, 28, 23, 14, 35, 22, 17);
    char arr_1[] = "6,9,69,96,54,55";
    Sort q(arr_1);
    q.QuickSort(0, q.GetElementsCount() - 1, 1);
    d.BubbleSort(1);
    r.InsertSort(0);
    cout << q.GetElementFromIndex(3) << "\n";
    cout << q.GetElementFromIndex(22) << "\n";
    cout << "d: ";
    d.Print();
    cout << "r: ";
    r.Print();
    cout << "q: ";
    q.Print();
}