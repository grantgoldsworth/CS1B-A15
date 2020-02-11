/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A15
 * DUE DATE : 2/12/2020
*******************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

#ifndef CS1B_A15_FUNCTIONS_H
#define CS1B_A15_FUNCTIONS_H


// struct personType - represents basic information about a person
struct personType {
    string name;
    string birthDate;
    string eyeColor;
    float  weight;
    float  heightInches;
};


/******************************************************************************
 * FUNCTION - setName
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <name> as the name member of the personType <person> argument.
 * ===> returns nothing
 ******************************************************************************/

void setName(personType&, string);




/******************************************************************************
 * FUNCTION - setDOB
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <dob> as the date of birth member of the personType <person> argument.
 * ===> returns nothing
 ******************************************************************************/

void setDOB(personType&, string);




/******************************************************************************
 * FUNCTION - setDOB
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <color> as the eye color of the personType <person> argument.
 * ===> returns nothing
 ******************************************************************************/

void setEyeColor(personType&, string);




/******************************************************************************
 * FUNCTION - setWeight
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. If the float passed
 * is greater than zero, it will set it as the value for person member weight.
 * Otherwise, it sets the value to 0.
 * ===> returns nothing
 ******************************************************************************/

void setWeight(personType&, float);




/******************************************************************************
 * FUNCTION - setHeight
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. If the float passed
 * is greater than zero, it will set it as the value for person member height.
 * Otherwise, it sets the value to 0.
 * ===> returns nothing
 ******************************************************************************/

void setHeight(personType&, float);


#endif //CS1B_A15_FUNCTIONS_H
