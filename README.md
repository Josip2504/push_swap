# push_swap

A high-performance stack sorting algorithm using limited operations. Developed as part of the 42 School curriculum.


## 📋 Overview

`push_swap` is a sorting algorithm challenge designed to sort a stack of integers using a limited set of instructions with the fewest moves possible. It requires implementing efficient algorithms in C and understanding algorithmic complexity and optimization.

## 🚀 Features

-   Input parsing and error handling
    
-   Stack operations: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`
    
-   Efficient sorting algorithms for different input sizes
    
-   Output minimal instruction sequences to sort the stack
    
-   Compliant with strict memory and behavior rules
    
-   Bonus: Interactive `checker` program to validate instruction sequences

## ⚙️ Installation

-   **Clone the repository**:
    
```bash
git clone https://github.com/yourusername/push_swap.git
cd push_swap
```
	
-   **Build the project**:

```bash
make
```

## 📌 Usage

**Sorting Example**
```bash
$ ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

**Error Example**
```bash
$ ./push_swap 0 one 2 3
Error
```

**Benchmark Example**
```bash
ARG="4 67 3 87 23"
./push_swap $ARG | wc -l  # Check number of operations
./push_swap $ARG | ./checker $ARG  # Validate correctness
```

## 📐 Project Requirements

### Mandatory

-   Sort stack `a` using the fewest number of operations
    
-   Display only the sequence of instructions
    
-   Handle errors: invalid input, duplicates, non-integers, etc.
    
-   No output if no arguments are passed


## 📦 Project Structure

```bash
.
├── includes/         # Header files
├── srcs/             # Source files
│   ├── algorithm/    # Sorting logic
│   ├── stack/        # Stack operations
│   ├── utils/        # Parsing and validation
│   ├── checker/      # Bonus checker
├── libft/            # Custom standard library (libft)
├── Makefile          # Build system
└── README.md         # Project documentation
```

## 🧠 Learning Objectives

-   Understand and implement sorting algorithms
    
-   Optimize for time and space complexity
    
-   Manage memory correctly in C
    
-   Follow strict coding norms
    
-   Implement robust error checking
    
