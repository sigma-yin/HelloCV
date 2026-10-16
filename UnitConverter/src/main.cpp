#include <iostream>
#include "unitlib.h"
using namespace std;

int main(){
	int choice;
	double a,b;
	cout<<"单位转换器"<<"\n";
	cout<<"1.摄氏度--华氏度"<<"\n";
	cout<<"2.华氏度--摄氏度"<<"\n";
	cout<<"3.米--英尺"<<"\n";
	cout<<"4.英尺--米"<<"\n";
	cout<<"5.磅--千克"<<"\n";
	cout<<"6.千克--磅"<<"\n";
	cout<<"请输入选项"<<"\n";
	cin>>choice;
	cout<<"输入待转换数值:";
	cin>>a;

        switch (choice)
    {
        case 1: b = celsius_fahrenheit(a); cout << "结果：" << b << " °F\n"; break;
        case 2: b = fahrenheit_celsius(a); cout << "结果：" << b << " °C\n"; break;
        case 3: b = meter_foot(a); cout << "结果：" << b << " ft\n"; break;
        case 4: b = foot_meter(a); cout << "结果：" << b << " m\n"; break;
        case 5: b = pound_kilogram(a); cout << "结果：" << b << " kg\n"; break;
        case 6: b = kilogram_pound(a); cout << "结果：" << b << " lb\n"; break;
        default: cout << "输入选项无效\n";
    }
    return 0;
}
