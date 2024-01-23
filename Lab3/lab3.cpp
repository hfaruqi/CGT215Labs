#include <iostream>
using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division " << endl;

    cout << "\nYour Selection: ";
    cin >> choice;
}
void getChoices(float& A, float& B) {
    cout << "Please enter the first value: ";
    cin >> A;

    cout << "Please enter the secound value: ";
    cin >> B;
    // The rest of this function is an exercise to the reader
}
void additionNums(float A, float B) {
    float C;
    C = A + B;
    cout << A << " + " << B << " = " << C << endl;
}
void subtractionNums(float A, float B) {
    float C;
    C = A - B;
    cout << A << " - " << B << " = " << C << endl;
}
void multiplicationNums(float A, float B) {
    float C;
    C = A * B;
    cout << A << " * " << B << " = " << C << endl;
}
void divisionNums(float A, float B) {
    float C;
    C = A / B;
    cout << A << " / " << B << " = " << C << endl;
}
int main(){
    int choice;
    float A;
    float B;
    
    printMenu(choice);
    getChoices(A, B);

    if (choice == 1) {
        additionNums(A, B);
    }

    if (choice == 2) {
        subtractionNums(A, B);
    }

    if (choice == 3) {
        multiplicationNums(A, B);
    }

    if (choice == 4) {
        divisionNums(A, B);
    }
    return 0;
}
