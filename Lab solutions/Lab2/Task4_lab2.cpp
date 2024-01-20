//#include <iostream>
//using namespace std;
//void PrintArray(int array[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Array " << i << "  index value :  " << array[i] << endl;
//    }
//}
//void BinarySearch(int array_to_binary_search[], int start, int end, int num)
//{
//    int mid=(start + end) / 2;
//    while (start <= end)
//    {
//        if (array_to_binary_search[mid] < num)
//            start = mid + 1;
//        else if (array_to_binary_search[mid] == num)
//        {
//            cout << "\nThe number, " << num << " found at Position " << mid + 1;
//            break;
//        }
//        else
//            end = mid - 1;
//        mid = (start + end) / 2;
//    }
//    if (start > end)
//        cout << "\nThe number, " << num << " is not found in given Array";
//    cout << endl;
//
//    
//
//   
//}
//
//int main()
//{
//    int array_to_binary_search[7] = { 0 },start=0,end=6,num=0;
//    cout << "Please enter 7 values : \n";
//    for (int i = 0; i < 7; i++)
//    {
//        cout << i+1 << " value : ";
//            cin >> array_to_binary_search[i];
//    }
//    cout << "\n Please enter value to find : ";
//    cin >> num;
//    BinarySearch(array_to_binary_search, start, end, num);
//    cout << endl;
//    cout << "Best case of Binary Search is O(1)"<<endl;
//    cout << "Average case of Binary Search is O(logn)" << endl;
//    cout << "Worst case of Binary Search is also O(logn)" << endl;
//    system("pause");
//    return 0;
//}
//
//
////Best case of Binary Search is O(1);
////Average case of Binary Search is O(logn);
////Worst case of Binary Search is also O(logn);
//
//
//
//
