#include<iostream>
#include<string>
using namespace std;

int main(){
	string count[5] = {"A","B","C","D","F"}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade, x="0";
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int countA=0, countB=0, countC=0, countD=0, countF=0, i=1;
	while(grade != x){
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		if(grade == count[0]){
			countA++;
		} 
		else if(grade == count[1]){
			countB++;
		}
		else if(grade == count[2]){
			countC++;
		}
		else if(grade == count[3]){
			countD++;                 
		}
		else if(grade == count[4]){
			countF++;
		}
		else if(grade == x){
				cout << "In total " << i-1 << " students.\n";
		}else{ 
			cout << "Wrong input. Please input again.\n";
			i--;
		}
		i++;
	}
	
	
	//cout << "In total " << i-1 << " students.\n";
	cout << "A = " << countA <<", ";
	cout << "B = " << countB <<", ";
	cout << "C = " << countC <<", ";
	cout << "D = " << countD <<", ";
	cout << "F = " << countF;	
	
	return 0;
}
