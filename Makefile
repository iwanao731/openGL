# Makefile
sample: sample.cpp
	gcc -o sample sample.cpp -framework GLUT -framework OpenGL -Wno-deprecated
clean:
	rm -f sample