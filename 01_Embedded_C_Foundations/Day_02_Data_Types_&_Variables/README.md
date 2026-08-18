# Lesson 2: C Data Types, Variables, and Storage Mechanics

## Overview
This project maps out the implementation of C integer data types, their storage limits, and variable tracking methods. It contrasts separate declaration syntax against inline initializations and dynamic evaluations within microcontrollers.

## Key Concepts Mastered
* Storage Sizes & Value Ranges: Analyzed signed and unsigned data boundaries, specifically using unsigned char (0 to 255) for light memory footprint optimizations.
* Variable Allocations: Verified how separate assignments, combined initialization statements, and inline print operations manipulate register parameters.
* Cross-Compiler Realities: Learned that exact primitive allocation lengths (like int or long) depend directly on target hardware compilers (e.g., XC8, GCC, armcc) rather than absolute standard size rules.
