//#include <iostream>
//using namespace std;
//void PrintArray(int array[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Array " << i << "  index value :  " << array[i] << endl;
//    }
//}
//void SelectionSorting(int array_to_selection_sort[], int size_of_array)
//{
//
//    for (int i = 0; i < size_of_array - 1; i++)
//    {
//        int minimum_index = i;
//        for (int  k=i+ 1; k < size_of_array; k++)
//        {
//
//            if (array_to_selection_sort[k] < array_to_selection_sort[minimum_index])
//                minimum_index = k;
//        }
//        int temp_var = array_to_selection_sort[minimum_index];
//        array_to_selection_sort[minimum_index]= array_to_selection_sort[i];
//        array_to_selection_sort[i] = temp_var;
//    }
//
//    cout << "\n--------------------------------------------------Sorted Array Value In Ascending order-------------------------------\n";
//
//    PrintArray(array_to_selection_sort, size_of_array);
//
//
//    for (int i = 0; i < size_of_array - 1; i++)
//    {
//        int minimum_index = i;
//        for (int k = i + 1; k < size_of_array; k++)
//        {
//
//            if (array_to_selection_sort[k] > array_to_selection_sort[minimum_index])
//                minimum_index = k;
//        }
//        int temp_var = array_to_selection_sort[minimum_index];
//        array_to_selection_sort[minimum_index] = array_to_selection_sort[i];
//        array_to_selection_sort[i] = temp_var;
//    }
//
//    cout << "\n--------------------------------------------------Sorted Array Value In Descending order-------------------------------\n";
//
//    PrintArray(array_to_selection_sort, size_of_array);
//}
//
//int main()
//{
//    int array_to_selection_sort[7] = { 64,34,25,12,22,11,90 };
//    int size_of_array = sizeof(array_to_selection_sort) / sizeof(array_to_selection_sort[0]);
//
//    //--------------------------OR-----------------------------------------//
//    //size=array_to_selection_sort.length();
//
//    cout << "\n--------------------------------------------------Original Array Value------------------------------------\n";
//    PrintArray(array_to_selection_sort, size_of_array);
//    SelectionSorting(array_to_selection_sort, size_of_array);
//    cout << endl;
//    cout << "Best case of Selection Sort is O(N^2)" << endl;
//    cout << "Average case of Selection Sort is O(N^2)" << endl;
//    cout << "Worst case of Selection Sort is also O(N^2)" << endl;
//
//    system("pause");
//    return 0;
//}
//
//
////Best case of Selection Sort is O(N^2);
////Average case of Selection Sort is O(N^2);
////Worst case of Selection Sort is also O(N^2);
//
//
//
//
