//#include<iostream>
//#include<vector>
//using namespace std;

//
//bool belongTo(int element, vector <int>& vec) {
//	bool flag = 0;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		if (vec[i] == element)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	return flag;
//}
//bool NotbelongTo(int element, vector<int>& vec) {
//	bool flag = 0;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		if (vec[i] == element)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	return !flag;
//}
//bool is_A_subset_of_B(vector <int>& A, vector <int>& B)
//{
//	int counter = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		if (belongTo(A[i], B))
//		{
//			counter++;
//		}
//	}
//	return (counter == A.size());
//}
//
//
//
//
//void GiveUnion(vector <int>& A, vector <int>& B, vector <int>& Uni)
//{
//	for (int i = 0; i < A.size(); i++)// push A elements
//	{
//		Uni.push_back(A[i]);
//	}
//	
//	for (int i = 0; i < B.size(); i++)// push B elements Carefully
//	{
//		
//		if (NotbelongTo(B[i],A))
//		{
//			Uni.push_back(B[i]);
//		}
//	}
//	
//}
//
//
//
//void A_Diff_B(vector <int>& A, vector <int>& B, vector <int>& Diff) {
//	for (int  i = 0; i < A.size(); i++)
//	{
//		if (NotbelongTo(A[i], B))
//		{
//			Diff.push_back(A[i]);
//		}
//	}
//
//}
//void A_Sum_Diff_B(vector <int>& A, vector <int>& B, vector <int>& A_Sym_Diff_B0)
//{
//
//	vector <int> diff1;
//	A_Diff_B(A, B, diff1);
//	vector <int> diff2;
//	// put B-A
//	A_Diff_B(B, A, diff2);
//	GiveUnion(diff1, diff2, A_Sym_Diff_B0);
//}
//
//void GiveOverlapping(vector <int>& A, vector <int>& B, vector <int>& OverLap)
//{
//	for (int i = 0; i < A.size(); i++)
//	{
//		if (belongTo(A[i], B))
//		{
//			OverLap.push_back(A[i]);
//		}
//	}
//}
//
//int main()
//{
//	vector<int> A = { 1,2,3,6 ,7};
//	vector<int> B = { 3,4,5,6 };
//	vector<int> Uni;
//	vector<int> OverLap;
//	vector<int> A_Diff_B_0;
//	vector<int> A_Sym_Diff_B_0;
//
//	vector<int> C = { 1,2};
//	vector<int> D = { 4,5};
//
//	// belong & notBelong
//	/*int element = 5;
//	cout << belongTo(element, A)<<endl;
//	cout << NotbelongTo(element, A);*/
//
//	// subset
//	/*cout << is_A_subset_of_B(C, A)<<endl;
//	cout << is_A_subset_of_B(D, B);*/
//
//
//
//	// union -- a bug-----------------------------
//
//	
//	/*GiveUnion(A, B,Uni);
//	for (int i = 0; i < Uni.size(); i++)
//	{
//		cout << Uni[i] << " ";
//	}
//	*/
//
//	//overlapping 
//
//	GiveOverlapping(A, C, OverLap);
//	for (int i = 0; i < OverLap.size(); i++)
//	{
//		cout << OverLap[i] << " ";
//	}
//
//
//	// Diff
//	/*A_Diff_B(A, B, A_Diff_B_0);
//	for (int i = 0; i < A_Diff_B_0.size(); i++)
//	{
//		cout << A_Diff_B_0[i] << " ";
//	}*/
//
//	// sym.diff
//	/*A_Sum_Diff_B(A, B, A_Sym_Diff_B_0);
//	for (int i = 0; i < A_Sym_Diff_B_0.size(); i++)
//	{
//		cout << A_Sym_Diff_B_0[i] << " ";
//	}*/
//	
//	
// 
// 
//
//	
//}

#include<iostream>
#include<vector>
using namespace std;
bool Belong_To(vector <int>& A, int element)
{
	bool flag = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == element)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
int main()
{
	vector <int>A = { 1,2,3 };
	int x = 3;
/// is x belong to A
	cout<<Belong_To(A, x);


}
