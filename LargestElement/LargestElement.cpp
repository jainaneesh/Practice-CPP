/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define SIZE 5                                                    //Defining max size for the array
using namespace std;                                              //To substitute using std with every std library function
int largest(int arr[]);

int main(){
    int max = 0;
    int array[SIZE];
    for(int i=0;i<SIZE;i++){
        cout << "Enter number at index " << i+1 << " ";
        cin >> array[i];
    }
    max = largest(array);
    cout << "Largest element in the array is " << max << endl;
}

//Function that takes in array as an input argument and gives out the largest element
int largest(int arr[])
{
    int temp;
    temp = arr[0];
    for(int i=1;i<SIZE;i++){
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    return temp;
}
