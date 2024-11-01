// heap by array
#include <iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;

    //constructor    
    heap(){
        arr[0]=-1;
        size=0;
    } 

    //for insert
    void insert(int value){
        size = size + 1;
        int index = size;
        arr[index] = value;
            
        while(index > 1){
            int parent = index / 2;
            
            if(arr[parent] < arr[index]){
                int temp = arr[parent];
                arr[parent] = arr[index];
                arr[index] = temp;

                // Update index to continue heapifying up
                index = parent;
            }
            else{
                return;
            }
        }
    }
    
    //for delete
    void deletefromHeap(){
        //empty heap
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        //step1:put the last element into first index
        arr[1]=arr[size];
        //step2:remove last element
        size--; 
        
        //step3:take root node to its correct position after swapping
        int i =1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            
            if(leftIndex < size && arr[i] < arr[leftIndex]){
                int temp=arr[i];
                arr[i]=arr[leftIndex];
                arr[leftIndex]=temp;
                
                //update to continue the heapify
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                int temp=arr[i];
                arr[i]=arr[rightIndex];
                arr[rightIndex]=temp;
                
                //update to continue the heapify
                i = rightIndex;
            }
            else{
                return;
            }
        }   
    }
    
    //for print
    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();

    return 0;
}
