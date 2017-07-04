#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

int main() {
cout<<"Project 1: Grade Calculator"<<endl;
long prelab, project, labfails, exam, grade;
double labreduce,finalg;
cout<<"Exam score:"<<endl;
cin>>exam;
cout<<"Pre-Lab subtotal score:"<<endl;
cin>>prelab;
cout<<"Project subtotal score:"<<endl;
cin>>project;
cout<<"Number of failed labs:"<<endl;
cin>>labfails;
grade = exam+prelab+project;
cout<<"Point Total:"<<grade<<endl;
labreduce =(labfails-2)*0.5;
cout << boolalpha;
if (grade >= 900){
  cout<<"Unadjusted Grade:4.0"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails <= 2){
			cout <<"Final Grade:4.0"<<endl;
		}
		else{
			finalg = 4.0 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade >= 850 and grade <= 899){
  cout<<"Unadjusted Grade:3.5"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails < 2){
			cout <<"Final Grade:3.5"<<endl;
		}
		else{
			finalg = 3.5 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade >= 800 and grade <= 849){
  cout<<"Unadjusted Grade:3.0"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails < 2){
			cout <<"Final Grade:3.0"<<endl;
		}
		else{
			finalg = 3.0 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade >= 750 and grade <= 799){
  cout<<"Unadjusted Grade:2.5"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails <= 2){
			cout <<"Final Grade:2.5"<<endl;
		}
		else{
			finalg = 2.5 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade >= 700 and grade <= 749){
  cout<<"Unadjusted Grade:2.0"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails <= 2){
			cout <<"Final Grade:2.0"<<endl;
		}
		else{
			finalg = 2.0 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade >= 600 and grade <= 699){
  cout<<"Unadjusted Grade:1.0"<<endl;
  cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
  cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	if (exam<150 or project<300){
		cout<<"Final Grade:0.0"<<endl;
	}
	else{
		if (labfails <= 2){
			cout <<"Final Grade:1.0"<<endl;
		}
		else{
			finalg = 1.0 - labreduce;
			if (finalg >=1.0){
			cout <<"Final Grade:"<<finalg<<endl;
			}
			else{
			cout <<"Final Grade:0.0"<<endl;
			}
		}
	}
}
else if (grade < 600){
	 cout<<"Unadjusted Grade:0.0"<<endl;
	cout<<"Penalty For Failed Labs Applies:"<<(labfails>2)<<endl;
	cout << "Can not pass due to too few points on projects or exam:"<<(exam<150 or project<300)<<endl;
	cout <<"Final Grade:0.0"<<endl;

	}

}
