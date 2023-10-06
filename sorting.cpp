//  bubble sort 
//  make 2 loop to sort the array

#include <iostream>
using namespace std;

int main(){
    cout << "before sorting" << endl;
    int arr[5] = {5, 4, 3, 2, 1};
    for(int i=0 ; i<5; i++){
        cout<<arr[i]<<' ';
    }
    cout<< endl;


    // selection sort 
    // for(int i = 0 ; i<5 ; i++){
    //     int min = i;
    //     for(int j = i+1 ; j<5 ; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     int temp = arr[i];
    //     arr[i] = arr[min];
    //     arr[min] = temp;
    // }
    


    //  bubble sort 
    // for(int i =0 ; i<5 ; i++){
    //     for(int j =1 ; j<5 ; j++){
    //         if(arr[j-1]>arr[j]){
    //             int temp = arr[j-1];
    //             arr[j-1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    



    // insertion sort
    for(int i = 1 ; i<5 ; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j --;
        }
        arr[j+1] = key;
        
    }



    
    cout<<"after sorting "<<endl;
    
    for(int i =0 ; i<5;i++){
        cout << arr[i]<<" ";
    }


    return 0;
}

