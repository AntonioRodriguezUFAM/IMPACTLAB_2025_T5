// Modulo_01_Aula_04-01.cpp

#include <fstream> // Read and Write Images
#include <iostream> // Standard Input and Output

#include <chrono> // Timer

using namespace std;
using namespace std::chrono; // Timer

int main() { // Thread

// Read Image
	ifstream Image_Read;
	Image_Read.open("images/Input.ppm");
    
  
// Write Image
	ofstream Image_write;
	Image_write.open("images/output/input_out.ppm");

	// Copy Memory
	//Image_Read >> memory>> Image_Write

	//Image Header
	// Type = P3 ou P6
	string type = "", width = "", height = "", RGBMax = "";

	//int width = 0, height = 0, RGBMax = 0, red, g, b;

    
	// Copy Memory
	//Image_Read >> memory
	Image_Read >> type;
	Image_Read >> width;
	Image_Read >> height;
	Image_Read >> RGBMax;


	

	// Copy Memory to new Image
	//memory>> Image_Write
	Image_write << type << endl;
	Image_write << width << " " << height << endl;
	Image_write << RGBMax << endl;


	// Image Body
	string red = "", green = "", blue = "";

    std::cout << "Reading Image: " << type << " " << width << " " << height << " " << RGBMax << endl;

    std::cout << "Starting to read pixel data..." << endl;
    
    // Start Timer
    auto start = high_resolution_clock::now(); // Start Timer
    
	while (!Image_Read.eof()) { // ImageRead numero Pixel = 640 * 283 = 181.120 Pixels - 20Mbytes
        // Read RGB values
        //std::cout << "Reading RGB values..." << endl;

		// Read Image and Write to Memory
		Image_Read >> red;
		Image_Read >> green;
		Image_Read >> blue;

		// Memory to Write to new Images
		Image_write << red << " " << green << " " << blue << " " ;//<< endl;
	}
    auto end = high_resolution_clock::now(); // End Timer
    
    std::cout << "Finished reading pixel data." << endl;
    
    std::cout << "End Timer Image..." << endl;
    // Calculate duration  
    auto duration = duration_cast<milliseconds>(end - start);
    std::cout << "Read and Write Images Pixel Time: " << duration.count() << " ms" << std::endl;


	//  Close Images
	Image_Read.close();
	Image_write.close();





	return 0;

}