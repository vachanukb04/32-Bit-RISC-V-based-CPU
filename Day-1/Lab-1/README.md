# Labwork for RISC-V Software toolchain

# Setting up the Environment  -Installation of Worskshop collaterals files

In order to understand RISC-V ISA and work on the implementation, you will need a GNU GCC cross-compiler for RISC-V and a simulator(Here we have used Spike simulator).For all the necessary files(compilers and toolchains) required for the workshop to be installed on your local machine, follow the below instructions:

1. Type in the following command in your terminal in the local machine

      `$git clone https://github.com/kunalg123/riscv_workshop_collaterals.git`

2. After downloading the repository , get inside the riscv_workshop_collaterals directory.

      `$cd riscv_workshop_collaterals`

3. For installation of the complete toolchain, run the "run.sh" shell script. For this, type the following command:

      `$./run.sh`

# Lab Exercise 

# C Program to find  the Sum of numbers from 1 to n

# For compiling using GNU toolchain
1. Open a file named sum_1_to_n. using leafpad editor.
      
      `$leafpad sum_1_to_n.c`
      
Write your C code for sum of numbers from 1 to n (say n =9).
Compile using GNU compiler.

      `$gcc sum1ton.c'
      
Run the compiled object file (Default object file formed with the name a.out). 

      `$./a.out`
      
A basic C program to calculate [sum of natural numbers](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/CPU%20Code/Sum1toN.c) upto a limit provided by the user.
* Command used to compile the C program is `gcc <filename.c>` or `gcc -o <binary file name> <filename.c>` and to run we use `./a.out` or `./<binary file name>`
![Compile](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/Images/Day-1/Compile.PNG)
