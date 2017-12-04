//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//typedef struct {
//	string name;
//	string num;
//	int score;
//} student;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n; 
//	while (cin >> n){
//		student *stu = new student[n];
//		int a, b, max = -1, min = 101;
//		for (int i = 0; i < n; i++){
//			cin >> stu[i].name >> stu[i].num >> stu[i].score;
//			if (max < stu[i].score) { a = i; max = stu[i].score; }
//			if (min > stu[i].score) { b = i; min = stu[i].score; }
//		}
//		cout << stu[a].name << " " << stu[a].num << endl;
//		cout << stu[b].name << " " << stu[b].num << endl;
//
//		delete[] stu;
//	}
//}