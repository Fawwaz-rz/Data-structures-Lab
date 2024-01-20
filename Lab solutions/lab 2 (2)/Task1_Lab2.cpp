//#include <iostream>
//using namespace std;
//void PrintArray(int array[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Array " << i << "  index value :  " << array[i] << endl;
//    }
//}
//void BubbleSorting(int array_to_bubble_sort[],int size_of_array)
//{
//
//    for (int i = 0; i < size_of_array; ++i) {
//        for (int k = 0; k < size_of_array - i; ++k) {
//            if (array_to_bubble_sort[k] < array_to_bubble_sort[k + 1]) {
//                int temp_var = array_to_bubble_sort[k];
//                array_to_bubble_sort[k] = array_to_bubble_sort[k + 1];
//                array_to_bubble_sort[k + 1] = temp_var;
//            }
//        }
//    }
//
//    cout << "\n--------------------------------------------------Sorted Array Value In Descending order-------------------------------\n";
//
//    PrintArray(array_to_bubble_sort, size_of_array);
//
//
//    for (int i = 1; i < size_of_array; ++i) {
//        for (int k = 0; k < size_of_array - i; ++k) {
//            if (array_to_bubble_sort[k] > array_to_bubble_sort[k + 1]) {
//                int temp_var = array_to_bubble_sort[k];
//                array_to_bubble_sort[k] = array_to_bubble_sort[k + 1];
//                array_to_bubble_sort[k + 1] = temp_var;
//            }
//        }
//    }
//
//    cout << "\n--------------------------------------------------Sorted Array Value In Ascending order-------------------------------\n";
//
//    PrintArray(array_to_bubble_sort, size_of_array);
//}
//
//int main()
//{
//	int array_to_bubble_sort[7] = {64,34,25,12,22,11,90};
//    int size_of_array = sizeof(array_to_bubble_sort) / sizeof(array_to_bubble_sort[0]);
//
//            //--------------------------OR-----------------------------------------//
//            //size=array_to_bubble_sort.length();
//            // //------------OR-------------
//            //size=7;
//    cout << "\n--------------------------------------------------Original Array Value------------------------------------\n";
//    PrintArray(array_to_bubble_sort, size_of_array);
//	BubbleSorting(array_to_bubble_sort, size_of_array);
//    cout << endl;
//    cout << "Best case of Bubble Sort is O(N)" << endl;
//    cout << "Average case of Bubble Sort is O(N^2)" << endl;
//    cout << "Worst case of Bubble Sort is also O(N^2)" << endl;
//
//    system("pause");
//    return 0;
//}
//
//
//                    //Best case of Bubble Sort is O(N);
//                    //Average case of Bubble Sort is O(N^2);
//                    //Worst case of Bubble Sort is also O(N^2);
//
//
//
//
