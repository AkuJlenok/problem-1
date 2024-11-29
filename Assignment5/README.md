# Assignment 5
## Author
Begaliev Kirill Evgenievich, 24.B82-mm <br>
st129977@student.spbu.ru , tg: @silly_kat
## Description
Transformers class with 4 subclasses: **Desipticons**(evil Transformers), **Autobots**(kind Transformers), **Insecticons**(transform into insecticons) and **Zoomorphes**(transform into animals), every Transformer have *weapon* as aggregation and *communication_module* as composition <br>

You can output transformers health by operator "<<" and compare strength of two transformers with operators "<", ">" and "==" <rb>

Class Transformers have 3 virtual methods, their definiton exists in Autobots and Decipticon (look last test in test-transformers)
## Build
#### To build project
```bash
make
```
#### To build tests
```bash
make test
```
#### To delete only created files 
```bash
make clean
```
#### To delete all created and compiled files
```bash
make cleanall
```
## Run
#### To run program (DOES NOTHING)
```bash
./transformer
```
#### To run tests
```bash 
./test-transformer
```
