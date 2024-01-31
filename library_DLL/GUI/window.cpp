#include "window.h"
using namespace GUI;
int main(int argc, char** argv) {
	window^ g = gcnew window(); 
	Application::Run(g); 

	return 0;
}
