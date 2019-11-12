img.png: 0_01.dat 0_1.dat 1.dat c.py
	python c.py	
0_01.dat: Ej.x
	./Ej.x 0.01 > 0_01.dat
0_1.dat: Ej.x
	./Ej.x 0.1 > 0_1.dat
1.dat: Ej.x
	./Ej.x 1 > 1.dat
Ej.x : code.cpp
	c++ code.cpp -o Ej.x
clean :
	rm -r Ej.x img.png 0_01.dat 0_1.dat 1.dat