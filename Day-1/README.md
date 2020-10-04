# Instruction Set Architecture
An Instruction Set Architecture is a way to talk/communicate to the computer processor. The ISA describes the registers and describes each machine-level instruction. The ISA tells exactly what each instruction does and how it is encoded into bits. The ISA forms the interface between hardware and software.

The RISC-V specification is a collection of ISA options. A naming convention is used in which a particular ISA variation is given a code name telling which ISA options are present and supported. A particular hardware (chip) can be described or summarized with such a coded name, indicating which RISC-V features are implemented by the chip.

For example - RV32IMFD

* RV stands for RISC V and all code names start with RV.
* 32 indicates that registers are 32bit wide.
* RV64 - 64 bit wide registers used in 64bit machines.
* I – Basic integer arithmetic is supported.
* M – Multiply and divide are supported in hardware.
* F – Single precision (32 bit) 2loating point is supported.
* D – Double precision (64 bit) 2loating point is supported.

![OS-Hardware](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/Images/Day-1/OS-Hardware.png)
Any application that needs to be run on hardware requires certain flow to pass the information to hardware design in certain terms. Any application software written in C/C++/JAVA needs to be compiled into assembly level program (RISC-V Architecture, x86, ARM etc). This assembly level language is then converted into machine level language using assembler that needs to be implemented on Hardware.

There is another interface that is present between RISC-V archtecture and layout design that is "Hardware Description Language". We need to create a RISC-V specification using RTL (In this workshop we will be using picoRV32 cpu core). This RTL implements RISC-V specfications and finally to layout (RTL2GDS flow.). So the entire flow starts from RISC-V architecture -> RTL implementation -> RTL2GDS.

The Application software enters into a block called System Software. This System software converts the application program into the binary language. The major components of System software are OS (Operating Systems), Compiler and Assembler. The major operation of OS is to convet any application into particular assembly language program and then to binary language.

Any application in C,C++,JAVA are converted to instructions (Instruction Set Architecture/Architecture of Computer) using compiler. Now, the instructions we want depends on the type of hardware we want. For example, if your target hardware is for x86, the instruction will be for x86 only. For this project the instructions will be in RISC-V CPU core. These instructions will be in *.exe* file. These instructions acts as an abstract interface between the program (C/C++/JAVA) and the hardware. 

Now the assembler takes these instructions and convert into respective binary format (Machine level language) taht will be implemented in Hardware.

Below image is an example of Stopwatch application - 
![Stop watch example](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/Images/Day-1/Stop%20watch%20example.png)
A C program is an input to the compiler and output of the compiler is RISC-V instruction. These RISC-V instructions goes as input to the assembler and output of this is binary numbers taht enters into our hardware.
