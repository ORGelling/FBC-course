#include "main.ih"

namespace {
    char const message[] = R"(Usage: program_name [OPTIONS] [ARGS...]

Options:
  -h, --help            Show this help message and exit
  -v, --version         Show program version and exit
  -f, --filename NAME   Create or open file NAME
  -i, --input TEXT      Write TEXT to NAME
  -r, --remove LINE     Remove line of index LINE
  -d, --display         Displays file NAME contents

Examples:
  program_name -f text.txt -i "Enter this text" -d
)";
}

int usage(int error)
{
    cout << message;
    return error;
}
