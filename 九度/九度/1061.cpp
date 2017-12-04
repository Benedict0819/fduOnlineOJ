//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//struct Student{
//	string name;
//	int age;
//	int score;
//};
//
//int cmp(Student stu1, Student stu2){
//	if (stu1.score == stu2.score)
//		if (stu1.name == stu2.name)
//			return stu1.age < stu2.age;
//		else
//			return stu1.name < stu2.name;
//	else
//		return stu1.score < stu2.score;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n){
//		vector<Student> stu(n);
//		for (int i = 0; i < n; i++)
//			cin >> stu[i].name >> stu[i].age >> stu[i].score;
//		sort(stu.begin(), stu.end(), cmp);
//		for (int i = 0; i < n; i++)
//			cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
//	}
//	return 0;
//} 