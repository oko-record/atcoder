#include <iostream>
#include <string>
using namespace std;

class Time
{
    private:
        int hour, minute, second, diff;
        string time;

    public:
        void getTime();
        string stringTime();
        Time(int hour, int minute, int second, int diff);

};

void Time::getTime()
{
    int i = 0, j = 0, temp;

    this->second += this->diff;
    temp = this->second;
    this->second %= 60;

    if (temp < 0)
    {
        if (this->second != 0)
        {
            this->second += 60;
            i += (temp / 60 -1);
        }
        else
        {
            i += (temp / 60);
        } 
    }
    else
    {
        i += (temp / 60);
    }

    this->minute += i;
    temp = this->minute;
    this->minute %= 60;

    if (temp < 0)
    {
        if (this->minute != 0)
        {
            this->minute += 60;
            j += (temp/ 60 -1);
        }
        else
        {
            j += (temp/ 60);
        }
        
    }
    else
    {
        j += (temp / 60);
    }

    this->hour += j;
    temp = this->hour;
    this->hour %= 24;
    if (temp < 0)
    {
        if (this->hour != 0)
        {
            this->hour += 24;
        }
    }
    else
    {
        this->hour %= 24;
    }

    //cout << this->hour << this->minute << this->second << endl;

    return;
}

string Time::stringTime()
{
    string time[3] = 
    {
        to_string(this->hour),
        to_string(this->minute),
        to_string(this->second)
    };

    int i = 0;
    for (auto data : {this->hour, this->minute, this->second})
    {
        if ( data < 10)
        {
            time[i] = "0" + time[i];
        }
        i++;
    }

    this->time = time[0] + ":" + time[1] + ":" + time[2];

    return this->time;
}

Time::Time(int hour, int minute, int second, int diff)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
    this->diff = diff;
}

int main()
{
    int hour, minute, second, diff;
    cin >> hour >> minute >> second;
    cin >> diff;
    Time time(hour, minute, second, diff);
    cout << time.stringTime() << endl;
    time.getTime();
    cout << time.stringTime() << endl;

    return 0;
}