#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from

void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial(int& num, int& output) {
    
    // I recommend writing your factorial code here
    cout << "Factorial: " << endl;
    cout << "Enter a number: ";
    cin >> num;
    output = 1;

    while(num > 0) {
        output = output * num;
        num = num - 1;
    }

}

void arithmetic(int& start, int& add_num, int& count, int& output) {
    // I recommend writing your arithmetic series code here
    cout << "Arithmetic Series: " << endl;
    cout << "Enter a number to start at: "; 
    cin >> start;
    cout << "Enter a number to add each time: ";
    cin >> add_num;
    cout << "Enter the number of elements in a series: ";
    cin >> count;
    
    output = start;
    int current_num = start;

    while(count > 1) {
        cout << current_num << " + ";
        current_num = current_num + add_num;
        output = output + current_num;
        count = count -1;
    }

    cout << current_num;
}

void geometric(int& start, int& multiply_num, int& count, int& output) {
    // I recommend writing your geometric series code here
    cout << "Geometric Series: " << endl;
    cout << "Enter a number to start at: "; 
    cin >> start;
    cout << "Enter a number to multiply by each time: ";
    cin >> multiply_num;
    cout << "Enter the number of elements in a series: ";
    cin >> count;

    output = 0;
    int ct = 0;

    while(ct < count) {

        output = output + (start * pow(multiply_num,ct));
        if(ct < count-1) {
            cout << (start * pow(multiply_num,ct)) << " + ";
        } else {
            cout << (start * pow(multiply_num,ct));
        }
        
        ct++;

    }

    cout << "= " << output << endl;

}

int main(){
    int choice;
    char again;
    

    do {
        printMenu();
        cin >> choice;
        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            int num;
            int output;
            factorial(num, output);
            cout << output;
        }
        else if (choice == 2) {
            int start;
            int add_num;
            int count;
            int output;
            arithmetic(start, add_num, count, output);
            cout << endl;
            cout << output << endl;
        }
        else if (choice == 3) {
            int start;
            int multiply_num;
            int count;
            int output;
            geometric(start, multiply_num, count, output);
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}