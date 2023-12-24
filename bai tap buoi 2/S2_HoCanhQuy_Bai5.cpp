#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    if(ngay == 1 && thang == 1)
    {
        cout << "Ngay hom truoc: " << 31 << "/" << 12 << "/" << nam - 1 << endl;
        cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
        cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
    }
    else if(ngay == 31 && thang == 12)
    {
        cout << "Ngay hom truoc: " << ngay - 1  << "/" << thang << "/" << nam  << endl;
        cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
        cout << "Ngay hom sau: " << 1 << "/" << 1 << "/" << nam + 1 << endl;
    }
    //kiem tra nam nhuan
    else if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(ngay < 0 || ngay > 31)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 31)
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        case 2:
            if(ngay < 0 || ngay > 29)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 29)
            {
                cout << "Ngay hom truoc:" << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay:" << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(ngay < 0 || ngay > 30)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 30)
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        }
    }
    else
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(ngay < 0 || ngay > 31)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 31)
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        case 2:
            if(ngay < 0 || ngay > 28)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 28)
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(ngay < 0 || ngay > 30)
            {
                cout << "Ngay nay khong ton tai";
            }
            else if(ngay == 30)
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else if(ngay == 1)
            {
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
            }
            else
            {
                cout << "Ngay hom truoc: " << ngay - 1 << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom nay: " << ngay  << "/" << thang << "/" << nam << endl;
                cout << "Ngay hom sau: " << ngay + 1 << "/" << thang << "/" << nam << endl;
            }
            break;
        }
    }
    return 0;
}
