/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A15
 * DUE DATE : 2/12/2020
*******************************************/

#include "functions.h"

/******************************************************************************
 * FUNCTION - setName
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <name> as the name member of the personType <person> argument.
 * ===> returns nothing
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    person  : a personType struct pass by reference
 * 		    name    : a string to copy into the name member of person
 * POST-CONDITIONS
 *      This function will modify the contents of the name member of
 *      actual parameter person (person.name)
 ******************************************************************************/

void setName(personType& person, string name) {
    person.name = name;
}




/******************************************************************************
 * FUNCTION - setDOB
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <dob> as the date of birth member of the personType <person> argument.
 * ===> returns nothing
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    person  : a personType struct pass by reference
 * 		    dob     : a string to copy into the date of birth member of person
 * POST-CONDITIONS
 *      This function will modify the contents of the birthDate member of
 *      actual parameter person
 ******************************************************************************/

void setDOB(personType& person, string dob) {
    person.birthDate = dob;
}




/******************************************************************************
 * FUNCTION - setDOB
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. It will set whatever string
 * it receives for <color> as the eye color of the personType <person> argument.
 * ===> returns nothing
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    person  : a personType struct pass by reference
 * 		    color   : the color of the person's eye represented by <person>
 * POST-CONDITIONS
 *      This function will modify the contents of the eyeColor member of
 *      actual parameter person
 ******************************************************************************/

void setEyeColor(personType& person, string color) {
    person.eyeColor = color;
}




/******************************************************************************
 * FUNCTION - setWeight
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. If the float passed
 * is greater than zero, it will set it as the value for person member weight.
 * Otherwise, it sets the value to 0.
 * ===> returns nothing
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    person  : a personType struct pass by reference
 * 		    weight  : float for the weight of person in pounds
 * POST-CONDITIONS
 *      This function will modify the contents of weight member of actual parameter
 *      person
 ******************************************************************************/

void setWeight(personType& person, float weight) {
    if (weight >= 0) {
        person.weight = weight;
    }
    else {
        person.weight = 0;
    }
}




/******************************************************************************
 * FUNCTION - setHeight
 * ____________________________________________________________________________
 * This is a SETTER function for the struct personType. If the float passed
 * is greater than zero, it will set it as the value for person member height.
 * Otherwise, it sets the value to 0.
 * ===> returns nothing
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    person  : a personType struct pass by reference
 * 		    height  : float for the height of person in inches
 * POST-CONDITIONS
 *      This function will modify the contents of height member of actual parameter
 *      person
 ******************************************************************************/

void setHeight(personType& person, float height) {
    if (height >= 0) {
        person.heightInches = height;
    } else {
        person.heightInches = 0;
    }
}