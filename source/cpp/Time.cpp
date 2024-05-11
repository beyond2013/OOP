#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() = default; // new syntax for default constructor

    void setTime(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    void showTime()
    {
        // cout << hours << " : " << minutes << " : " << seconds << endl;
        cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << this->seconds << endl;
    }

    void addTime(Time t1, Time t2)
    {
        this->seconds = t1.seconds + t2.seconds;
        minutes = 0;
        if (this->seconds >= 60)
        {
            this->seconds -= 60;
            this->minutes++;
        }
        this->minutes += t1.minutes + t2.minutes;
        this->hours = 0;
        if (this->minutes >= 60)
        {
            this->minutes -= 60;
            this->hours++;
        }
        this->hours += t1.hours + t2.hours;
    }
    /* void subTime(Time t1, Time t2)
     {
         seconds = 0;
         minutes = 0;
         if (t1.seconds >= t2.seconds)
         {
             seconds = t1.seconds - t2.seconds;
         }
         else
         {
             t1.minutes--;
             t1.seconds += 60;
             seconds = t1.seconds - t2.seconds;
         }

         // minutes -= (t1.minutes - t2.minutes);
         hours = 0;
         if (t1.minutes >= t2.minutes)
         {
             minutes = t1.minutes - t2.minutes;
         }
         else
         {
             t1.hours--;
             t1.minutes += 60;
         }

         hours = t1.hours - t2.hours;
     }
     */
};

int main()
{

    Time t1, t2, t3, t4;
    t1.setTime(6, 32, 32);
    t2.setTime(5, 34, 34);
    cout << "Time of t1" << endl;
    t1.showTime();
    cout << "Time of t2" << endl;
    t2.showTime();
    cout << "Addition of t1 and t2" << endl;
    t3.addTime(t1, t2);
    t3.showTime();
    cout << "Subtraction of t1 and t2" << endl;
    // t4.subTime(t1, t2);
    t4.showTime();
    Time t5 = t4;
    t5.showTime();
    Time t6(t1);
    t6.showTime();
    return 0;
}