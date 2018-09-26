

#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    double a;
    double b;
    string answer = "";
    
    while (answer != "|")
    {
        
        cout<< "Write the numbers \n";
        cin >> a;
        cin >> b;
        
        if (a>b)
        {
            cout<< "The number ";cout << a ; cout<< " is bigger than " <<  b;
            
            if ((a-b)< 0.01)
            {
                cout<< "the two numbers are almost equal";
            }
            
        }
        else if (a<b)
        {
            cout<< b; cout<< " is bigger than "; cout<< a;
            if ((b-a)< 0.01)
            {
                cout<< "the two numbers are almost equal";
            }
        }
        else 
        {
            cout << "The two numbers are equal";
        }
        
        answer = "";
        cout<< " Write one number";
        cin>> a;
        double asd = a;
        double lol = a;
        
        while (answer != "quit")
        {
            cout << "The smallest number so far is " ; cout<< asd;
            cout << "The largest number so far is "; cout << lol;
            cout << "Do you wish to continue?";
            cin >> answer;
            
            
            if (answer != "|")
            {
            std::cout << "Write a number " ;
            cin>> a;
            
            if ( a < asd)
            {
                asd = a;
            }
            else if (a > lol)
            {
                lol = a;
            }
            
            }
            
            
            
            
            
            
            
        }
        
        string wtf = "";
        vector<double> sum;
        int i = 0;
        while (wtf !="end my life")
        {
        
        cout<< " Enter value: ";
        int value;
        cin >> value;
        cout << " Enter Unit (m, cm, in, ft): ";
        string unit;
        cin >> unit;
        
        double m_cm = 100;
        double in_cm = 2.54;
        double ft_in = 12;
        
        if (unit != "m" || unit != "cm" || unit != "in" ||unit != "ft")
        {
            cout << "REJECTED";
        }
        else 
        {
            if (unit == "m")
            {
                
              sum [i]= value;
            }
            else if (unit == "cm")
            {
                
                sum[i]=  (value/m_cm);
            }
            else if (unit == "in")
            {
            
                  sum [i] = ((value*in_cm)/m_cm);
            }
            
            else if (unit == "ft")
            {
                  sum [i] =(((value*ft_in)*in_cm)/m_cm);
            }
                i++;
                
            }
            
            
            
            cout<< "Do you wish not to continue?";
            cin >>wtf;
        }
        double lmao;
        for (int j = 0; j<i; j++)
        {
            if (sum[j]>sum[j+1])
            {
                sum[j]=lmao;
                sum[j+1] = sum[j];
                sum[j+1] = lmao;
                j = 0;
            }
            
            
            
        
        }
        
        
        }
        
        
        
        
    }
    
    
    
    
    
    


