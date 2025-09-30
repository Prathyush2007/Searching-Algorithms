//Name : Prathyush
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int numbers[] = {10, 25, 30, 45, 50};
    int target = 30;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int index = linearSearch(numbers, size, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
