#include <iostream>

int namespace std;
int main()
{
        char q;
        float grades, gpa;
        cout << "enter the total grades:";
        cin >> grades;

        if (grades > 80)
                gpa = 4.0;
        else if (grades < 50)
                gpa = 0.0;
        else
                gpa = 2*((grades-50)/1.5)*0.1;
                cout << "gpa=" << gpa;


        cin >> q;
        return 0;
}
