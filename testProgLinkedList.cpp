//This program tests various operation of a linked list
//34 62 21 90 66 53 88 24 10 -999

#include <iostream>                                 //Line 1
#include "unorderedLinkedList.h"                    //Line 2

using namespace std;                                //Line 3

int main()                                          //Line 4
{                                                   //Line 5
    unorderedLinkedList<int> list1, list2;          //Line 6
    int num;                                        //Line 7

    cout << "Line 8: Enter integers ending "
         << "with -999" << endl;                    //Line 8
    cin >> num;                                     //Line 9

    while (num != -999)                             //Line 10
    {                                               //Line 11
        list1.insertLast(num);                      //Line 12
        cin >> num;                                 //Line 13
    }                                               //Line 14

    cout << endl;                                   //Line 15

    cout << "Line 16: list1: ";                     //Line 16
    list1.print();                                  //Line 17
    cout << endl;                                   //Line 18
    cout << "Line 19: Length of list1: "
         << list1.length() << endl;                 //Line 19

    list2 = list1;	   //test the assignment operator Line 20

    cout << "Line 21: list2: ";                     //Line 21
    list2.print();                                  //Line 22
    cout << endl;                                   //Line 23
    cout << "Line 24: Length of list2: "
         << list2.length() << endl;                 //Line 24

    cout << "Line 25: Enter the number to be "
         << "deleted: ";                            //Line 25
    cin >> num;                                     //Line 26
    cout << endl;                                   //Line 27

    list2.deleteNode(num);                          //Line 28

    cout << "Line 29: After deleting " << num
         << " list2: " << endl;                     //Line 29
    list2.print();                                  //Line 30
    cout << endl;                                   //Line 31

    cout << "Line 32: Length of list2: "
         << list2.length() << endl;                 //Line 32

    cout << endl << "Line 33: Output list1 "
         << "using an iterator" << endl;            //Line 33

    linkedListIterator<int> it;                     //Line 34

    for (it = list1.begin(); it != list1.end();
                             ++it)                  //Line 35
        cout << *it << " ";                         //Line 36
    cout << endl;                                   //Line 37

    //system("pause");
    // Additional tests for extended functions

    // Test kth (valid)
    cout << "\nExtra: kth(3) of list1: ";
    cout << list1.kth(3) << endl;

    // Test deleteKth (valid)
    cout << "Extra: deleteKth(2) on list1" << endl;
    list1.deleteKth(2);
    list1.print();
    cout << endl;

    // Test rotate
    cout << "Extra: rotate list1" << endl;
    list1.rotate();
    list1.print();
    cout << endl;

    // Test deleteSmallest
    cout << "Extra: deleteSmallest on list1" << endl;
    list1.deleteSmallest();
    list1.print();
    cout << endl;

    // Test deleteAll
    cout << "Extra: Enter a value to deleteAll: ";
    cin >> num;
    list1.deleteAll(num);
    cout << "After deleteAll(" << num << "): ";
    list1.print();
    cout << endl;
    cout << "Length of list1: " << list1.length() << endl;

    // Test deleteKth invalid
    cout << "Extra: deleteKth(100) on list1 (invalid)" << endl;
    list1.deleteKth(100);

    return 0;                                       //Line 38
}                                                   //Line 39
