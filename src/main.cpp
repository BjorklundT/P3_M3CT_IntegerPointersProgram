//============================================================================
// Name        : P3_M3CT_IntegerPointersProgram
// Author      : Timothy Bjorklund
//============================================================================

/* ===========Project Planning===========
 * DONE: Project set up
 * DONE: Local GIT Repository
 * DONE: Create GitHub Repository
 * DONE: Initial Commit and Push to GitHub with ScreenShot (Project + Commit)
 * DONE: Initial pseudocode brainstorm
 *
 * DONE: Create helper method: collectAndAllocate (input + new allocation)
 * DONE: Create helper method: printValues (print variables + pointer addresses + dereferenced values)
 * DONE: Create helper method: freeMemory (delete allocated memory + set pointers to nullptr)
 *
 * DONE: In main(), declare three int variables for user input
 * DONE: In main(), declare three int* pointers and initialize to nullptr
 * DONE: Call collectAndAllocate to store input and allocate heap memory
 * DONE: Call printValues to display variable values and pointer details
 * DONE: Call freeMemory to release heap memory safely
 *
 * DONE: Update pseudocode to match new helper method design
 *
 * DONE: Add clear function header comments -- maybe Doxygen-style for readability
 * DONE: Run and test program (screenshots: code + execution/results)
 * DONE: Final commit (screenshot staging/commit)
 * DONE: Push final changes to GitHub
 */

#include <iostream>

/**
 * Collects three integer inputs from the user and stores them in variables.
 * Allocates dynamic memory for each integer using the new operator and stores
 * the values in heap memory through pointers.
 *
 * @param value1 Reference to the first integer variable
 * @param value2 Reference to the second integer variable
 * @param value3 Reference to the third integer variable
 * @param pValue1 Reference to pointer for first heap allocation
 * @param pValue2 Reference to pointer for second heap allocation
 * @param pValue3 Reference to pointer for third heap allocation
 */
void collectAndAllocate(int &value1, int &value2, int &value3, int *&pValue1, int *&pValue2, int *&pValue3) {
	std::cout << "Enter first Number: ";
	std::cin >> value1;

	std::cout << "Enter second Number: ";
	std::cin >> value2;

	std::cout << "Enter third Number: ";
	std::cin >> value3;

	pValue1 = new int(value1);
	pValue2 = new int(value2);
	pValue3 = new int(value3);
}

/**
 * Displays the values stored in the three integer variables and shows pointer details.
 * Prints the pointer address (where it points in memory) and the dereferenced value
 * (the integer stored at that address).
 *
 * @param value1 First integer variable value
 * @param value2 Second integer variable value
 * @param value3 Third integer variable value
 * @param pValue1 Pointer to first heap allocation
 * @param pValue2 Pointer to second heap allocation
 * @param pValue3 Pointer to third heap allocation
 */
void printValues(int value1, int value2, int value3, int *pValue1, int *pValue2, int *pValue3) {
    std::cout << "\nVariable values:" << std::endl;
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << "Value 3: " << value3 << std::endl;

    std::cout << "\nPointer details:" << std::endl;

    std::cout << "Pointer 1 address: " << pValue1 << std::endl;
    std::cout << "Pointer 1 value:   " << *pValue1 << std::endl;

    std::cout << "Pointer 2 address: " << pValue2 << std::endl;
    std::cout << "Pointer 2 value:   " << *pValue2 << std::endl;

    std::cout << "Pointer 3 address: " << pValue3 << std::endl;
    std::cout << "Pointer 3 value:   " << *pValue3 << std::endl;
}

/**
 * Frees dynamically allocated memory for all three pointers using delete,
 * then sets each pointer to nullptr to prevent dangling pointer usage.
 *
 * @param pValue1 Reference to pointer for first heap allocation
 * @param pValue2 Reference to pointer for second heap allocation
 * @param pValue3 Reference to pointer for third heap allocation
 */
void freeMemory (int *&pValue1, int *&pValue2, int *&pValue3) {
	delete pValue1;
	delete pValue2;
	delete pValue3;

	pValue1 = nullptr;
	pValue2 = nullptr;
	pValue3 = nullptr;

	std::cout << "\nMemory freed. Program complete.\n";
}

int main() {
	int value1, value2, value3;

	// DECLARE pointers to null
	int *pValue1 = nullptr;
	int *pValue2 = nullptr;
	int *pValue3 = nullptr;

	collectAndAllocate(value1, value2, value3, pValue1, pValue2, pValue3);
	printValues(value1, value2, value3, pValue1, pValue2, pValue3);
	freeMemory(pValue1, pValue2, pValue3);

	return 0;
}
