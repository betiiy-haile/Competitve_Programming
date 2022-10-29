void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

class solution{
public:

    int select(int arr[], int i){
        selectionSort(arr,i);
        return *arr;
    }

    void selectionSort(int arr[], int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i]< arr[j])
                    swap(arr[i], arr[j]);
            }
        }
    }
};
