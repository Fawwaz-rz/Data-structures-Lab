//#include<iostream>
//#include<vector>
//using namespace std;
//void printSolution(int dist[]) {
//	for (int i = 0; i < 6; i++)
//		cout << i << " \t " << dist[i] << "\n";
//}
//int main()
//{
//	int matrix[6][6]={ 
//	 {0,0,0,6,0,0}
//	,{8,0,0,7,4,9}
//	,{0,6,0,3,0,0}
//	,{0,0,0,0,2,0}
//	,{0,0,0,2,0,0}
//	,{5,0,0,0,0,0}
//	};
//	int indexforset = 0;
//	int indexforQ = 0;
//	int indexfordist = 1;
//	int dist[6] = {0,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX };
//	int set[6] = {0,0,0,0,0,0};
//	int  Q[6] = {0,1,2,3,4,5};
//	for (int  i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (matrix[i][j]!=0)
//			{
//				set[i] = Q[i];
//				cout << matrix[i][j] << "  |  ";
//			}
//			
//		}
//		cout << endl;
//		for (int v = 0; v < 6; v++) {
//			if (!set[v] && matrix[i][v] && dist[i] != INT_MAX && dist[i] + matrix[i][v] < dist[v])
//				dist[v] = dist[i] + matrix[i][v];
//		}
//		
//	}
//	printSolution(dist);
//}
//
//
//
//
