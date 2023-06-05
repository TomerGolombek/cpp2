/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/

#include "Menu.h"
using namespace std;



int Menu::mainMenu() {
    int choice;

    while (true) {
        std::cout << "(1) Set Menu\n(2) Integer Queue Menu\n(3) Exit\n";
        std::cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            break; // Valid choice, exit the loop
        }

        cout << "Invalid selection." << endl;
        cin.clear(); // Clear any error flags
        mainMenu();

    }



    switch (choice) {
        case 1:
            setMenu();
            break;
        case 2:
            queueMenu();

            break;
        case 3:
            std::cout<<"Goodbye!";
            break;
    }

    return 0;
};




int   Menu::setMenu() {
    int choice;

    while (true) {
        std::cout << "*** Welcome to Set Menu ***\n"
"To select an item, enter\n"
"1 Show set 1\n"
"2 Show set 2\n"
"3 add element to set 1\n"
"4 add element to set 2\n"
"5 Show set1 U set 2 (union)\n"
"6 to exit\n";
        std::cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6) {
            break; // Valid choice, exit the loop
        }

        std::cout << "Invalid selection." << std::endl;
        std::cin.clear(); // Clear any error flags
        setMenu();

    }


    switch (choice) {
        case 1://Show set 1
            setMenu();

            break;

        case 2://Show set 2
            queueMenu();

            break;

        case 3: //add element to set 1

            break;

        case 4:// add element to set 2

            break;

        case 5://Show set1 U set 2 (union)

            break;

        case 6://exit to main
            mainMenu();
            break;
    }

    return 0;
}


int  Menu::queueMenu() {
    int choice,sizeQ;
    cout<<"Enter the size of the queue:"<<endl;
    cin>>sizeQ;
    myQueue queue(sizeQ);
    while (true) {
        std::cout << "*** Welcome to Queue Menu ***\n"
"To select an item, enter\n"
"1 Show Queue\n"
"2 Insert new element\n"
"3 Remove element\n"
"4 Check the first element\n"
"5 to exit\n";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 ) {
            break; // Valid choice, exit the loop
        }

        cout << "Invalid selection." << endl;
        cin.clear(); // Clear any error flags
        queueMenu();

    }


    switch (choice) {
        case 1://Show Queue
            queue.PrintVector();

            break;

        case 2://Insert new element
            int push_element;
            cout<< "insert new element: ";
            cin>>push_element;
            queue.enQueue(push_element);

            break;

        case 3: //Remove element
            cout<<"The new queue:"<<endl;
            queue.deQueue();
            if (queue.isEmpty())
                break;
            queue.PrintVector();
            break;

        case 4:// Check the first element
            if (queue.isEmpty())
                break;
            queue.peek();
            break;

        case 5://exit need to clear stuf?
            mainMenu();
            break;

    }

    return 0;
};


