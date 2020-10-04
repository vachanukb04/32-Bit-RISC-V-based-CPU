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

![RTL to Layout](https://github.com/vachanukb04/32-Bit-RISC-V-based-CPU/blob/master/Images/Day-1/RISC-V%20to%20Layout.png)
Any application that needs to be run on hardware requires certain flow to pass the information to hardware design in certain terms. Any application software written in C/C++/JAVA needs to be compiled into assembly level program (RISC-V Architecture, x86, ARM etc). This assembly level language is then converted into machine level language using assembler that needs to be implemented on Hardware.

There is another interface that is present between RISC-V archtecture and layout design that is "Hardware Description Language". We need to create a RISC-V specification using RTL (In this workshop we will be using picoRV32 cpu core). This RTL implements RISC-V specfications and finally to layout (RTL2GDS flow.). So the entire flow starts from RISC-V architecture -> RTL implementation -> RTL2GDS.
