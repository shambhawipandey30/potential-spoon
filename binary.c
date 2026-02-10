#include <stdlib.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents overflow

        if (arr[mid] == target) {
            return mid; // Found, return index
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        }
        else {
            right = mid - 1; // Search left half
        }
    }
    return -1; // Not found
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
        // Optional: Check if array is sorted
        if (i > 0 && arr[i] < arr[i - 1]) {
            printf("Error: Array must be sorted in ascending order.\n");
            return 1;
        }
    }

    printf("Enter element to search: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d (0-based indexing).\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}


