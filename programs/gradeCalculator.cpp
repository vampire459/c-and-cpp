#include <iostream> 

using namespace std;

int main()
{

    int grade, total, i ;

    int subjectCount;  

    do
    {
       
        cout << "enter number of subjects: ";

        cin >> subjectCount;   
    
    } while (subjectCount >=10);
    
    for ( i = 0; i < subjectCount; i++)
    {
        do
        {
            
            cout << "enter grade" << "[" << 1+i << "]" << ": ";
            cin >> grade;
        
            total = total+grade;
        }
        while (total <= 0 && total >=300);
    }

    cout << "Total scored: " << total << endl;

    return 0;   
}