#include "main.ih"

int main()
try
{
    cout << '\n';
    
    Demo test{ "'main object'" };
    
    cout << "\n|------------------ 1st Match ------------------|\n\n";
    
    try
    {
        test.pitch();
    }
    catch (Demo cth)
    {
        cout << "Caught exception\n";
        cth.snapShot();
    } 

    cout << "\n|------------------ 2nd Match ------------------|\n\n";
    
    try
    {
        test.pitch();
    }
    catch (Demo &cth)
    {
        cout << "Caught exception\n";
        cth.snapShot();
    } 

    cout << "\n|------------------ Half time ------------------|\n\n";
    
    Demo refTest{"Ref object"};
    Demo &referee = refTest;
    
    cout << "\n|------------------ 3rd Match ------------------|\n\n";
    
    try
    {
        Demo::fastBall(referee);
    }
    catch (Demo cth)
    {
        cout << "Caught exception\n";
        cth.snapShot();
    }
    
    cout << "\n|------------------ 4th Match ------------------|\n\n";

    try
    {
        Demo::fastBall(referee);
    }
    catch (Demo &cth)
    {
        cout << "Caught exception\n";
        cth.snapShot();
    }
    
    cout << "\n|------------------ Tie break ------------------|\n";
    
    try
    {
        cout << "\n|------------------ Wide ball ------------------|\n\n";
        test.pitch();
    }
    catch (Demo &cth)
    {
        cout << "Caught and rethrowing exception\n";
        cth.snapShot();
        throw;
    }

}
catch (Demo &cth)
{
    cout << "\n|---------------- Out of bounds ----------------|\n\n";
    cth.snapShot();
    try
    {
        throw;
    }
    catch (Demo &cth2)
    {
        cout << "Final catch!\n";
        cth2.snapShot();
    }
}
