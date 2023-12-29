#include <iostream>
#include <fstream>
#include <string>
#include<cstring>
using namespace std;
class customer_info
{
public:
    char name[30];
    string car[30];
    int age = 0, lno;

    void getdata()
    {
        cout << "\tEnter name:";
        fflush(stdin);
        gets(name);
        cout << "\tEnter your license number:";
        cin >> lno;
        while (age < 18)
        {
            cout << "\tEnter age:";
            cin >> age;

            if (age < 18)
            {
                cout << "\tAge entered is wrong." << endl;
                cout << "\tRenter!";
                cout << endl;
            }
            if (age >= 18)
            {
                break;
            }
        }
    }
};

class cars
{
protected:
    int location, cost;
    string cars[30] = {"\t\t1.Suzuki Swift\t\t", "\n\t\t2.Ford Ecosport\t\t", "\n\t\t3.Toyota Fortuner\t", "\n\t\t4.Audi A4\t\t", "\n\t\t1.Hyundai i20\t\t", "\n\t\t2.Hyundai Creta\t\t", "\n\t\t3.Mahindra XUV 500\t", "\n\t\t4.BMW 3 series\t\t", "\n\t\t1.Tata Tiago\t\t", "\n\t\t2.Suzuki Brezza\t\t", "\n\t\t3.Mahindra Marazzo\t", "\n\t\t4.Mercedes C Class\t", "\n\t\t1.Ford Freestyle\t", "\n\t\t2.Tata Nexon\t\t", "\n\t\t3.Tata Hexa\t\t", "\n\t\t4.Audi A6\t\t", "\n\t\t1.Suzuki Baleno\t\t", "\n\t\t2.Hyundai Verna\t\t", "\n\t\t3.Toyota Innova\t\t", "\n\t\t4.BMW 5 Series\t\t", "\n\t\t1.VW Polo\t\t", "\n\t\t2.Honda City\t\t", "\n\t\t3.Mahindra Scorpio\t", "\n\t\t4.Mercedes E Class\t"};
    string colour[30] = {"Red\t\t", "White\t\t", "White\t\t", "Black\t\t", "Red\t\t", "White\t\t", "Red\t\t", "Black\t\t", "Orange\t\t", "Red\t\t", "Blue\t\t", "White\t\t", "Brown\t\t", "Blue\t\t", "White\t\t", "White\t\t", "Blue\t\t", "Black\t\t", "White\t\t", "Blue\t\t", "Red\t\t", "White\t\t", "Red\t\t", "Black\t\t"};
    string fuel[30] = {"Petrol\t\t", "Petrol\t\t", "Diesel\t\t", "Diesel\t\t", "Petrol\t\t", "Diesel\t\t", "Diesel\t\t", "Petrol\t\t", "Petrol\t\t", "Diesel\t\t", "Petrol\t\t", "Petrol\t\t", "Petrol\t\t", "Petrol\t\t", "Diesel\t\t", "Diesel\t\t", "Petrol\t\t", "Diesel\t\t", "Diesel\t\t", "Petrol\t\t", "Petrol\t\t", "Pterol\t\t", "Diesel\t\t", "Diesel\t\t"};
    string capacity[30] = {"5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t", "5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t", "5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t", "5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t", "5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t", "5 seater\t", "5 seater\t", "7 seater\t", "5 seater\t"};
    string city[30] = {"Haryana\t\t", "Haryana\t\t", "Haryana\t\t", "Haryana\t\t", "Himachal Pradesh\t", "Himachal Pradesh\t", "Himachal Pradesh\t", "Himachal Pradesh\t", "Maharashtra\t\t", "Maharashtra\t\t", "Maharashtra\t\t", "Maharashtra\t\t", "Punjab\t\t", "Punjab\t\t", "Punjab\t\t", "Punjab\t\t", "Uttar Pradesh\t", "Uttar Pradesh\t", "Uttar Pradesh\t", "Uttar Pradesh\t", "Uttarakhand\t\t", "Uttarakhand\t\t", "Uttarakhand\t\t", "Uttarakhand\t\t"};
    int price[30] = {2000, 2500, 3000, 4000, 2000, 2500, 3000, 4000, 2000, 2500, 3000, 4000, 2000, 2500, 3000, 4000, 2000, 2500, 3000, 4000, 2000, 2500, 3000, 4000};

public:
    void pick()
    {
        cout << "SERIVCES AVAILABLE IN:" << endl;
        cout << "1.Haryana" << endl;
        cout << "2.Himachal pradesh" << endl;
        cout << "3.Maharashtra" << endl;
        cout << "4.Punjab" << endl;
        cout << "5.Uttar Pradesh" << endl;
        cout << "6.Uttrakhand";
        cout << endl;
        cout << "Enter the serial number of your location: ";
        cin >> location;
        switch (location)
        {
        case 1:
            booking_location1();
            break;
        case 2:
            booking_location2();
            break;
        case 3:
            booking_location3();
            break;
        case 4:
            booking_location4();
            break;
        case 5:
            booking_location5();
            break;
        case 6:
            booking_location6();
            break;
        default:
            cout << "Wrong choice entered" << endl;
            break;
        }
    }

