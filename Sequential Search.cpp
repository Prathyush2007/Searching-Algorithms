//Name : Prathyush
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int size, int target) {
    int index = 0;
    while (index < size) {
        if (arr[index] == target)
            return index;
        index++;
    }
    return -1;
}
int main() {
    int numbers[] = {5, 15, 25, 35, 45};
    int target = 25;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = sequentialSearch(numbers, size, target);
    if (result != -1)
        cout << "Target " << target << " found at index " << result << "." << endl;
    else
        cout << "Target " << target << " not found in the array." << endl;

    return 0;
}
