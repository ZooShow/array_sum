#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    cout<<"введите количество элементов в массиве"<<endl;
    cin>>n;
    if (n == 0){
        return 0;
    }
    int *mas = new int[n];
    for (int i = 0; i<n; ++i){
        cout<<"Введите "<<i+1<<"-й"<<" элемент массивы"<<endl;
        cin>>mas[i];
    }
    for (int i = 0; i < n; ++i ){
        cout<<mas[i]<<' ';
    }
    cout<<endl<<array_sum(mas, n);
    return 0;
}
