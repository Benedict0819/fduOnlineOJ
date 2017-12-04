//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//
//struct student{
//	string id;
//	string name;
//	int score;
//};
//
//bool cmp1(student stu1, student stu2){
//	return stu1.id < stu2.id;
//}
//
//bool cmp2(student stu1, student stu2){
//	if (stu1.name == stu2.name)
//		return stu1.id < stu2.id;
//	else
//		return stu1.name < stu2.name;
//}
//
//bool cmp3(student stu1, student stu2){
//	if (stu1.score == stu2.score)
//		return stu1.id < stu2.id;
//	else
//		return stu1.score < stu2.score;
//}
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int n, c;
//	int count = 1;
//	while (cin >> n >> c && n){
//		student *stu = new student[n];
//		for (int i = 0; i < n; i++){
//			cin >> stu[i].id >> stu[i].name >> stu[i].score;
//		}
//
//		
//		switch (c){
//		case 1: sort(stu, stu + n, cmp1); break;
//		case 2: sort(stu, stu + n, cmp2); break;
//		case 3: sort(stu, stu + n, cmp3); break;
//		default:
//			break;
//		}
//
//		cout << "Case" << " " << count++ << ":" << endl;
//		for (int i = 0; i < n; i++)
//			cout << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
//
//		delete[] stu;
//	}
//	return 0;
//}