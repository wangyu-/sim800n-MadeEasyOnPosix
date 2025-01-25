all:
	g++ -I. -Iverilator/include -Iobj_dir -I/opt/homebrew/include/SDL2 -D_THREAD_SAFE *.cpp obj_dir/*.cpp verilator/include/verilated.cpp  -L/opt/homebrew/lib -lSDL2 -Wl,-framework,Cocoa -std=c++11
