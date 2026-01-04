#include "main.ih"

namespace {
    
    FieldVect getFieldVect(string const &line)
    {
        FieldVect row;
        istringstream iss(line);
        
        string csv;
        while (getline(iss, csv, ','))
            row.push_back(csv);
        
        return row;
    }
    
    Fields getFields(istream &in)
    {
        Fields fieldsTmp;
        string line;
        while (getline(in, line))
            fieldsTmp.push_back(getFieldVect(line));
        
        return fieldsTmp;
    }
    
    [[maybe_unused]] void showCSVs(Fields fields)       // debugging aid
    {
        for (FieldVect field : fields)
        {
            copy(field.begin(), field.end(), 
                                ostream_iterator<string>(cout, " "));
            cout << '\n';
        }
    }

    bool orderNameFirst(FieldVect const &lhs, FieldVect const &rhs)
    {
        int compareNames = strcasecmp(lhs[4].c_str(), rhs[4].c_str());
        
        if (compareNames != 0)
            return compareNames < 0;
        
        return lhs[1] > rhs[1];
    }

    bool orderDateFirst(FieldVect const &lhs, FieldVect const &rhs)
    {
        if (lhs[1] != rhs[1])
            return lhs[1] > rhs[1];
        
        return strcasecmp(lhs[4].c_str(), rhs[4].c_str()) < 0;
    }
    
    bool findAndShowDuplicates(FieldVect const &lhs, FieldVect const &rhs)
    {
        if (strcasecmp(lhs[4].c_str(), rhs[4].c_str()) != 0)
            return false;
        
        copy(rhs.begin(), rhs.end(), ostream_iterator<string>(cout, " "));
        cout << '\n';                       // technically MLR, but decently
        return true;                        // fitting as far as purpose goes
    }
}

int main()
{
    ifstream file("data.csv");
    
    Fields fields = getFields(file);
    
    cout << "fields size: " << fields.size() << '\n';
    
                                            // Initial sort to group entries
                                            // together so unique can run
    stable_sort(fields.begin(), fields.end(), orderNameFirst);

                                                    // Remove all but latest
    cout << "Removed duplicates:\n";                // entry or first listed
    fields.erase(                                   
        unique(fields.begin(), fields.end(), findAndShowDuplicates),
        fields.end()                                // ^ This ^ also prints
    );                                              // the duplicate entries

                                                    // final sort, by date 
                                                    // first and then name
    stable_sort(fields.begin(), fields.end(), orderDateFirst);

    cout << "fields size: " << fields.size() << '\n';
//  showCSVs(fields);
}

// We could also have written our algorithms like so:

//  stable_sort(fields.begin(), fields.end(), 
//      [&](FieldVect const &lhs, FieldVect const &rhs)
//      {
//          return orderNameFirst(lhs, rhs);
//      }
//  );

//  But that would simply add more clutter
