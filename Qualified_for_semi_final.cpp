#include <iostream>

using namespace std;

 int main()
{
    bool slwin, israin, islessnrrofnz, isafglose, ispakistanwon;

    string slwinip, israinip, islessnrrofnzip, isafgloseip, ispakistanwonip;

    cout << "Is Sri Lanka win: " << endl;
    cin >> slwinip;

    cout << "Is rain: " << endl;
    cin >> israinip;

    cout << "Is less net run rate of New Zealand: " << endl;
    cin >> islessnrrofnzip;

    cout << "Is Afghanistan lose: " << endl;
    cin >> isafgloseip;

    cout << "Is Pakistan won: " << endl;
    cin >> ispakistanwonip;

    slwin = (slwinip == "yes");
    israin = (israinip == "yes");
    islessnrrofnz = (islessnrrofnzip == "yes");
    isafglose = (isafgloseip == "yes");
    ispakistanwon = (ispakistanwonip == "yes");

    if ((slwin || israin || islessnrrofnz) && isafglose && ispakistanwon) {
        cout << "Pakistan Qualified for the semi-final" << endl;
    } else {
        cout << "Pakistan did not qualify for the semi-final" << endl;
    }

    return 0;
}


