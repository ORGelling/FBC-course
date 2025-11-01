#include "main.ih"

namespace {
    char const message[] = R"(Usage: program_name [OPTIONS] [ARGS...]

Options:
  -h, --help            Show this help message and exit
  -f, --filename NAME   Create or open file NAME
  -w, --write TEXT      Write TEXT to NAME
  -i, --insert INDEX    Insert TEXT at INDEX
  -r, --remove INDEX    Remove line at INDEX
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
