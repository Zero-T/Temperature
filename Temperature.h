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
* File:    Temperature.h
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
#ifndef TEMPERATURE_H
#define	TEMPERATURE_H


class Temperature
{
    //private member variable, which is accessed 
    //only by the member functions
private:
    double kelvinTemp;
    
public:
    //Getter functions
    double getCelcius() const;
    double getFahrenheit() const;
    double getKelvin() const;
    //Mutator functions to set temperatures
    void setTempCelcius(double temp);
    void setTempFahrenheit(double temp);
    void setTempKelvin(double temp);
};

#endif	/* TEMPERATURE_H */
