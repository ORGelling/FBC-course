#!/usr/bin/env python3
import sys

max_width = int(sys.argv[1])

for filename in sys.argv[2:]:
    with open(filename, "r") as fh:
        for idx, line in enumerate(fh, 1):
            if len(line.rstrip()) > max_width:
                print(f"{filename}:{idx}: line too long")
                sys.exit(1)
