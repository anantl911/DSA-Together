#include <iostream>
using namespace std;
int main(){
    int N = 4, X = 3, arr[]={1,2,5,4};
    int k=0;
    for(int i = 0 ; i<N ; i++){
        if(arr[i]==X){
            cout<<"found!";
            }
        else{
            k++;
        }
    }
    if(k==N){
        cout<<"not found";
    }
    cout<<"This is test to see if this program working or not : "<<k;
    return 0;
}