//#include <iostream>
//#include <string>
//using namespace std;
//
//bool palindromicSubset(string rev, int i) {
//    if (i >= rev.length()) {
//        return true;
//    }
//    if (rev[i] != rev[rev.length() - 1 - i]) 
//    { 
//        return false;
//    }
//    return palindromicSubset(rev, i + 1);
//}
//
//void subset(string str, string temp) {
//    if (str.empty()) {
//        if (!temp.empty() && palindromicSubset(temp, 0)) 
//        {
//            cout << "Palindromic seq is :  " << temp << endl;
//        }
//        return;
//    }
//
//    subset(str.substr(1), temp);
//    subset(str.substr(1), temp + str[0]);
//}
//
//int main() {
//    string str = "abba";
//    int len = str.length();
//    subset(str, "");
//
//    return 0;
//}
