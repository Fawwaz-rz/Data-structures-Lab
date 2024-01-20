
//#include<iostream>
//using namespace std;
//
//class Library {
//private:
//    char** books;
//    int capacity;
//    int count;
//
//public:
//    Library(int x = 100) : capacity(x), count(0) {
//        books = new char* [capacity];
//        for (int i = 0; i < capacity; i++) {
//            books[i] = nullptr;
//        }
//    }
//
//    ~Library() {
//        for (int i = 0; i < count; i++) {
//            delete[] books[i];
//        }
//        delete[] books;
//    }
//
//    void addbook(const string& str) {
//        if (count == capacity) {
//            capacity *= 2;
//            char** Books_with_increased_capacity = new char* [capacity];
//            for (int i = 0; i < count; i++) {
//                Books_with_increased_capacity[i] = books[i];
//            }
//            delete[] books;
//            books = Books_with_increased_capacity;
//        }
//        books[count] = new char[str.length() + 1];
//        for (int i = 0; i <= str.length(); i++) {
//            books[count][i] = str[i];
//        }
//        count++;
//    }
//
//    string removebook(const string& name_to_remove) {
//        for (int i = 0; i < count; i++) {
//            if (books[i] != nullptr && name_to_remove == books[i]) 
//            {
//                for (int j = i; j < count - 1; j++) {
//                    books[j] = books[j + 1];
//                }
//                books[count - 1] = nullptr;
//                count--;
//                return "\nname is removed\n";
//            }
//        }
//        return "\nname is not found\n";
//    }
//
//    string searchbook(const string& name_to_search) {
//        for (int i = 0; i < count; i++) {
//            if (books[i] != nullptr && name_to_search == books[i]) {
//                return "\nname is found\n";
//            }
//        }
//        return "\nname is not found\n";
//    }
//
//    void printlibrary() {
//        for (int i = 0; i < count; i++) {
//           
//                cout << books[i] << endl;
//           
//        }
//    }
//};
//
//int main() {
//    Library obj(100);
//    string names;
//    int num = 0;
//
//    cout << "Please enter Count of books that you have: ";
//    int kount;
//    cin >> kount;
//
//    cout << "Please enter names of books: \n";
//    for (int i = 0; i < kount; i++) {
//        cout << "name " << i + 1 << ": ";
//        cin >> names;
//        obj.addbook(names);
//    }
//
//    while (num != 5) {
//        cout << "Please enter:\n1. To add book\n2. To remove book\n3. To search book\n4. Print names of books\n5. Exit\n";
//        cin >> num;
//
//        switch (num) {
//        case 1:
//            cout << "Please enter the name of the book: ";
//            cin >> names;
//            obj.addbook(names);
//            break;
//        case 2:
//            cout << "Please enter the name of the book to remove: ";
//            cin >> names;
//            cout << obj.removebook(names) << endl;
//            break;
//        case 3:
//            cout << "Please enter the name of the book to search: ";
//            cin >> names;
//            cout << obj.searchbook(names) << endl;
//            break;
//        case 4:
//            obj.printlibrary();
//            break;
//        case 5:
//            cout << "--------------Thank You---------------------" << endl;
//            break;
//        default:
//            cout << "Invalid input." << endl;
//        }
//    }
//
//    return 0;
//}
