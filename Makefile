main: main.o CellAuton.o FBCCellAuton.o PBCCellAuton.o
	g++ -o main main.o CellAuton.o FBCCellAuton.o PBCCellAuton.o

main.o: main.cxx
	g++ -c -o main.o main.cxx

CellAuton.o: CellAuton.cxx
	g++ -c -o CellAuton.o CellAuton.cxx

FBCCellAuton.o: FBCCellAuton.cxx
	g++ -c -o FBCCellAuton.o FBCCellAuton.cxx

PBCCellAuton.o: PBCCellAuton.cxx
	g++ -c -o PBCCellAuton.o PBCCellAuton.cxx

clean:
	rm *.o main
