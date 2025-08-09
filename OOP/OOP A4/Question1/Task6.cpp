#include <iostream>
using namespace std;

class CalendarDate
{
public:
    int day;
    int month;
    int year;

    void showDate()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

class ClockTime
{
public:
    int hour;
    int minute;
    int second;

    void showTime()
    {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
};

class DateTime : public CalendarDate, public ClockTime
{
public:
    void showDateTime()
    {
        CalendarDate::showDate();
        ClockTime::showTime();
    }
};

int main()
{
    DateTime dateTime;
    dateTime.day = 1;
    dateTime.month = 6;
    dateTime.year = 2025;
    dateTime.hour = 10;
    dateTime.minute = 30;
    dateTime.second = 0;
    dateTime.showDateTime();

    return 0;
}