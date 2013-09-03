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
* File:    Temperature.cpp
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

#include "Temperature.h"
#include <iostream>

using namespace std;

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/*                         Function Implementations                         */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function getCelcius                                                      */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is accessor. Calculate celcius temperature.
/* 
/*  RETURN VALUE
/*  Return temperature in Celcius  
/*  */
double Temperature::getCelcius() const
{
    return kelvinTemp - 273.15;
}

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function getFahrenheit                                                   */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is accessor. Calculate Fahrenheit temperature.
/* 
/*  RETURN VALUE
/*  Return temperature in Fahrenheit  
/*  */
double Temperature::getFahrenheit() const
{
    return 9.0*getCelcius()/5.0 + 32.0;
}

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function getKelvin                                                       */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is accessor. Calculate Kelvin temperature.
/* 
/*  RETURN VALUE
/*  Return temperature in Kelvin  
/*  */
double Temperature::getKelvin() const
{
    return kelvinTemp;
}

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function setTempCelcius                                                  */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is mutator. Get the input paremeter that temperature in
 * celcius and calculate Kelvin temperature and mutate 
 * class private member kelvinTemp.
/* 
/*  */
void Temperature::setTempCelcius(double temp)
{
    kelvinTemp = temp + 273.15;
}

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function setTempFahrenheit                                               */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is mutator. Get the input paremeter that temperature in
 * fahrenheit and calculate Kelvin temperature and mutate 
 * class private member kelvinTemp.
/* 
/*  */
void Temperature::setTempFahrenheit(double temp)
{
    kelvinTemp = 273.15 + (5.0* (temp-32)/9);
}

/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* Function setTempKelvin                                                   */
/***************************************************************************­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­*/
/* This function is mutator. Get the input paremeter that temperature in
 * kelvin and assing kelvinTemp.
/* 
/*  */
void Temperature::setTempKelvin(double temp)
{
    kelvinTemp = temp;
}