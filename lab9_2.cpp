#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
	dest << "-------------------- BOOM ---------------------" << endl;
	dest << "AR CHI\n";
	dest << "AR BOW\n";
	dest << "CHOW CHOW\n";
	dest << "BA KA\n";
	dest << "BA GEAR\n";
	dest << "CHEER CHEER\n";
	dest << "WE ARE ALL\n";
	dest << "ENTANEER\n";
	dest << "CMU\n";
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}