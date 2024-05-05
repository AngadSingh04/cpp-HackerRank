#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    int** arr =  new int*[n]();
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        int* myarr = new int[k]();
        for(int j = 0; j<k; j++){
            cin >> myarr[j];
        }
        arr[i] = myarr;
    }
    for(int k = 0; k<q; k++){
        int i,j;
        cin >> i>> j;
        cout << arr[i][j] << endl;
    }
    for(int i = 0; i<n; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

// int** arr = new int*[n](); 2D ARRAY
// int* myarr = new int[n]()  1D ARRAY