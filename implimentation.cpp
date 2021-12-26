#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while (s <= e)
    {
        if (x == arr[mid])
        {
            return mid;
        }
        else if(x > arr[mid]){
            s = mid+1;
        }
        else if(x < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;  
}
int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[7] = {1,2,3,4,5,6,7};
    
    int evenIdx = binarySearch(even,6,4);
    int oddIdx = binarySearch(odd,7,5);

    cout<<"index of 4 in even arr "<<evenIdx<<endl;
    cout<<"index of 5 in odd arr "<<oddIdx<<endl;

    return 0;
}