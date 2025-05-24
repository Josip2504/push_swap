push_swap
A high-performance stack sorting algorithm using limited operations. Developed as part of the 42 School curriculum.

📋 Overview
push_swap is a sorting algorithm challenge designed to sort a stack of integers using a limited set of instructions with the fewest moves possible. It requires implementing efficient algorithms in C and understanding algorithmic complexity and optimization.

🚀 Features
Input parsing and error handling

Stack operations: sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr

Efficient sorting algorithms for different input sizes

Output minimal instruction sequences to sort the stack

Compliant with strict memory and behavior rules

Bonus: Interactive checker program to validate instruction sequences

⚙️ Installation
Clone the repository:

bash
Kopiraj
Uredi
git clone https://github.com/yourusername/push_swap.git
cd push_swap
Build the project:

bash
Kopiraj
Uredi
make
(Optional) Build bonus checker:

bash
Kopiraj
Uredi
make bonus
📌 Usage
Sorting Example
bash
Kopiraj
Uredi
$ ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
Error Example
bash
Kopiraj
Uredi
$ ./push_swap 0 one 2 3
Error
Benchmark Example
bash
Kopiraj
Uredi
ARG="4 67 3 87 23"
./push_swap $ARG | wc -l  # Check number of operations
./push_swap $ARG | ./checker $ARG  # Validate correctness
Bonus: Checker
bash
Kopiraj
Uredi
$ ./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
📐 Project Requirements
Mandatory
Sort stack a using the fewest number of operations

Display only the sequence of instructions

Handle errors: invalid input, duplicates, non-integers, etc.

No output if no arguments are passed

Bonus
Implement a checker program that reads and executes instructions, then validates the result

Detect and display errors or invalid instructions

📦 Project Structure
bash
Kopiraj
Uredi
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
🧠 Learning Objectives
Understand and implement sorting algorithms

Optimize for time and space complexity

Manage memory correctly in C

Follow strict coding norms

Implement robust error checking

🎯 Benchmarks
Input Size	Required for Full Score	Minimum Requirement
100 ints	< 700 operations	< 1300
500 ints	< 5500 operations	< 11500

🧪 Development
Build Commands
bash
Kopiraj
Uredi
make         # Compile push_swap
make bonus   # Compile checker
make clean   # Remove object files
make fclean  # Remove all build files
make re      # Full rebuild
🤝 Contributing
Fork the repository

Create your feature branch: git checkout -b feature/sort-optimization

Commit your changes: git commit -m 'Add a new sorting strategy'

Push to the branch: git push origin feature/sort-optimization

Open a Pull Request

Please ensure your code follows the 42 Norm and is well-tested.

📜 License
This project is licensed under the MIT License. See the LICENSE file for details.

🙏 Acknowledgments
42 School for the challenge and evaluation process

The developers of GNU Make and the C standard library

Your peers and community testers