    void booking_location1()
    {
        int a;
        cout << "\n\t\tAvailable cars in Haryana are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t"
             << "\tCost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
        }

        cout << "\n\t\tEnter your choice:";
        cin >> a;
        while (a > 4 || a < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> a;
            if (a <= 4 && a > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:\n";
        cout << cars[a - 1];
        cout << colour[a - 1];
        cout << fuel[a - 1];
        cout << capacity[a - 1];
        cout << city[a - 1];
        cout << price[a - 1] << endl;
        cost = price[a - 1];
    };

    void booking_location2()
    {
        int b;
        cout << "\n\t\tAvailable cars in Himachal Pradesh are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t\t"
             << "\tCost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 4; i < 8; i++)
        {
            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
        }
        cout << "\n\t\tEnter your choice:";
        cin >> b;

        while (b > 4 || b < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> b;
            if (b <= 4 && b > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:" << endl;
        cout << cars[b + 3];
        cout << colour[b + 3];
        cout << fuel[b + 3];
        cout << capacity[b + 3];
        cout << city[b + 3];
        cout << price[b + 3] << endl;
        cost = price[b + 3];
    }

    void booking_location3()
    {
        int c;
        int count = 0;
        cout << "\n\t\tAvailable cars in Maharashtra are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t\t"
             << "\tCost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 8; i < 12; i++)
        {
            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
        }
        cout << "\n\t\tEnter your choice:";
        cin >> c;
        while (c > 4 || c < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> c;
            if (c <= 4 && c > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:" << endl;
        cout << cars[c + 7];
        cout << colour[c + 7];
        cout << fuel[c + 7];
        cout << capacity[c + 7];
        cout << city[c + 7];
        cout << price[c + 7] << endl;
        cost = price[c + 7];
    }

    void booking_location4()
    {
        int d;
        int count = 0;
        cout << "\n\t\tAvailable cars in Punjab are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t\t"
             << "Cost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 12; i < 16; i++)
        {
            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
        }
        cout << "\n\t\tEnter your choice:";
        cin >> d;
        while (d > 4 || d < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> d;
            if (d <= 4 && d > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:" << endl;
        cout << cars[d + 11];
        cout << colour[d + 11];
        cout << fuel[d + 11];
        cout << capacity[d + 11];
        cout << city[d + 11];
        cout << price[d + 11] << endl;
        cost = price[d + 11];
    }

    void booking_location5()
    {
        int e;
        int count = 0;
        cout << "\n\t\tAvailable cars in Uttar Pradesh are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t\t"
             << "Cost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 16; i < 20; i++)
        {

            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
            count++;
        }

        cout << "\n\t\tEnter your choice:";
        cin >> e;
        while (e > 4 || e < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> e;
            if (e <= 4 && e > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:" << endl;
        cout << cars[e + 15];
        cout << colour[e + 15];
        cout << fuel[e + 15];
        cout << capacity[e + 15];
        cout << city[e + 15];
        cout << price[e + 15] << endl;
        cost = price[e + 15];
    }

    void booking_location6()
    {
        int f;
        int count = 0;
        cout << "\n\t\tAvailable cars in Uttrakhand are:" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "State\t\t"
             << "\tCost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        for (int i = 20; i < 24; i++)
        {

            cout << cars[i];
            cout << colour[i];
            cout << fuel[i];
            cout << capacity[i];
            cout << city[i];
            cout << price[i] << endl;
        }

        cout << "\n\t\tEnter your choice:";
        cin >> f;
        while (f > 4 || f < 0)
        {
            cout << "Invalid choice" << endl;
            cout << "Re-enter choice:";
            cin >> f;
            if (f <= 4 && f > 0)
            {
                break;
            }
            else
            {
                exit(3);
            }
        }
        cout << "\n\t\tYour choice is:" << endl;
        cout << cars[f + 19];
        cout << colour[f + 19];
        cout << fuel[f + 19];
        cout << capacity[f + 19];
        cout << city[f + 19];
        cout << price[f + 19] << endl;
        cost = price[f + 19];
    }

    int get_cost()
    {
        return cost;
    }
};

class price
{
protected:
    int total, days;
    int car_price;

public:
    price(cars c)
    {
        car_price = c.get_cost();
    }

    void rent()
    {
        cout << "\n\t\tEnter the No. of days for car rent:";
        cin >> days;
        total = days * car_price;
        cout << "\t\tTotal cost for " << days << " days is " << total << endl;
    }
};

class listing_car : public cars
{
protected:
    string car_name;
    string listcolour;
    string listfuel;
    string listcity;
    string listcapacity;
    int listprice;

public:
    void listing()
    {
        cout << "\tEnter the name of the car: ";
        fflush(stdin);
        getline(cin, car_name);

        cout << "\tEnter the colour of the car: ";
        cin >> listcolour;

        cout << "\tEnter the fuel type(Petrol/diesel): ";
        cin >> listfuel;

        cout << "\tEnter the seating capacity of the car: ";
        cin >> listcapacity;

        cout << "\tEnter the rent per day at you want to list it out: ";
        cin >> listprice;

        cout << "\tEnter the city where u want to rent out the car: ";
        cin >> listcity;

        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\tModel\t\t"
             << "\tColour\t\t"
             << "Fuel\t"
             << "\tCapacity\t"
             << "City\t\t"
             << "Cost/day" << endl;
        cout << "\t\t********************************************************************************************************" << endl;
        cout << "\t\t" << car_name << "\t\t";
        cout << listcolour << "\t\t";
        cout << listfuel << "\t\t";
        cout << listcapacity << "\t\t";
        cout << listcity << "\t\t";
        cout << listprice << endl;
    }

};

bool Login()
{
    string username, password;
    string un, pw;

    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    system("Color 90");

    int choice;

    cout << endl;
    cout << "Main Menu: " << endl;
    cout << "***************************************************************************" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login";
    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string username, password;

        cout << "Registration: " << endl;
        cout << endl;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file;
        file.open(username + ".txt");
        file << username << endl
             << password;
        file.close();
        cout << "Welcome " << username << "!" << endl;
    }
    case 2:
    {
        bool status = Login();

        if (!status)
        {
            system("clear");
            cout << endl;
            cout << "Invalid login!" << endl;
            main();
            return 0;
        }
        else
        {
            cout << "Successfully logged in!" << endl;
            cout << endl;

            break;
        }
    }
    default:
        cout<<"Wrong choice entered";
        main();
    }

    int c;
    cout << "CAR RENTAL SERVICE" << endl;
    cout << "Choose:" << endl;
    cout << "1.Rent a car" << endl;
    cout << "2.List your car for rent" << endl;
    cout << "Enter your choice: " << endl;
    fflush(stdin);
    cin >> c;
    switch (c)
    {
    case 1:
    {
        customer_info obj;
        obj.getdata();
        cars c1;
        c1.pick();
        price p1(c1);
        p1.rent();
        break;
    }
    case 2:
    {
        listing_car l1;
        l1.listing();
        break;
    }
    default:
    {
        cout << "Wrong choice entered.";
        break;
    }
    }
    cout<<endl;
    cout<<"Thank you for using our services!!";

    return 0;
}



