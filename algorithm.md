# Algorithm
## find parity
https://www.geeksforgeeks.org/finding-the-parity-of-a-number-efficiently/
``` C
int y = x ^ (x >> 1);
    y = y ^ (y >> 2);
    y = y ^ (y >> 4);
    y = y ^ (y >> 8);
    y = y ^ (y >> 16);  // add all bits with 2 power
```

* another didn't understand:
https://www.geeksforgeeks.org/program-to-find-parity/