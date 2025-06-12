// Modulo_01_Aula_03_01


#include <iostream>
#include <fstream>



using namespace std;

int main () {

    // Create images

ofstream image_Write; // Create an output file stream
ifstream image_Read; // Use the standard library's ofstream class

image_Read.open("./images/Imagem.ppm"); // Open the input file for reading
image_Write.open("./images/NewImagem.ppm");


//  Image Header
// The part above is the header
// P3  # "P3" means this is a RGB color image in ASCII
// 3 2          # "3 2" is the width and height of the image in pixels
// 255          # "255" is the maximum value for each color

string Type;
string Width;
string Height;
string MaxColorValue;

string pixelR , pixelG, pixelB; // Variable to store pixel data R G B

if (image_Read.is_open()) {
    // Memory variables for the header

    image_Read >> Type; // Read the type of image (P3)
    image_Read >> Width; // Read the width of the image
    image_Read >> Height; // Read the height of the image
    image_Read >> MaxColorValue; // Read the maximum color value

    // Write the header to the new image file
    image_Write << Type << endl; // Write the type of image
    image_Write << Width << " " << Height << endl; // Write the width and height
    image_Write << MaxColorValue << endl; // Write the maximum color value

    // Read and write pixel data - Body of the image

    for (int ImgH = 0; ImgH < 70; ImgH++) {
    if (ImgH % 2 == 0) {
        for(int ImhV = 0; ImhV < 50; ImhV++) {
            //image_Input << "255 0 0 ";		// Red
        }
}

// Close the file

image_Write.close();
image_Read.close();
    

    return 0;
}