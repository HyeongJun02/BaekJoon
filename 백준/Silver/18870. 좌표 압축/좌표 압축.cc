#include <stdio.h>

int arr1[1000000] = {0,};
int arr2[1000000] = {0,};
int min_heap[1000001]  = {0,}; // idx : 1 ~ 1000000
int idx = 1;

void insert(int val){
    int temp_idx = idx;
    int temp;
    min_heap[idx++] = val;
    while(temp_idx > 1){
        if(min_heap[temp_idx/2] > min_heap[temp_idx]){
            temp = min_heap[temp_idx/2];
            min_heap[temp_idx/2] = min_heap[temp_idx];
            min_heap[temp_idx] = temp;
            temp_idx /= 2;
        }else{
            break;
        }
    }    
}

void heapfify(int i){
    // i : idx
    int left = 2*i;
    int right = 2*i+1;
    int smallest = i;
    int temp;
    
    // find smallest
    if(left < idx && min_heap[left] < min_heap[smallest])
        smallest = left;
    if(right < idx && min_heap[right] < min_heap[smallest])
        smallest = right;
    
    if(smallest != i){
        // swap
        temp = min_heap[i];
        min_heap[i] = min_heap[smallest];
        min_heap[smallest] = temp;
        heapfify(smallest);
    }    
    
}


int main(void){
    int N;
    int val;
    // input
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf(" %d", &arr1[i]);
        insert(arr1[i]);
    }
    
    // sorting and deduplication
    int sort_idx=0;
    for(int i=0; i<N; i++){
        val = min_heap[1];
        if(sort_idx > 0){
            if(arr2[sort_idx-1] == val){
                min_heap[1] = min_heap[idx-1]; // remove
                heapfify(1);
                idx -= 1;
                continue;
            }
        }
        arr2[sort_idx++] = min_heap[1];
        min_heap[1] = min_heap[idx-1]; // remove
        heapfify(1);
        idx -= 1;
    }
    
    // binary search로 바꾸기 !! 
    for(int i=0; i<N; i++){
        int left = 0;
        int right = sort_idx;
        int mid;
        while(left <= right){
            mid = (left+right)/2;
            if(arr2[mid] > arr1[i])
                right = mid-1;
            else if(arr2[mid] < arr1[i])
                left = mid + 1;
            else
                break;
        }
        printf("%d ", mid);
    }

    return 0;
}