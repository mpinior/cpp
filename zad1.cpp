#include <iostream>


using namespace std;

int **Array2D(int n_rows, int n_cols){
    int **tab = new int *[n_rows];
    for (int i = 0; i<n_cols; i++)
        tab[i] = new int [n_cols];
    return tab;
}


void Array(int n_rows, int n_cols,int **tab){
    int number = 1;
    for (int i=0; i<n_rows; i++){
        for (int j=0; j<n_cols; j++){
            cout<<number<<" i "<<i<<" j "<<j<<endl;
            tab[i][j]= number;
            number++;
        }
    }
}


void ShowArray(int n_rows, int n_cols,int **tab){
    for (int i=0; i<n_rows; i++){
        for (int j=0; j<n_cols; j++){
            cout<<tab[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void DeleteArray2D(int**array, int n_rows, int n_cols){

    for (int i = 0; i<n_cols; i++){
        delete [] array[i];
    }
    delete [] array;
}


int main(){
    int rows, cols;
    cout<<"Podaj liczbe wierszy:";
    cin>>rows;
    cout<<"Podaj liczbe kolumn:";
    cin>>cols;
    int** Mytab= Array2D(rows, cols);
    Array(rows, cols, Mytab);
    ShowArray(rows, cols, Mytab);
    DeleteArray2D(Mytab, rows, cols);

    return 0;
}
