#include<iostream>
using namespace std;
// int BinarySearch(int arr[],int search,int l){
//     int s=0;
//     int e=l-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(arr[mid]==search){
//             return mid;
            
//         }
//         else if(arr[mid]>search){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=(s+e)/2;
//     }
//     return -1;
    
// }
int BinarySearch(int arr[],int search,int begin,int l){
    int s=begin;
    int e=l;
    int mid=(s+e)/2;
    if(s>e){
        return -1;
    }
    else if(arr[mid]==search)
        return mid;
    else if(arr[mid]>search){
        BinarySearch(arr,search,s,mid-1);
    }
    else{
        BinarySearch(arr,search,mid+1,e);
    }
  
}

int main(){
    int arr[]={2,3,6,9,15,19,25,68};
    int search;
    cout<<"enter search elemnt "<<endl;
    cin>>search;
    int indx=BinarySearch(arr,search,0,7);
    if(indx!=-1){
        cout<<"element "<<search<<" found at "<<indx<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    

     return 0;
}