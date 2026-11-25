#include <iostream>
using namespace std;

class Mylist {
    int* items;
    int size, index;

public:
    static int counter;
    Mylist() {
        counter++;
        size = 5;
        index = -1;
        items = new int[size];
    }

    Mylist(const Mylist& old) {
        counter++;

        size = old.size;
        index = old.index;
        items = new int[size];

        for (int i = 0; i <= index; i++) {
            items[i] = old.items[i];
        }
    }
    
    Mylist& operator=(const Mylist& old) {

        if (this != &old) {
            
            delete[] items;
          
            size = old.size;
            index = old.index;

            items = new int[size];

            for (int i = 0; i <= index; i++) {
                items[i] = old.items[i];
            }
        }
        return *this;
    }


    void add(int data) {
        if (index == size - 1) {
            int* temp = new int[size * 2];

            for (int i = 0; i <= index; i++) {
                temp[i] = items[i];
            }

            delete[] items;
            items = temp;
            size *= 2;
        }

        index++;
        items[index] = data;
    }

    Mylist operator+(const Mylist& old) {

        Mylist Add_list;
        for (int i = 0; i <= old.index; i++) {
               Add_list.add(items[i]+old.items[i]);
        }
        return Add_list;
    }

    void display() {
        for (int i = 0; i <= index; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }

    void testValue(Mylist old) {
        cout << "Pass by Value" << endl;
    }
    void testReference(Mylist& old) {
        cout << "Pass by reference" << endl;
    }

    bool operator==(const Mylist& old) {

        if (index != old.index)
            return false;

        for (int i = 0; i <= index; i++) {
            if (items[i] != old.items[i])
                return false;
        }

        return true;
    }

    ~Mylist() {
        delete[] items;
    }
};

int Mylist::counter = 0;
int main() {

    Mylist l1;
    cout << "l1 created - Counter = " << Mylist::counter << endl;

    Mylist l2;
    cout << "l2 created - Counter = " << Mylist::counter << endl;

    Mylist l3;
    cout << "l3 created - Counter = " << Mylist::counter << endl;

    Mylist l4 = l3;
    cout << "l4 created - copy ctor - Counter = " << Mylist::counter << endl;
    l1.add(10);
    l1.add(20);
    l1.add(30);
    cout << "\nBEFORE Assign oprator \n";
    cout << "L1: ";
    l1.display();
    cout << "L2: ";
    l2.display();
    cout << "AFTER Assign oprator \n";
    l2 = l1;
    cout << "L1: ";
    l1.display();
    cout << "L2: ";
    l2.display();
    
    cout << "\nplus oprator\n";
    Mylist l5 = l1 + l2;
    l5.display();
    cout << "Counter = " << Mylist::counter;
    cout << "\n\n== operator\n";
    if (l1 == l2)
        cout << "Equal";
    else
        cout << "Not Equal";

    cout << "\n\nBY VALUE - BY REFERNCE\n";
    l1.testValue(l2);
    cout << "Counter = " << Mylist::counter << endl;
    l1.testReference(l2);

    cout << "Counter = " << Mylist::counter << endl;
}