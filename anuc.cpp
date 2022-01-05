#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    system("color 1E");
    SetConsoleTitle("Developed by Likhan");
    string x,y;
    int a;
    int randleta=1;//for the while condition after default case in Distance case
    do
    {
        {
          system("cls");
          cout<<"\n";
          cout<<"1: Add two or more numbers."<<endl;
          cout<<"2: Subtract Two Numbers."<<endl;
          cout<<"3: Find Average."<<endl;
          cout<<"4: Find Quotient & Remainder by entering Dividend & Divisor."<<endl;
          cout<<"5: Know ODD & EVEN numbers within a range of numbers."<<endl;
          cout<<"6: Temperature conversion:\n       Celsius, Fahrenheit, Kelvin, Rankine & Reaumur."<<endl;
          cout<<"7: Distance Conversion:\n       Centimetre, Inch, Metre, Millimetre, Kilometre, Foot, Yard, Mile\n       & Nautical Mile."<<endl;
          cout<<"\n";
          {
          cout<<"Enter choice: ";
          cin>>a;
          switch(a)
          {
          {
          {
    case 01:
    do
            {
        system("color 1E");
        system("cls");
        double a,f,c,total=0;
        cout<<"How many numbers do you want to add?:";
        cin>>a;
        if (a==1)
            {
            cout<<"Error: Invalid Input:- 1"<<endl;
            break;
        }
        else if (a>1){
        for(f=0;f<a;f++){
            cout<<"Enter Number: ";
            cin>>c;
            total+=c;
        }
        }
        cout<<" "<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Perform addition again? Y/N"<<endl;
        cin>>x;
            }
            while (x=="Y"||x=="y");
            cout<<" "<<endl;
        break;
    case 02:
        do
            {
            system("cls");
            system("color 1E");
            double g,h,total1=0;
            cout<<"Enter First Number: ";
            cin>>g;
            cout<<"Enter Second Number: ";
            cin>>h;
            total1=g-h;
            cout<<total1<<"\nTry Again? Y/N";
            cin>>x;
        }
        while(x=="Y"||x=="y");
        break;
    case 03:
        do
        {
            system("cls");
            system("color 1E");
            double k,l,m=0,n=0,o;
            cout<<"How many numbers you want to find the average of? ";
            cin>>k;
            for(n=0;n<k;n++)
            {
            cout<<"Enter Value:";
            cin>>l;
            m+=l;
            o=m/k;
            }
            cout<<"Average is "<<o<<endl;
            cout<<"Try Again? Y/N";
            cin>>x;
        }
        while(x=="Y"||x=="y");
        break;
    case 04:
        do
            {
            system("cls");
            system("color 1E");
            int i,j,total2=0,total3=0;
            cout<<"Don't Enter Decimal numbers'"<<endl;
            cout<<"Dividend (Number to be divided): ";
            cin>>i;
            cout<<"Divisor (Number by which "<<i<<" is to be divided.): ";
            cin>>j;
            total2=i/j;
            total3=i%j;
            cout<<"Quotient is: "<<total2<<" & Remainder is: "<<total3<<endl;
            cout<<"Try Again? Y/N";
            cin>>x;
        }
        while(x=="Y"||x=="y");
        break;
    case 05:
        do
            {
                system("color 1E");
                system("cls");
                int c, d;
                string b;
                cout<<"Enter one lower & one higher number & the program will display all the ODD & EVEN numbers present in this range including the numbers you will input"<<endl;
                cout<<"Don't enter Decimal numbers"<<endl;
                cout<<"Lower Number :";
                cin>>c;
                cout<<"Higher Number :";
                cin>>d;
                if (c>d)
                    cout<<c<<" is greater than "<<d<<". Please input in the correct order."<<endl;
                else
                    {
                    for(a=c;a<=d; a++)
                        if (a==0)
                            cout<<a<<" is a neutral number"<<endl;
                   else if (a%2!=0)
                            cout<<a<<"-------odd"<<endl;
                   else if (a%2==0)
                            cout<<a<<"-------even"<<endl;
                   else if (a>d)
                            cout<<a<<" is greater than "<<d<<". You have inputted in the wrong way!"<<endl;
                   else if (a==d)
                            cout<<a<<" & "<<d<<" have no numbers between them."<<endl;
                      else{
                            cout<<"Internal error: You can try again or exit."<<endl;
                          }
                          }
              cout<<"Try Again? Y/N";
              cin>>x;
                 }
                 while (x=="Y" ||x=="y");
                   break;
    case 06:
        do
        {
        do
        {
            system("cls");
            system("color 1E");
            int y;
            double p,q;
            cout<<"1.  Celsius    to Fahrenheit"<<endl;
            cout<<"2.  Celsius    to Kelvin"<<endl;
            cout<<"3.  Celsius    to Rankine"<<endl;
            cout<<"4.  Celsius    to Reaumur"<<endl;
            cout<<"5.  Fahrenheit to Celsius"<<endl;
            cout<<"6.  Fahrenheit to Kelvin"<<endl;
            cout<<"7.  Fahrenheit to Rankine"<<endl;
            cout<<"8.  Fahrenheit to Reaumur"<<endl;
            cout<<"9.  Kelvin     to Celsius"<<endl;
            cout<<"10. Kelvin     to Fahrenheit"<<endl;
            cout<<"11. Kelvin     to Rankine"<<endl;
            cout<<"12. Kelvin     to Reaumur"<<endl;
            cout<<"13. Rankine    to Celsius"<<endl;
            cout<<"14. Rankine    to Fahrenheit"<<endl;
            cout<<"15. Rankine    to Kelvin"<<endl;
            cout<<"16. Rankine    to Reaumur"<<endl;
            cout<<"17. Reaumur    to Celsius"<<endl;
            cout<<"18. Reaumur    to Fahrenheit"<<endl;
            cout<<"19. Reaumur    to Kelvin"<<endl;
            cout<<"20. Reaumur    to Rankine"<<endl;
            cout<<"\nEnter Choice: ";
            cin>>y;
            switch (y)
            {
            case 1:
                system("cls");
                cout<<"Enter Temperature in Celsius: ";
                cin>>p;
                q=(p*9/5)+32;
                cout<<q<<" Fahrenheit"<<endl;
                break;
            case 2:
                system("cls");
                cout<<"Enter Temperature in Celsius: ";
                cin>>p;
                q=p+273.15;
                cout<<q<<" Kelvin"<<endl;
                break;
            case 3:
                system("cls");
                cout<<"Enter Temperature in Celsius: ";
                cin>>p;
                q=p*9/5+491.67;
                cout<<q<<" Rankine"<<endl;
                break;
            case 4:
                system("cls");
                cout<<"Enter temperature in Celsius: ";
                cin>>p;
                q=p*0.8;
                cout<<q<<" Reaumur"<<endl;
                break;
            case 5:
                system("cls");
                cout<<"Enter temperature in Fahrenheit: ";
                cin>>p;
                q=(p-32)*5/9;
                cout<<q<<" Celsius"<<endl;
                break;
            case 6:
                system("cls");
                cout<<"Enter Temperature in Fahrenheit: ";
                cin>>p;
                q=(p-32)*5/9+273.15;
                cout<<q<<" Kelvin"<<endl;
                break;
            case 7:
                system("cls");
                cout<<"Enter Temperature in Fahrenheit: ";
                cin>>p;
                q=p+459.67;
                cout<<q<<" Rankine"<<endl;
                break;
            case 8:
                system("cls");
                cout<<"Enter Temperature in Fahrenheit: ";
                cin>>p;
                q=(p-32)/2.25;
                cout<<q<<" Reaumur"<<endl;
                break;
            case 9:
                system("cls");
                cout<<"Enter temperature in Kelvin: ";
                cin>>p;
                q=(p-273.15);
                cout<<q<<" Celsius"<<endl;
                break;
            case 10:
                system("cls");
                cout<<"Enter temperature in Kelvin: ";
                cin>>p;
                q=(p-273.15)*9/5+32;
                cout<<q<<" Fahrenheit"<<endl;
                break;
            case 11:
                system("cls");
                cout<<"Enter Temperature in Kelvin: ";
                cin>>p;
                q=p*1.8;
                cout<<q<<" Rankine"<<endl;
                break;
            case 12:
                system("cls");
                cout<<"Enter Temperature in Kelvin: ";
                cin>>p;
                q=(p-273.15)*0.8;
                cout<<q<<" Reaumur"<<endl;
                break;
            case 13:
                system("cls");
                cout<<"Enter Temperature in Rankine: ";
                cin>>p;
                q=(p-32-459.67)/1.8;
                cout<<q<<" Celsius"<<endl;
                break;
            case 14:
                system("cls");
                cout<<"Enter Temperature in Rankine: ";
                cin>>p;
                q=p-459.67;
                cout<<q<<" Fahrenheit"<<endl;
                break;
            case 15:
                system("cls");
                cout<<"Enter Temperature in Rankine: ";
                cin>>p;
                q=(p/1.8);
                cout<<q<<" Kelvin"<<endl;
                break;
            case 16:
                system("cls");
                cout<<"Enter Temperature in Rankine: ";
                cin>>p;
                q=(p-32-459.67)/2.25;
                cout<<q<<" Reaumur"<<endl;
                break;
            case 17:
                system("cls");
                cout<<"Enter Temperature in Reaumur: ";
                cin>>p;
                q=p*1.25;
                cout<<q<<" Celsius"<<endl;
                break;
            case 18:
                system("cls");
                cout<<"Enter Temperature in Reaumur: ";
                cin>>p;
                q=p*2.25+32;
                cout<<q<<" Fahrenheit"<<endl;
                break;
            case 19:
                system("cls");
                cout<<"Enter Temperature in Reaumur: ";
                cin>>p;
                q=(p*1.25)+273.15;
                cout<<q<<" Kelvin"<<endl;
                break;
            case 20:
                system("cls");
                cout<<"Enter Temperature in Reaumur: ";
                cin>>p;
                q=p*2.25+32+459.67;
                cout<<q<<" Rankine"<<endl;
                break;
            default:
                cout<<"Invalid Input!"<<endl;
                break;
            }
            cout<<"Try Again? Y/N";
            cin>>x;
        }
        while (x=="Y"||x=="y");
        cout<<"Return back to the previous menu? Y/N ";
        cin>>x;
        }
        while (x=="Y"||x=="y");
        break;
    case 07:
        do
        {
        do
        {
            do
            {
            system("cls");
            int a;
            double b,c;
            cout<<"1. Centimetre to Inch"<<endl;
            cout<<"2. Centimetre to Metre"<<endl;
            cout<<"3. Centimetre to Millimetre"<<endl;
            cout<<"4. Centimetre to Kilometre"<<endl;
            cout<<"5. Centimetre to Foot"<<endl;
            cout<<"6. Centimetre to Yard"<<endl;
            cout<<"7. Centimetre to Mile"<<endl;
            cout<<"8. Centimetre to Nautical Mile\n"<<endl;
            cout<<"9. Inch to Centimetre"<<endl;
            cout<<"10. Inch to Metre"<<endl;
            cout<<"11. Inch to Millimetre"<<endl;
            cout<<"12. Inch to Kilometre"<<endl;
            cout<<"13. Inch to Foot"<<endl;
            cout<<"14. Inch to Yard"<<endl;
            cout<<"15. Inch to Mile"<<endl;
            cout<<"16. Inch to Nautical Mile\n"<<endl;
            cout<<"17. Millimetre to Centimetre"<<endl;
            cout<<"18. Millimetre to Inch"<<endl;
            cout<<"19. Millimetre to Metre"<<endl;
            cout<<"20. Millimetre to Kilometre"<<endl;
            cout<<"21. Millimetre to Foot"<<endl;
            cout<<"22. Millimetre to Yard"<<endl;
            cout<<"23. Millimetre to Mile"<<endl;
            cout<<"24. Millimetre to Nautical Mile\n"<<endl;
            cout<<"25. Metre to Centimeter"<<endl;
            cout<<"26. Metre to Inch"<<endl;
            cout<<"27. Metre to Millimetre"<<endl;
            cout<<"28. Metre to Kilometre"<<endl;
            cout<<"29. Metre to Foot"<<endl;
            cout<<"30. Metre to Yard"<<endl;
            cout<<"31. Metre to Mile"<<endl;
            cout<<"32. Metre to Nautical Mile\n"<<endl;
            cout<<"33. Kilometre to Centimetre"<<endl;
            cout<<"34. Kilometre to Inch"<<endl;
            cout<<"35. Kilometre to Metre"<<endl;
            cout<<"36. Kilometre to Millimetre"<<endl;
            cout<<"37. Kilometre to Foot"<<endl;
            cout<<"38. Kilometre to Yard"<<endl;
            cout<<"39. Kilometre to Mile"<<endl;
            cout<<"40. Kilometre to Nautical Mile\n"<<endl;
            cout<<"41. Foot to Centimetre"<<endl;
            cout<<"42. Foot to Inch"<<endl;
            cout<<"43. Foot to Metre"<<endl;
            cout<<"44. Foot to Millimetre"<<endl;
            cout<<"45. Foot to Kilometre"<<endl;
            cout<<"46. Foot to Yard"<<endl;
            cout<<"47. Foot to Mile"<<endl;
            cout<<"48. Foot to Nautical Mile\n"<<endl;
            cout<<"49. Yard to Centimetre"<<endl;
            cout<<"50. Yard to Inch"<<endl;
            cout<<"51. Yard to Metre"<<endl;
            cout<<"52. Yard to Millimetre"<<endl;
            cout<<"53. Yard to Kilometre"<<endl;
            cout<<"54. Yard to Foot"<<endl;
            cout<<"55. Yard to Mile"<<endl;
            cout<<"56. Yard to Nautical Mile\n"<<endl;
            cout<<"57. Mile to Centimetre"<<endl;
            cout<<"58. Mile to Inch"<<endl;
            cout<<"59. Mile to Metre"<<endl;
            cout<<"60. Mile to Millimetre"<<endl;
            cout<<"61. Mile to Kilometre"<<endl;
            cout<<"62. Mile to Foot"<<endl;
            cout<<"63. Mile to Yard"<<endl;
            cout<<"64. Mile to Nautical Mile\n"<<endl;
            cout<<"65. Nautical Mile to Centimetre"<<endl;
            cout<<"66. Nautical Mile to Inch"<<endl;
            cout<<"67. Nautical Mile to Metre"<<endl;
            cout<<"68. Nautical Mile to Millimetre"<<endl;
            cout<<"69. Nautical Mile to Kilometre"<<endl;
            cout<<"70. Nautical Mile to Foot"<<endl;
            cout<<"71. Nautical Mile to Yard"<<endl;
            cout<<"72. Nautical Mile to Mile"<<endl;
            if(randleta==1)
                cout<<"\nEnter choice: ";
            else
                cout<<"\nEnter choice again: ";
            randleta=1;
            cin>>a;
            switch (a)
            {
            case 1:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b/2.54;
                cout<<c<<" Inch"<<endl;
                break;
            case 2:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b/100;
                cout<<c<<" Metre"<<endl;
                break;
            case 3:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b*10;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 4:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b/100000;
                cout<<c<<" Kilometre"<<endl;
                break;
            case 5:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b/30.48;
                cout<<c<<" Foot"<<endl;
                break;
            case 6:
                system("cls");
                cout<<"Enter Value in Centimetre: ";
                cin>>b;
                c=b/91.44;
                cout<<c<<" Yard"<<endl;
                break;
            case 7:
                system("cls");
                cout<<"Enter Value in Centimetre: ";
                cin>>b;
                c=b/160934.4;
                cout<<c<<" Mile"<<endl;
                break;
            case 8:
                system("cls");
                cout<<"Enter value in Centimetre: ";
                cin>>b;
                c=b/185200;
                cout<<c<<" Nautical Mile"<<endl;
                break;
            case 9:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b*2.54;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 10:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/39.37;
                cout<<c<<" Metre"<<endl;
                break;
            case 11:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b*25.4;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 12:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/39370.079;
                cout<<c<<" Kilometre (approximate)"<<endl;
                break;
            case 13:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/12;
                cout<<c<<" Foot"<<endl;
                break;
            case 14:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/36;
                cout<<c<<" Yard"<<endl;
                break;
            case 15:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/63360;
                cout<<c<<" Mile"<<endl;
                break;
            case 16:
                system("cls");
                cout<<"Enter value in Inch: ";
                cin>>b;
                c=b/72913.386;
                cout<<c<<" Nautical Mile (approximate)"<<endl;
                break;
            case 17:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/10;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 18:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/25.4;
                cout<<c<<" Inch"<<endl;
                break;
            case 19:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/1000;
                cout<<c<<" Metre"<<endl;
                break;
            case 20:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/1e+6;
                cout<<c<<" Kilometre"<<endl;
                break;
            case 21:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/308.4;
                cout<<c<<" Foot (approximate)"<<endl;
                break;
            case 22:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/914.4;
                cout<<c<<" Yard"<<endl;
                break;
            case 23:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/1.609e+6;
                cout<<c<<" Mile (approximate)"<<endl;
                break;
            case 24:
                system("cls");
                cout<<"Enter value in Millimetre: ";
                cin>>b;
                c=b/1.852e+6;
                cout<<c<<" Nautical Mile"<<endl;
                break;
            case 25:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b*100;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 26:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b*39.37;
                cout<<c<<" Inch"<<endl;
                break;
            case 27:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b*1000;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 28:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b/1000;
                cout<<c<<" Kilometre"<<endl;
                break;
            case 29:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b*3.281;
                cout<<c<<" Foot (approximate)"<<endl;
                break;
            case 30:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b*1.094;
                cout<<c<<" Yard (approximate)"<<endl;
                break;
            case 31:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b/1609.344;
                cout<<c<<" Mile"<<endl;
                break;
            case 32:
                system("cls");
                cout<<"Enter value in Metre: ";
                cin>>b;
                c=b/1852;
                cout<<c<<" Nautical Mile"<<endl;
                break;
            case 33:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*100000;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 34:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*39370.079;
                cout<<c<<" Inch (approximate)"<<endl;
                break;
            case 35:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*1000;
                cout<<c<<" Metre"<<endl;
                break;
            case 36:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*1e+6;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 37:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*3280.84;
                cout<<c<<" Foot"<<endl;
                break;
            case 38:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b*1093.613;
                cout<<c<<" Yard (approximate)"<<endl;
                break;
            case 39:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b/1.609;
                cout<<c<<" Mile (approximate)"<<endl;
                break;
            case 40:
                system("cls");
                cout<<"Enter value in Kilometre: ";
                cin>>b;
                c=b/1.852;
                cout<<c<<" Nautical Mile"<<endl;
                break;
            case 41:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b*30.48;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 42:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b*12;
                cout<<c<<" Inch"<<endl;
                break;
            case 43:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b/(3.281);
                cout<<c<<" Metre"<<endl;
                break;
            case 44:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b*304.8;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 45:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b/3280.84;
                cout<<c<<" Kilometre"<<endl;
                break;
            case 46:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b/3;
                cout<<c<<" Yard"<<endl;
                break;
            case 47:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b/5280;
                cout<<c<<" Mile"<<endl;
                break;
            case 48:
                system("cls");
                cout<<"Enter value in Foot: ";
                cin>>b;
                c=b/6076.115;
                cout<<c<<" Nautical Mile (approximate)"<<endl;
                break;
            case 49:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b*91.44;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 50:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b*36;
                cout<<c<<" Inch"<<endl;
                break;
            case 51:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b/1.094;
                cout<<c<<" Metre (approximate)"<<endl;
                break;
            case 52:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b*914.4;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 53:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b/1093.613;
                cout<<c<<" Kilometre (approximate)"<<endl;
                break;
            case 54:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b*3;
                cout<<c<<" Foot"<<endl;
                break;
            case 55:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b/1760;
                cout<<c<<" Mile"<<endl;
                break;
            case 56:
                system("cls");
                cout<<"Enter value in Yard: ";
                cin>>b;
                c=b/2025.372;
                cout<<c<<" Nautical Mile (approximate)"<<endl;
                break;
            case 57:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*160934.4;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 58:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*63360;
                cout<<c<<" Inch"<<endl;
                break;
            case 59:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*1609.344;
                cout<<c<<" Metre"<<endl;
                break;
            case 60:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*1609e+6;
                cout<<c<<" Millimetre (approximate)"<<endl;
                break;
            case 61:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*1.609;
                cout<<c<<" Kilometre (approximate)"<<endl;
                break;
            case 62:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*5280;
                cout<<c<<" Foot"<<endl;
                break;
            case 63:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b*1760;
                cout<<c<<" Yard"<<endl;
                break;
            case 64:
                system("cls");
                cout<<"Enter value in Mile: ";
                cin>>b;
                c=b/1.151;
                cout<<c<<" Nautical Mile (approximate)"<<endl;
                break;
            case 65:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*185200;
                cout<<c<<" Centimetre"<<endl;
                break;
            case 66:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*72913.386;
                cout<<c<<" Inch (approximate)"<<endl;
                break;
            case 67:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*1852;
                cout<<c<<" Metre"<<endl;
                break;
            case 68:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*1.852e+6;
                cout<<c<<" Millimetre"<<endl;
                break;
            case 69:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*1.852;
                cout<<c<<" Kilometre"<<endl;
                break;
            case 70:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*6076.115;
                cout<<c<<" Foot (approximate)"<<endl;
                break;
            case 71:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*2025.37;
                cout<<c<<" Yard (approximate)"<<endl;
                break;
            case 72:
                system("cls");
                cout<<"Enter value in Nautical Mile: ";
                cin>>b;
                c=b*1.151;
                cout<<c<<" Mile (approximate)"<<endl;
                break;
            default:
                randleta=0;
                cout<<"\nInvalid Input "<<a<<"! You need to try again."<<endl;
                system("pause");
                system("cls");
                break;
            }
            }
            while(randleta==0);
            }
            while(x=="Y"||x=="y");
            cout<<"\nPerform this conversion again? Y/N ";
            cin>>x;
            }
            while(x=="Y"||x=="y");
            cout<<"\nExit the program.";
            cin>>x;
        }
        while(x=="Y"||x=="y");
         cout<<"Return back to the previous menu> Y/N ";
         cin>>x;
         }
         while(x=="Y"||x=="y");
         break;
    default:
            system("cls");
            cout<<"Invalid Input!"<<endl;
          }
          }
          }
     cout<<"Return Back to home? Y/N"<<endl;
     cin>>x;
        }
        while (x=="Y"|| x=="y");
         cout<<"Press any key to exit the program."<<endl;
    system("pause");
    return 0;
}

//Ignore the below part please
/*
https://mega.nz/folder/0nYEWIbR#AoGuCxpJXntVSNYKIt0pnQ
https://drive.google.com/drive/folders/1tYYtozw2ujLuHRTNj0qCGTF32LznjA8L?usp=sharing
*/
