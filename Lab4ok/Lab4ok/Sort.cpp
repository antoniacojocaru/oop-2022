#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cstdarg>
#include "Sort.h"
#include <iostream>
#include <stdarg.h>
#include <stdlib.h>
using namespace std;
Sort::Sort(int nr, int max, int min) {
    this->n = n;
    this->v = new int[n];
    for (int i = 0; i < n; i++)
        this->v[i] = min + rand() % max + 1;
}
Sort::Sort() : v(new int[10]{ 3, 7, 2, 1, 8, 9, 10, 21, 11, 19 }) {
    this->n = 10;
}
Sort::Sort(int* v, int n) {
    this->n = n;
    this->v = new int[n];
    for (int i = 0; i < n; i++)
        this->v[i] = v[i];
}

Sort::Sort(int n, ...) {
    this->n = n;
    this->v = new int[n];
    va_list l1;
    va_start(l1, n);
    for (int i = 0; i < n; i++)
        this->v[i] = va_arg(l1, int);
    va_end(l1);
}

Sort::Sort(const char* numere) {
    this->n = 0;
    for (int i = 0; i < strlen(numere);i++) {
        if (numere[i] == ',')
            this->n++;
    }
    if (this->n != 0)
        this->n++;
    this->v = new int[this->n];
    int i   = 0;
    char* buffer = new char[strlen(numere + 1)];
    strcpy(buffer, numere);
    char* p = strtok(buffer, ",");
    while (p!=nullptr) {
        this->v[i++] = atoi(p);
        p = strtok(nullptr, ",");
    }
    delete[] buffer;
}



void Sort::InsertSort(bool ascendent) {
    if (ascendent) {
        int key, j;
        for (int i = 1; i < this->n; i++) {
            j   = i - 1;
            key = this->v[i];
            while (j >= 0 && this->v[j] > key) {
                this->v[j + 1] = this->v[j];
                j--;
            }
            this->v[j + 1] = key;
        }
    } 
    else {
        int key, j;
        for (int i = 1; i < this->n; i++) {
            j   = i - 1;
            key = this->v[i];
            while (j >= 0 && this->v[j] <key) {
                this->v[j + 1] = this->v[j];
                j--;
            }
            this->v[j + 1] = key;
        }
    }
}

int Sort::PartitionArr(int arr[], int low, int high, bool ascendent) {
    int pivot = arr[high];
    int i     = (low - 1);
    if (ascendent) {
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int aux;
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    } 
    else {
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] > pivot) {
                i++;
                int aux;
                aux    = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void Sort::BubbleSort(bool ascendent) {
    if (ascendent) {
       
        for (int i = 0; i < this->n - 1; i++)
            for (int j = 0; j <this-> n - i - 1; j++)
                if (this->v[j] > this->v[j + 1]) {
                   // swap(this->v[j + 1], this->v[j]);
                    int aux;
                   aux = this->v[j + 1];
                    this->v[j + 1] = this->v[j];
                   this->v[j]     = aux;
                }
    } 
    else {
        for (int i = 0; i < this->n - 1; i++)
            for (int j = 0; j < this->n - i - 1; j++)
                if (this->v[j] <this->v[j + 1]) {
                    int aux;
                    aux            = this->v[j + 1];
                    this->v[j + 1] = this->v[j];
                    this->v[j]     = aux;
                }
    }
}

void Sort::Print() {
    for (int i = 0; i < this->n; i++)
        cout << this->v[i] << " ";
    cout << "\n";
}

int Sort::GetElementsCount() {
    return this->n;
}

int Sort::GetElementFromIndex(int index) {
    if (index > this->n || index < 0)
        return -1;
    else return this->v[index];
}

void Sort::QuickSort(int low,int high,bool ascendent) {
    if (low < high) {
        int partition_index = PartitionArr(this->v, low, high, ascendent);
        QuickSort(low, partition_index - 1, ascendent);
        QuickSort(partition_index + 1, high, ascendent);
    }
}
