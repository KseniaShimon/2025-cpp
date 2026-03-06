#include <iostream>
using namespace std;

class ArrayList {
public:
    int* data;
    int size;
    int capacity;
    
    ArrayList() {
        capacity = 10;
        size = 0;
        data = new int[capacity];
    }
    
    ~ArrayList() {
        delete[] data;
    }
    
    void add(int value) {
        if (size >= capacity) {
            capacity = capacity * 2;
            int* newData = new int[capacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[size] = value;
        size = size + 1;
    }
    
    int get(int index) {
        return data[index];
    }
    
    void set(int index, int value) {
        data[index] = value;
    }
    
    void remove(int index) {
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size = size - 1;
    }
    
    int getSize() {
        return size;
    }
    
    void print() {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << data[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    ArrayList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.print();
    
    list.set(1, 99);
    list.print();
    
    list.remove(0);
    list.print();
    
    cout << list.get(0) << endl;
    cout << list.getSize() << endl;
    
    return 0;
}