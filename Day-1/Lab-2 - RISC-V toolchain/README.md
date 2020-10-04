Now, we use the same [sum of 1 to n numbers](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/CPU%20Code/Sum1toN.c) c code and compile using RISC-V toolchain.

* Command used to compile the C program is `riscv64-unknown-elf-gcc -o1 -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c` or `riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c`.

Command info: riscv64-unknown-elf-gcc => RISC-V compiler , -Ofast => Compiler option (Various compiler options like -O1, -o1, -Ofast) , -mabi=lp64 => ABI of long int pointer , -march=rv64i => architecture-64bit , -o => output , sum_1_to_n.o => object file , sum_1_to_n.c => C program file

* To view to disassemble and view the object file in readable format,we use `riscv64-unknown-elf-objdump -d sum1ton.o` command.
* To run we use spike which is a RISC-V simulator, following is the command `spike pk sum1ton.o`.
* Spike has a debugging feature too which can be used to run it in steps, following is the command `spike -d pk sum1ton.o`.
