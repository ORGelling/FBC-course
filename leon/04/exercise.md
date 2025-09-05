# Exercise 4.
Basic exercise
Purpose of this exercise: learn to use Raw String Literals

The following example shows how several NTBSs, and some character constants are inserted into the output stream.

Remove the NTBSs and transform them into a single Raw String Literal (RSL) (assume header iostream has been included). The output of the program must stay the same.


    std::cout << "^\\s+Encryption key:(\\w+)"        << '\n' << 
                 "^\\s+Quality=(\\d+)"               << '\n' <<
                 "^\\s+E?SSID:\"([[:print:]]+)\""    << '\n' <<
                 "^\\s+ssid=\"([[:print:]]+)\""      << '\n';

Submit your implementation as a working C++ program. Also submit the output it produces.

Hints:

    The insertion operator should only be used once.
    As outlined in the hints and tips: define raw string literals outside of your main function body, and use the raw string's variable name in the cout statement.
    When solving the exercise you'll notice that you won't be able to use the R"(...)" form of the RSLs. Formulate (submit) a rule telling you when this form can and cannot be used. 

