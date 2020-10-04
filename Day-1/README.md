# Instruction Set Architecture
An Instruction Set Architecture is a way to talk/communicate to the computer processor. The ISA describes the registers and describes each machine-level instruction. The ISA tells exactly what each instruction does and how it is encoded into bits. The ISA forms the interface between hardware and software. 
The RISC-V specification is a collection of ISA options. A naming convention is used in which a particular ISA variation is given a code name telling which ISA options are present and supported. A particular hardware (chip) can be described or summarized with such a coded name, indicating which RISC-V features are implemented by the chip.

For example - RV32IMFD

RV stands for RISC V and all code names start with RV.
32 indicates that registers are 32bit wide.
RV64 - 64 bit wide registers used in 64bit machines.
RV128 - 128 bit wide registers used in 128bit machines.
I – Basic integer arithmetic is supported.
M – Multiply and divide are supported in hardware.
F – Single precision (32 bit) 2loating point is supported.
D – Double precision (64 bit) 2loating point is supported.
