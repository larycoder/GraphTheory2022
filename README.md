## Introduction to Graph Theory
Code for practical sessions. 
### <a name="Members" id="member"></a> Group members

* Do Duy Huy Hoang
* Pham Thi Ngoc Mai
* Doan Lien Huong
* Le Nhu Chu Hiep
* Pham Phan Bach
* Vu Khanh Huyen

### Table of Content
> [Members](#member)
>
> [Dependencies](#dependencies)
>
> [Usage](#usage)

### <a name="Dependencies" id="dependencies"></a> Dependencies
`Bash >= 4`

For those who are using bash with version older than 4, head down to [this section](#bonus). \
You can check your bash current version with `bash --version` command.

### <a name="Usage" id="usage"></a> Usage

**Building**
Before building the code, you might want to change the **path to the data file inside `ex5-Graph2Tree.cpp`** 

```bash
  chmod +x gen.sh
  bash gen.sh
```
**Usage Example**
```bash
  ./ex5-Graph2Tree.o $i
```

- Where $i is the vertex you want to find the degree.

**Usage Example**
```bash
  ./ex5-Graph2Tree.o 2
```

This script will compile all the source codes and generate objects file to be compiled into an application.

### <a name="bonus" id="bonus"></a> Bonus

For those who are using bash with version older than 4. You can compile the source code manually with `make $i` - where `$i` is the file you want to compile.
