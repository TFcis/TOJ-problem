#!/usr/bin/env python3

import sys
import os

with os.fdopen(2) as f:
    Answer = float(f.readline())

try:
    Output = float(sys.stdin.readline())
except:
    exit(-1)

try:
    Ae = abs(Answer - Output)
    Re = Ae / Answer

    if Ae <= 0.000001 or Re <= 0.000001:
        exit(0)
    else:
        exit(-1)
except:
    exit(-1)
