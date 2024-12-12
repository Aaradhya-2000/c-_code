// Online C++ compiler to run C++ program online
#include <iostream>

//  Sorting is a process of arranging the given data
//  Sorting are of two types
//  1) Ascending 2) Descending
//  Default nature of Sorting is Ascending in nature

// Sorting techniques depends on 2 parameters
// 1) Time Complexity and space complexity

// Sorting method are of  types

// 1) Bubble Sort
// 2) Insertion Sort
// 3) Selection
// 4) Quick
// 5) Merge

 // BUBBLE SORTING

 /*

 // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//  This code is not optimized
void bubble(int a[],int s){
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){ // s-i-1 is used when we have to eliminate the last element after each passing
            int t;
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
}

int main() {
   int arr[] = {5,4,3,2,1};
   int s = sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<s;i++){
       cout<<arr[i]<<"\t";
   }
   cout<<"\n after swapping\n";

   bubble(arr,s);
    return 0;
}



// OPTIMIZED CODE


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cnt=0;

void bubble(int arr[], int r){
    bool c = false;
    for(int i=0;i<r;i++){
        for(int j=0;j<r-i-1;j++){
            int tmp;
            if(arr[j]>arr[j+1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                c = true;
            }
            if(c == false){
                break;
            }
            cnt++;
        }
    }
    for(int i=0;i<r;i++){
        cout<<arr[i]<<"\t";
    }
}

9/12/2024

//  OPTIMIZED CODE OF BUBBLE SORTING
int main() {
     int arr[] = {4,3,2,1};
     int s = sizeof(arr)/sizeof(arr[0]);

     bubble(arr,s);
     cout<<"\nCouter = "<<cnt<<"\n";
}
;



 */


