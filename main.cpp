#include"MainWindow.h"

int main(int argc, char* argv[]) {
	MainWindow window;
	while(window.isOpen())
		window.render();
	return 0;
}