#include <iostream>

using namespace std;


void merge(int* T,int d,int s, int g){
    int i,j;
    i=d; j=s+1;
    int* S = new int[g-d+1];
    for (int k=0;k<g-d+1;k++){
        if (i==s+1){
            S[k] = T[j];
            j++;
        }
        else if (j==g+1)
        {
           S[k] = T[i];
           i++; 
        }
        else{
            if(T[j]<T[i]){
                S[k]=T[j];
                j++;
            }
            else{
                S[k]=T[i];
                i++;
            }
        }
    }
    for (int k=0;k<g-d+1;k++){
        T[d+k]=S[k];
    } 
    delete S;
}

void mergesort(int* T,int d,int g){

    if (d<g){
        int s = (d+g)/2;
        mergesort(T,d,s);
        mergesort(T,s+1,g);
        merge(T,d,s,g);
    }
}
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

    //sortowanie przez scalanie
    mergesort(T,0,n-1);

   // wynik programu 
    for (int i=0;i<n;i++){
        cout<<T[i]<<" ";
    }

    return 0; 
}