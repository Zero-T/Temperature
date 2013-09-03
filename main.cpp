/*                                                           
*	@@@@@@@@  @@@@@@@@  @@@@@@@    @@@@@@              @@@@@@@  
*	@@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@             @@@@@@@  
*	     @@!  @@!       @@!  @@@  @@!  @@@               @@!    
*	    !@!   !@!       !@!  @!@  !@!  @!@               !@!    
*	   @!!    @!!!:!    @!@!!@!   @!@  !@!  @!@!@!@!@    @!!    
*	  !!!     !!!!!:    !!@!@!    !@!  !!!  !!!@!@!!!    !!!    
*	 !!:      !!:       !!: :!!   !!:  !!!               !!:    
*	:!:       :!:       :!:  !:!  :!:  !:!               :!:    
*	 :: ::::   :: ::::  ::   :::  ::::: ::                ::    
*	: :: : :  : :: ::    :   : :   : :  :                 :     	                                                            
*
* File:    Main.cpp
*
* Course:  Course name here
* Project: Project name here
*
* Project Description: 
*
* Author:  Your name here.
* Number:  Your number.
*
* Created on 11:43:13 am EEST | Tuesday, September 3, 2013.
*/  

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Program get the input temperature from the user, then                    */
/* convert it to other scales and display the temperature other             */
/* scales.                                                                  */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/


/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/*                               Includes                                   */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
#include <iostream>
#include "Temperature.h"

using namespace std;

int main(int argc, char** argv) 
{
    //Create object type Temperature
    Temperature obje;
    //Create char for input from the user choice
    char type;
    double celsius,
            fahrenheit,
            kelvin;
    
    //Get type from the user choice of temperature scale
    cout<<"Choose Temperature scale to enter:"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"\tCelcius    - C"<<endl;
    cout<<"\tFahrenheit - F"<<endl;
    cout<<"\tKelvin     - K"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>type;
    cout<<endl;
    

    if (type=='C' || type == 'c') 
    {
        //promt and read the temperature from the user
        //and if Temperature Celcius less than -273.15 that equal to kelvin temperature
        //is zero, get input again.
        do
        {
        cout << "Enter Temperature in Celcius: ";
        cin >> celsius;
        cout<< endl;
        }while(celsius < (-273.15));
        //convert to celcius
        obje.setTempCelcius(celsius);
        //display output
        cout<<"Temperature in Celcius: "
                <<obje.getCelcius()<<endl;
        cout<<"Temperature in Fahrenheit : "
                <<obje.getFahrenheit()<<endl;
        cout<<"Temperature in Kelvin : "
                <<obje.getKelvin()<<endl;
    }
    else if (type == 'F' || type == 'f') 
    {
        //promt and read the temperature from the user
        //and if Fahrenheit less than -459.67 that equal to kelvin temperature
        //is zero, get input again.
        do
        {
            cout <<"Enter Temperature in Fahrenheit : ";
            cin>> fahrenheit;
            cout<<endl;
        }while(fahrenheit<(-459.67));
        //convert to fahrenheit
        obje.setTempFahrenheit(fahrenheit);
        //display output
        cout <<"Temperature in Celcius : "
                <<obje.getCelcius()<<endl;
        cout<<"Temperature in Fahrenheit : "
                <<obje.getFahrenheit()<<endl;
        cout<<"Temperature in Kalvin : "
                <<obje.getKelvin()<<endl;
    }
    else if (type == 'K' || type == 'k') 
    {
        //promt and read the temperature from the user
        //and if kelvin less than zero 
        //get input again.
        do
        {
            cout << "Enter Temperature in Kelvin : ";
            cin>> kelvin;
            cout <<endl;
        }while(kelvin<0);
        //convert to kelvin
        obje.setTempKelvin(kelvin);
        //display output
        cout<<"Temperature in Celciıus : "
                <<obje.getCelcius()<<endl;
        cout<<"Temperature in Fahrenheit : "
                <<obje.getFahrenheit()<<endl;
        cout<<"Temperature in Kelvin : "
                <<obje.getKelvin()<<endl; 
    }
    else 
    {
        cout<<"Not valid temperature scale."<<endl;
    }

    return 0;
}
