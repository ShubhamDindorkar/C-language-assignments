#include <stdio.h>

int main() {
    int arr[100], n, choice, value, pos;
    
    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        // Display the menu
        printf("\nArray Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the chosen operation
        if (choice == 1) {
            printf("Enter the position to insert: ");
            scanf("%d", &pos);
            printf("Enter the value to insert: ");
            scanf("%d", &value);

            // Shift elements to the right to make space for the new element
            for (int i = n; i >= pos; i--) {
                arr[i] = arr[i-1];
            }
            arr[pos-1] = value;
            n++;
        } 
        else if (choice == 2) {
            printf("Enter the position to delete: ");
            scanf("%d", &pos);

            // Shift elements to the left to fill the gap created by the deleted element
            for (int i = pos-1; i < n-1; i++) {
                arr[i] = arr[i+1];
            }
            n--;
        } 
        else if (choice == 3) {
            // Print the array
            printf("The array elements are: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } 
        else if (choice == 4) {
            // Exit the program
            break;
        } 
        else {
            // Invalid choice
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
