#include<iostream>
using namespace std;

int firstOccu(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while (s <= e)
    {
        if(arr[mid] == x){
            ans = mid;
            e = mid-1;
        }
        else if(x > arr[mid]){
            s = mid+1;
        }
        else if(x < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
} 
int lastOccu(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while (s <= e)
    {
        if(arr[mid] == x){
            ans = mid;
            s = mid+1;
        }
        else if(x > arr[mid]){
            s = mid+1;
        }
        else if(x < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
} 
int totalOccu(int arr[], int n, int x){
    int Left = firstOccu(arr,n,x);
    int Right = lastOccu(arr,n,x);
    int ans = (Right-Left)+1;
    return ans;
}
int main(){
    int even[6] = {1,2,3,3,3,5};
    cout<<"first occ "<<firstOccu(even,6,3) << endl ;
    cout<<"last occ "<<lastOccu(even,6,3) << endl;
    cout<<totalOccu(even,6,3);
    return 0;
}