#include<iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;

}
int main() {
	
	int arr[] = {20, 23, 7, 5}, x = 5;

    cout<<search(arr, 4, x);  
    
}