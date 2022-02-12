### All the test plan and test output related files under this folder

* TEST ITEMS
This section of the test plan lists all the items of the Railway Reservation Systemproject that will be tested:
● Login
● Search and book trains
● Search and book packages
● Search and book hotels
● Register

* UNIT TESTING
Unit Testing is a test that tests each single module of the software to check for errors. This is mainly done to discover errors in the code of the Railway Reservation System. The main goal of the unit testing would be to isolate each part of the program and to check the correctness of the code. In the case of the Railway Reservation System, all the web forms and the C# classes will be tested. There are many benefits for this unit testing: ● The unit testing facilitates change in the code. ● Bottom-up testing is possible. At the same time,  testing components has some drawbacks. B. It may not be possible to identify all errors in the system

* INTEGRATION TESTING
Integration testing combines individual software modules  and tests them as a whole. Integration tests usually follow unit tests. Unit testing tests each module  as a separate entity. The main purpose of  integration testing is to test the functional and performance requirements of the key elements of the project. All the individually developed modules of the project are combined with each other and tested as a complete system in  integration testing.

* SYSTEM TESTING 
The system testing is mainly done on the whole integrated system to make surethat the project that has been developed meets all the requirements. The testcases for the system testing will be the combination of unit and integration tests.

* USER ACCEPTANCE TESTING
This testing is generally performed when the project is nearing its end. This testmainly qualifies the project and decides if it will be accepted by the users of thesystem. The users or the customers of the project are responsible for the test.

* TEST CASE 1 – USER LOGIN
•Incorrect Input: Incorrect username, which is the emailid in the case of the Railway Reservation System. 
 •Pass Criteria: An appropriate message should be generated to indicate that an invalid username has been typed. 
 •Correct Input: The correct input would be a valid email id of the user and a correct password associated with the emailid which he uses to log in. 
 •Pass Criteria: The user should be directed to the webpage that the customer is intended to go to after he logs into the system.

* TEST CASE 2 – USER REGISTRATION
 •Incorrect Input: Wrong format entered in the input fields for the registrationpage.
 •Pass Criteria: An appropriate message should be generated to the user sayingthat he has entered the wrong format in the specific input field.
 •Correct Input: The correct input would be a correct format entered by thecustomer into the input fields of the registration page.
 •Pass Criteria: The pass criteria for this test case would be a successfulregistration of the customer into the Railway Reservation System website. Thesystem would log the user into the system after this.
 
* TEST CASE 3 – SEARCH AND BOOK TRAINS
•Incorrect Input: Incorrect input in this case, would be incorrect search criteriaentered or incorrect format of data entered into the data entry fields of the trainssearch and booking page.
•Pass criteria: A message has to be generated to the user indicating the wrongentry that he has made in the fields.
•Correct Input: A correct input would be entering the data into the data entryfields in a correct format.
•Pass Criteria: The pass criteria for this test case would be that the search wouldreturn valid results and then when the customer made the booking, the systemhas to generate a confirmation to the customer and indicate that an email hasbeen sent to the customer.

* TEST CASE 4 – SEARCH AND BOOK PACKAGES
 •Incorrect Input: Incorrect input in this case, would be incorrect search criteria entered or incorrect format of data entered into the data entry fields of the package CIS 895 – Railway Reservation System Test Plan 8 search and booking page. In this case, a wrong input would be an incorrect package id etc.
•Pass criteria: A message has to be generated to the user indicating the wrongentry that he has made in the fields.•Correct Input: A correct input would be entering the data into the data entryfields in a correct format.
•Pass Criteria: The pass criteria for this test case would be that the search wouldreturn valid results and then when the customer made the booking, the systemhas to generate a confirmation to the customer and indicate that an e-mail hasbeen sent to the customer PASS OR FAIL CRITERIA the test cases executed on the Railway Reservation System will pass if they meetthe specific requirements mentioned in the vision document of the project. A testcase is said to fail, if the desired functionality is not satisfied by the system.







