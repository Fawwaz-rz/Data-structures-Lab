//#include <iostream>
//using namespace std;
//void printarray(int array[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << "array " << i << "  index value :  " << array[i] << endl;
//    }
//}
//void insertionsorting(int array_to_insertion_sort[], int size_of_array)
//{
//
//    for (int i = 1; i< size_of_array; i++) {
//        int temp_var = array_to_insertion_sort[i];
//        int iterator = i - 1;
//        while (temp_var < array_to_insertion_sort[iterator] && iterator >= 0) {
//            array_to_insertion_sort[iterator + 1] = array_to_insertion_sort[iterator];
//            iterator--;
//        }
//        array_to_insertion_sort[iterator + 1] = temp_var;
//    }
//
//    cout << "\n--------------------------------------------------sorted array value in ascending order-------------------------------\n";
//
//    printarray(array_to_insertion_sort, size_of_array);
//
//
//    for (int i = 1; i < size_of_array; i++) {
//        int temp_var = array_to_insertion_sort[i];
//        int iterator = i - 1;
//        while (temp_var > array_to_insertion_sort[iterator] && iterator >= 0) {
//            array_to_insertion_sort[iterator + 1] = array_to_insertion_sort[iterator];
//            iterator--;
//        }
//        array_to_insertion_sort[iterator + 1] = temp_var;
//    }
//
//    cout << "\n--------------------------------------------------sorted array value in descending order-------------------------------\n";
//
//    printarray(array_to_insertion_sort, size_of_array);
//}
//
//int main()
//{
//    int array_to_insertion_sort[7] = { 64,34,25,12,22,11,90 };
//    int size_of_array = sizeof(array_to_insertion_sort) / sizeof(array_to_insertion_sort[0]);
//
//    //--------------------------or-----------------------------------------//
//    //size=array_to_insertion_sort.length();
//
//    cout << "\n--------------------------------------------------original array value------------------------------------\n";
//    printarray(array_to_insertion_sort, size_of_array);
//    insertionsorting(array_to_insertion_sort, size_of_array);
//    cout << endl;
//    cout << "best case of insertion sort is o(n)" << endl;
//    cout << "average case of insertion sort is o(n^2)" << endl;
//    cout << "worst case of insertion sort is also o(n^2)" << endl;
//
//    system("pause");
//    return 0;
//}
//
//
////best case of insertion sort is o(n);
////average case of insertion sort is o(n^2);
////worst case of insertion sort is also o(n^2);
//
//
//
//
