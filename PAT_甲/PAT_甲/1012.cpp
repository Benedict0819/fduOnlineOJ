//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//struct student{
//	int id;
//	int score[4];  // 记录学生成绩 C M E A
//	int rank[4];   // 记录成绩排名
//};
//
//int cmpa(student stu1, student stu2){
//	return stu1.score[0] > stu2.score[0];
//}
//int cmpc(student stu1, student stu2){
//	return stu1.score[1] > stu2.score[1];
//}
//int cmpm(student stu1, student stu2){
//	return stu1.score[2] > stu2.score[2];
//}
//int cmpe(student stu1, student stu2){
//	return stu1.score[3] > stu2.score[3];
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m;
//	cin >> n >> m;
//	char nums[4] = { 'A', 'C', 'M', 'E' };
//	student *stu = new student[n];
//	for (int i = 0; i < n; i++){
//		cin >> stu[i].id;
//		cin >> stu[i].score[1] >> stu[i].score[2] >> stu[i].score[3];
//		stu[i].score[0] = (stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3;
//	}
//	sort(stu, stu + n, cmpa);   
//	for (int i = 0; i < n; i++){   
//		for (int j = 0; j < n; j++){   // 解决并列排序
//			if (stu[i].score[0] == stu[j].score[0]){
//				stu[i].rank[0] = j + 1;
//				break;
//			}
//		}
//	}
//	sort(stu, stu + n, cmpc);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){   // 解决并列排序
//			if (stu[i].score[1] == stu[j].score[1]){
//				stu[i].rank[1] = j + 1;
//				break;
//			}
//		}
//	}
//	sort(stu, stu + n, cmpm);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){   // 解决并列排序
//			if (stu[i].score[2] == stu[j].score[2]){
//				stu[i].rank[2] = j + 1;
//				break;
//			}
//		}
//	}
//	sort(stu, stu + n, cmpe);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){   // 解决并列排序
//			if (stu[i].score[3] == stu[j].score[3]){
//				stu[i].rank[3] = j + 1;
//				break;
//			}
//		}
//	}
//	int check, min, mark;
//	while (m--){
//		cin >> check;
//		min = n + 1;
//		mark = 4;
//		for (int i = 0; i < n; i++){
//			if (check == stu[i].id){
//				for (int j = 0; j < 4; j++){
//					if (min > stu[i].rank[j]){
//						min = stu[i].rank[j];
//						mark = j;
//					}
//				}
//			}
//		}
//		if (min == n + 1) cout << "N/A" << endl;
//		else cout << min << " " << nums[mark] << endl;
//	}
//
//	delete[] stu;
//	return 0;
//}
//
