/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A15
 * DUE DATE : 2/12/2020
*******************************************/

#include "functions.h"

const int DBSIZE = 5;

/*******************************************************************************
 * DYNAMIC ARRAYS
 * -----------------------------------------------------------------------------
 * This program will manipulate an array (database) of struct instances (personType).
 * The array will hold pointers to different instances of personType struct, which are
 * assigned dynamically.
 *
 * INPUT
 *      - Name, DOB, eye color, height and weight of a person
 *
 * OUTPUT
 *      - The data that was input
 *******************************************************************************/

int main() {

    personType *database[DBSIZE] = {NULL};

    string tempThing;               // holds user input for string members of personType
    float tempMeasurement = 0.0;    // holds user input for float members of personType

    /*******************************************************************************
     * FOR-LOOP - Obtaining Information
     * -----------------------------------------------------------------------------
     * Initialize memory for a personType, then ask the user to enter information
     * about the person, error checking for positive values on height/weight.
     *
     * Loop through as many times as specified by the value of global constant DBSIZE
     *******************************************************************************/
    for (int i = 0; i < DBSIZE; i ++) {
        cout << "[ Person #" << i + 1 << " ]\n\n";
        // pointer in position [i] gets address for the new struct instance
        database[i] = new personType;


        // obtain name for person i
        cout << "Enter name: ";
        getline(cin, tempThing);
        setName(*database[i], tempThing);


        // obtain date of birth in MM/DD/YYYY
        cout << "Enter date of birth (MM/DD/YYYY): ";
        getline(cin, tempThing);
        setDOB(*database[i], tempThing);


        // obtain eye color
        cout << "Enter eye color: ";
        getline(cin, tempThing);
        setEyeColor(*database[i], tempThing);


        // obtain and error check weight
        do { // while (tempMeasurement < 0)
            cout << "Enter height (inches): ";
            cin  >> tempMeasurement;
            if (tempMeasurement < 0) {
                cout << "*** ERROR - Invalid height entered. Please enter a valid weight ***\n";
            }
        } while (tempMeasurement < 0);

        setWeight(*database[i], tempMeasurement);


        // obtain and error check height
        do { // while (tempMeasurement < 0)
            cout << "Enter weight (lbs.): ";
            cin  >> tempMeasurement;
            if (tempMeasurement < 0) {
                cout << "*** ERROR - Invalid weight entered. Please enter a valid weight ***\n";
            }
        } while (tempMeasurement < 0);

        setHeight(*database[i], tempMeasurement);

        cout << endl << endl;
        cin.ignore(1000, '\n');
    }


    // output section - table header
    cout << "\n\n[ CONTENTS OF DATABASE ]\n";
    cout << left;
    cout << setw(30) << "NAME" << setw(16) << "DATE OF BIRTH" << setw(8) << "EYE" << setw(8) << "HEIGHT"
         << setw(8)  << "WEIGHT" << endl;
    cout << setfill('-') << setw(78) << "-" << endl;
    cout << setfill(' ');

    cout << setprecision(1) << fixed;

    /*******************************************************************************
     * FOR-LOOP - Output Information
     * -----------------------------------------------------------------------------
     * Loop through the database and output the information in a nice table
     *
     * Output all of the information entered using the pointer member access operator
     * (->) to get the juicy juice
     *******************************************************************************/
    for (int i = 0; i < DBSIZE; i ++) {
        cout << left;
        cout << setw(30) << database[i]->name << setw(16) << database[i]->birthDate << setw(8) << database[i]->eyeColor
             << right << setw(6) << database[i]->heightInches << "'" << setw(6) << database[i]->weight << " lbs"<< endl;
    }



    /*******************************************************************************
     * FOR-LOOP - Deleting contents and returning memory to OS
     * -----------------------------------------------------------------------------
     * Return memory to the OS (delete the dynamic variables) and reset the pointers
     * to null foe the entire database
     *******************************************************************************/
    // return memory to OS
    for (int i = 0; i < DBSIZE; i ++) {
        delete database[i];
        database[i] = NULL;
    }
    system("pause");

    return 0;
}
