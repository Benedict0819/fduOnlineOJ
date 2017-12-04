//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//int score[11];
//
//struct Student{
//	string id;
//	int total;
//};
//
//bool cmp(Student a,Student b){
//	if (a.total != b.total)
//		return a.total > b.total;
//	else
//		return a.id < b.id;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, g;
//	while (cin >> n && n){
//		cin >> m >> g;
//		for (int i = 1; i <= m; i++)
//			cin >> score[i];
//		Student *stu = new Student[n];
//		int a, b, count = 0;
//		for (int i = 0; i < n; i++){
//			cin >> stu[count].id;
//			cin >> a;
//			stu[count].total = 0;
//			for (int j = 0; j < a; j++){
//				cin >> b;
//				stu[count].total += score[b];
//			}
//			if (stu[count].total >= g)
//				count++;
//		}
//		cout << count << endl;
//		sort(stu, stu + count, cmp);
//		// 对向量中的第2个到第5个元素按member1进行升序排列
//		// sort(stu.begin()+1, stu.begin()+5, cmp);
//		for (int i = 0; i < count; i++){
//			if (stu[i].total >= g)
//				cout << stu[i].id << " " << stu[i].total << endl;
//		}
//		delete[] stu;
//	}
//	return 0;
//}