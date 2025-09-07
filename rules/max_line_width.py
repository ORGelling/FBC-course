#!/usr/bin/env python3
import sys

max_width = int(sys.argv[1])
for filename in sys.argv[2:]:
    with open(filename, "r") as f:
        for i, line in enumerate(f, 1):
            if len(line.rstrip()) > max_width:
                print(f"{filename}:{i}: line too long")
                sys.exit(1)
