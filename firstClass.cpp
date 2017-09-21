#include <iostream>
using namespace std;

class smallobj          //Define class
{
private:
    int somedata;       //Class Data
public:
    void setdata(int d) //Member function to set data
    {
        somedata =d;
    }
    void showdata()     //Member function to display/get data
    {
        cout<<"Data is " << somedata << endl;
    }
};
int main()
{
    //Create instances or a member of the class
    smallobj s1, s2, s3, s4;
    //Dot operator
    s1.setdata(8);      //Set the data
    s1.showdata();      //Show the data
    s2.setdata(9);
    s2.showdata();
    s3.setdata(10);
    s3.showdata();
    return 0;
}