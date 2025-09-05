# Exercise 6.
Advanced exercise
Purpose of this exercise: get some experience in using various operators

Is an unsigned value odd or even? In this exercise define a main function, reading an unsigned integral value from cin (use the extraction operator: cin >> value).

Then, provide six cout statements of the form


    cout << (expression ? "odd" : "even") << '\n';
    

(optionally you may swap the odd and even NTBSs.) Here, expression is a C++ expression determinining whether the variable that was just extracted from cin is either odd or even.

Notes:

    except for the ==, the ternary operator, and the insertion operator, operators may only once be used. So, if an expression uses the + operator, it may not be used again in any of the other expressions;
    Assignment operators (including compound assignment operators) may not be used.
    with each statement provide a short semantic comment explaining why the expression correctly performs its task;
    Assuming your layout is OK, then you must provide five expressions for a ?-rating, and six expressions for a 1-rating.
    You may only define one (size_t value) variable. To extract its value from the std. input stream use cin >> value.
    Hint: use using namespace std; before main's definition so you can avoid repeatedly having to write the std:: namespace designators. 

Submit your program. 

