//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    int count=0;
    float sum=0, sumSq=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumSq += pow(atof(textline.c_str()),2);
        count++;
}

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << pow((float)1/count*sumSq-(float)pow((sum/count),2),0.5);
    return 0;
}