# Image_processor

```
# Image Processing using OpenCV

This project is a simple image processing application that uses OpenCV in C++. The application reads an input image and applies various filters and transformations, such as grayscale, Gaussian blur, and edge detection using the Canny algorithm.

## Prerequisites

Before you can run the project, make sure you have the following software installed on your system:

- OpenCV: You can follow the installation guide from [OpenCV's official website](https://docs.opencv.org/master/d7/d9f/tutorial_mac_install.html).

## Usage

1. Clone the repository:

```
git clone https://github.com/Marlvin12/image_processor.git
```

2. Change to the project directory:

```
cd image-processing-opencv
```

3. Compile the project:

```
g++ image_processing.cpp -o image_processing `pkg-config --cflags --libs opencv4`
```

4. Place an input image named `input.jpg` in the project directory.

5. Run the application:

```
./image_processing
```

The application will process the input image and save the grayscale, blurred, and edge-detected images as `output_gray.jpg`, `output_blurred.jpg`, and `output_edge.jpg`, respectively. It will also display the input and processed images in separate windows.

Press any key to close the windows.


```
