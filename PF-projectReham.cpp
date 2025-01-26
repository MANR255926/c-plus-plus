#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Welcome to the Smart Tourism Guide for Pakistan!"<<endl;
	cout<<endl;
	
	string cities[7]={"Lahore","Islamabad","Karachi","Peshawar","Hunza","Swat","Quetta"};
	cout<<"Available cities for tourism in Pakistan:"<<endl;
	for(int i=0;i<7;i++)
{
		cout<<"- "<<cities[i];
		cout<<endl;
	}
	cout<<endl;
	cout<<"Enter the name of city you want to explore ";
	string city;
	cin>>city;
	
	if(city=="Lahore"){
		cout<<"The tourist attractions in Lahore are:"<<endl;
	string lahore[4]={"Badshahi Mosque", "Lahore Fort", "Shalimar Gardens", "Minar-e-Pakistan"};
	for(int j=0;j<4;j++)
	cout<<"- "<<lahore[j]<<endl;
	}
	
	else if(city=="Islamabad"){
		cout<<"The tourist attractions in Islamabad are:"<<endl;
	string islamabad[4]={"Faisal Mosque", "Daman-e-Koh", "Pakistan Monument", "Rawal Lake"};
	for(int k=0;k<4;k++)
	cout<<"- "<<islamabad[k]<<endl;
	}
	
	else if(city=="Karachi"){
		cout<<"The tourist attractions in Karachi are:"<<endl;
	string karachi[4]={"Clifton Beach", "Mazar-e-Quaid", "Mohatta Palace", "Churna Island"};
	for(int l=0;l<4;l++)
	cout<<"- "<<karachi[l]<<endl;
	}
	
	else if(city=="Peshawar"){
		cout<<"The tourist attractions in Peshawar are:"<<endl;
	string peshawar[4]={"Qissa Khwani Bazaar", "Bala Hisar Fort", "Peshawar Museum", "Sethi House"};
	for(int m=0;m<4;m++)
	cout<<"- "<<peshawar[m]<<endl; 
	}
	
	else if(city=="Hunza"){
		cout<<"The tourist attractions in Hunza are:"<<endl;
	string hunza[4]= {"Attabad Lake", "Baltit Fort", "Passu Cones", "Eagle's Nest"};
	for(int n=0;n<4;n++)
	cout<<"- "<<hunza[n]<<endl;
	}
	
	else if(city=="Swat"){
		cout<<"The tourist attractions in Swat are:"<<endl;
	string swat[4]= {"Malam Jabba", "Kalam Valley", "Bahrain", "Ushu Forest"};
	for (int a=0;a<4;a++)
	cout<<"- "<<swat[a]<<endl;
	}
	
	else if(city=="Quetta"){
		cout<<"The tourist attractions in Quetta are:"<<endl;
	string quetta[4]= {"Hanna Lake", "Quaid-e-Azam Residency", "Ziarat Valley", "Hazarganji Chiltan National Park"};
	for (int b=0;b<4;b++)
	cout<<"- "<<quetta[b]<<endl;
	}
	
	else
	cout<<"City not recognized or not available on the list"<<endl;
	
	cout<<endl;
	int days;
	cout<<"Choose your package duration (5, 10 or 15 days) ";
	cin>>days;
	
    switch (days) {
        case 5:
            cout<<"price for 5 days"<<"= "<<"10000"<<endl;
            break;
        case 10:
            cout<<"price for 10 days"<<"= "<<"18000"<<endl;
            break;
        case 15:
            cout<<"price for 15 days"<<"= "<<"24000"<<endl;
            break;
        default:
            cout << "Invalid number of days. Please choose 5, 10, or 15 days"<<endl;
}
}