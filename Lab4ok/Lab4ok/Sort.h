#pragma once
class Sort {
    // add data members
    int n;
    int* v;

  public:
    // add constuctors
    Sort(int nr, int max, int min);
    Sort();
    Sort(int* v, int n);
    Sort(int n, ...);
    Sort(const char* numere);
    void InsertSort(bool ascendent = false);
    int PartitionArr(int arr[], int low, int high, bool ascendent = false);
    void QuickSort(int ,int ,bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};