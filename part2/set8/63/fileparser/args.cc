#include "fileparser.ih"

    // by 

void FileParser::args()             // user should provide correct files
{                                   // we should not need to check them
    string nextFile;
    for (size_t idx = 0; idx != Options::instance().nArgs(); ++idx)
        d_files.push(Options::instance()(idx));
}                   
                    //nextFile = Options::instance()(idx);
                    //string ext = fs::path(nextFile).extension();
                    //if (ext == ".cc" or ext == ".cpp" or ext == ".cxx")
                    //    d_files.push(nextFile);
