#include<iostream>
using namespace std;
class Time
{
	int minutes;
	int seconds;
	public:
		
		Time()
		{
			minutes=0;
			seconds=0;
		}
		Time(int m,int s)
		{
			minutes=m+s/60;
			seconds=s%60;
		}
		void input()
		{
			cout<<"enter minutes:"<<endl;
			cin>>minutes;
			cout<<"enter second:"<<endl;
			cin>>seconds;}
			
			int TotalSeconds()
			{
				return minutes*60+seconds;
			}
		
   static void calculateWorkingTime(Time in, Time out) {
        int totalIn = in.TotalSeconds();
        int totalOut = out.TotalSeconds();
        int diff = totalOut - totalIn;

        if (diff < 0) {
            cout << "Check-Out time is earlier than Check-In time!" << endl;
            return;
        }

        int hours = diff / 3600;
        int minutes = (diff % 3600) / 60;
        int seconds = diff % 60;

        cout << "\nWorking Time: " << hours << " Hour(s), " 
             << minutes << " Minute(s), " 
             << seconds << " Second(s)" << endl;
    }
};

int main() {
    Time checkIn, checkOut;

    checkIn.input();
    checkOut.input();

    Time::calculateWorkingTime(checkIn, checkOut);

    return 0;
}

