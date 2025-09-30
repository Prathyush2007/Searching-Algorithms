//Name : Prathyush
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0, end = size - 1;

    while (start <= end) {
        int middle = start + (end - start) / 2;

        if (arr[middle] == target)
            return middle;
        else if (arr[middle] < target)
            start = middle + 1;
        else
            end = middle - 1;
    }

    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int target = 40;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int index = binarySearch(numbers, size, target);

    if (index != -1)
        cout << "Target " << target << " found at index " << index << "." << endl;
    else
        cout << "Target " << target << " not found in the array." << endl;

    return 0;
}
