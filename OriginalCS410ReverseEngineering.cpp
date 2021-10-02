//This is the old file for the artifact


// CS 410 Reverse Engineering Enhancement 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>  

using namespace std;  






//Several vulnerabilities can be identified within the main function. 
//The security vulnerabilities include buffer overflows, not initializing variables, and ignoring certain compiler warnings.
//These vulnerabilities access invalid memory locations, do not reference the correct variables as there is no initialization,
//and the main function redefines the ChangeCustomerChoice, CheckUserPermissionAccess, as well as the DisplayInfo functions. 

//int main(){  

  //cout << "This cpp file was created by Clara Kellermann-Bryant" << endl; 

  //int information, customerchoice, permissions, i;
  //if (information == i ){
  //cout<<customerchoice<<"+"<<permissions<<"="<<information<<endl;
  //}
  //return 0;
//}


 //More readable commenting style

//The security vulnerabilities were fixed by changing the if-statement to a for loop and initializing variables. 
//A portion of information is displayed in the main function, as to prevent redefinition errors. 
//The fixes for initializing variables and fixing redefinition errors will prevent from buffer overflow attacks. 



//Conform to coding standards

int main() { 
    cout << "This cpp file was created by Clara Kellermann-Bryant" << endl;

    
    int information, customerchoice, permissions, i;

    for (i = 1; i <= 9; i++) {

        customerchoice = 0;
        permissions = 0;
        information = customerchoice + permissions;        //Create efficiency for storage use here
        cout << customerchoice << "+" << permissions << "=" << information << endl;
    }
    return 0;
}



 //More readable style

//Several vulnerabilities can be identified within the ChangeCustomerChoice function.  
//The security vulnerabilities include buffer overflows and not initializing variables. 
//These vulnerabilities access invalid memory locations and do not reference the correct variables as there is no initialization. 
//Certain warnings were ignored for printing the customer choice as well. 

//int ChangeCustomerChoice(){
  //int customerchoice, i;  
  //if (customerchoice != i){
    //cout<<"change customer choice"<<endl;
  //}else{
    //cout<<"customer choice stays the same"<<endl;
  //}

  //return 0;
//}


//The security vulnerabilities were fixed by initializing variables, using for loops, and preventing redefinition errors. 
//The contents of the ChangeCustomerChoice function were divided in order to prevent redefinition errors. 
//The variables for the contents in the function are initialized using the for loop. 
//These changes will prevent memory location attacks. 



int ChangeCustomerChoice() {

    int customerchoice, k; //Implement proper type consistency here
    for (k = 1; k <= 9; k++) {
        customerchoice = k + 1;
        cout << "change customer choice" << endl;
    }


    int customerchoice2, e;
    for (e = 1; e <= 9; e++) {  //Ensure correct data is operated on 
        customerchoice2 = e + 1;
        cout << "customer choice stays the same" << endl;
    }
    return 0;
}





 //More readable style
//Several vulnerabilities can be identified within the CheckUserPermissionAccess function. 
//The security vulnerabilities include buffer overflows and not initializing variables.
//These vulnerabilities access invalid memory locations and do not reference the correct variables as there is no initialization.
//Certain warnings were ignored for printing the permission choice as well. 

//int CheckUserPermissionAccess(){

  //int permissions, i;
  //if (permissions <= i){  
    //cout<<"permission is granted"<<endl;
  //}else{
    //cout<<"permission denied"<<endl;
  //}
  //return 0;
//}




//The security vulnerabilities were fixed by initializing variables, using for loops, and preventing redefinition errors. 
//The contents of the CheckUserPermissionAccess function were divided in order to prevent redefinition errors.
//The variables for the contents in the function are initialized using the for loop.
//These changes will prevent memory location attacks.


int CheckUserPermissionAccess() {

    int permissions, g;
    for (g = 1; g <= 9; g++) { //Test common cases first
        permissions = g + 1;
        cout << "permission is granted" << endl;

    }

    int permissions2, h;
    for (h = 1; h <= 9; h++) {
        permissions2 = h + 1; //Avoid addition on numbers with greatly different magnitudes
        cout << "permission denied" << endl;
    }
    return 0;
}


 //More readable style

//Several vulnerabilities can be identified within the DisplayInfo function. 
//The security vulnerabilities include buffer overflows, not initializing variables, and ignoring certain compiler warnings.
//There are redefinitions in the DisplayInfo function as well. 

//int DisplayInfo(){
  //int information, customerchoice, permissions;
  //information = customerchoice + permissions; 
  //cout << customerchoice << "+" << permissions << "=" << information << endl;

  //return 0;
//}


//The security vulnerabilities were fixed by initializing variables and including the second portion of displaying the contents of the functions. 
//All variables are declared and initialized here to prevent redefinition errors and to display all contents of each function.
//These changes will prevent redefinition errors and buffer overflow attacks. 


int DisplayInfo() {
  
   //Avoid manipulating index variable
  
    int information, information2, customerchoice, customerchoice2, permissions, permissions2; 

    customerchoice2 = 0;   
    permissions2 = 0;
    customerchoice = 0;
    permissions = 0;
    information2 = customerchoice2 + permissions2;  //Condense into single procedure
    information = customerchoice + permissions;

    cout << customerchoice2 << "+" << permissions2 << "=" << information2 << endl; //Deallocate memory allocation
    cout << customerchoice << "+" << permissions << "=" << information << endl;

    return 0;
}
