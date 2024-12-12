/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insrt(int arr[],int s){
    for(int i=1;i<s;i++){
        int mn=i; // mn represnets to index
        bool p = false;

        while(mn>0 && arr[mn]<arr[mn-1]){
             int tmp;
            tmp = arr[mn];
            arr[mn] = arr[mn-1];
            arr[mn-1] = tmp;
            mn--;
            p = true;

        }
        if(p == false){
            break;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

//  FIRST DATA IS SORTED
int main() {
    int arr[] = {4,2,3,1,5};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n After Sorting Insertion\n";
    insrt(arr,s);

    return 0;
}

*/
