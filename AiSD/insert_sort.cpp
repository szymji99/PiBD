#include <iostream>

using namespace std;

int main(){

    // wejscie
    int n;
    cout<<"Podaj dlugosc tablicy: ";
    cin>>n;

    int* T = new int[n];
    cout<<"Podaj elementy tablicy: ";
    for (int i=0;i<n;i++){
        cin>>T[i];
    }

    // sortowanie przez wstawianie
    int temp;
    for (int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if (T[j]<T[j-1]){
                temp=T[j-1];
                T[j-1]=T[j];
                T[j]=temp;
            }
            else {
                 break;
            }
        }
    }

   // wynik programu 
    for (int i=0;i<n;i++){
        cout<<T[i]<<" ";
    }

    return 0;
}