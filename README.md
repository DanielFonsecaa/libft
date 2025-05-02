<div align="center">
  
![libftm](https://github.com/user-attachments/assets/dc2e60dd-e940-4a7f-ac5c-315af3bacc16)
</div>

# Libft

Libft is a custom implementation of a standard C library. It provides commonly used functions for memory management, string manipulation, character checking, and more, all written from scratch in C.

## 📚 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Functions Implemented](#functions-implemented)
- [License](#license)

## 📝 Overview

This project is part of the 42 School curriculum and was developed to gain a deeper understanding of C programming by re-implementing some of the standard library functions.

## ✨ Features

- Reimplementation of standard libc functions
- Custom utility functions
- Strong focus on memory and pointer management
- Norm-compliant (42 School coding style)

## 🚀 Getting Started

### Prerequisites

- GCC or any C-compatible compiler
- `make`

### Installation

1. Clone the repository:
   
        git clone https://github.com/DanielFonsecaa/libft.git
        cd libft
2. Compile the library:
      
        make

🛠 Usage
After compilation, link libft.a in your C project:
      
        #include "libft.h"
Compile your program with:

        gcc -Wall -Wextra -Werror yourfile.c libft.a
