# Target to compile the object file
add_diff: add_diff.o
	g++ add_diff.o -o add_diff.exe

# Target to compile the C++ program
add_diff.o: add_diff.cpp
	g++ -c add_diff.cpp -o add_diff.o

# Target to run the program (interactively)
run: add_diff
	./add_diff.exe

# Target to compile the object Test file
add_diffTest: add_diffTest.o
	g++ add_diffTest.o -o add_diffTest.exe

# Target to compile the C++ Test program
add_diffTest.o: add_diffTest.cpp
	g++ -c add_diffTest.cpp -o add_diffTest.o

# Target to run the Test program
test: add_diffTest
	./add_diffTest.exe

# Target to clean up compiled files
clean:
	rm -f add_diff.o add_diffTest.o add_diff.exe add_diffTest.exe
