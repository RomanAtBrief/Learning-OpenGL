/*
 * File: main.cpp
 * ---------------------
 * This is a main program that creates window using GLFW
 * Graphics Library Framework
 */

/* Preprocessor statement always satrts with # */
#include <iostream>

/*
 * Include GLEW - OpenGL Extension Wranler.
 * It responsible for loading OpenGL extensions at run-time
 */
#include <GLEW/glew.h>

/*
 * Include GLFW - Graphics Library Framework.
 * It provides a simple API for creating windows, contexts and surfaces,
 * receiving input and events.
 */
#include <GLFW/glfw3.h>

/* Main program */
int main()
{
    /* Initialize the library */
    if (!glfwInit())
    {
        /* Library initialization failed */
        std::cout << "Error, Library initialization failed." << std::endl;
    }
    else
    {
        /* Library initialization succeeded */
        std::cout << "Library initialization succeeded." << std::endl;
    }

    /* Creating window */
    GLFWwindow *window = glfwCreateWindow(640, 480, "OpenGL Window", NULL, NULL);
    if (!window)
    {
        /* Window or OpenGL context creation failed */
        std::cout << "Error creating window!" << std::endl;
        glfwTerminate();
    }
    else
    {
        /* Window and OpenGL context creation succeeded */
        std::cout << "Window and OpenGL context creation succeeded." << std::endl;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Set background window colour */
    glClearColor(0.85, 0.85, 0.85, 1);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    /* This destroys any remaining windows and releases any other resources allocated by GLFW */
    glfwTerminate();
    std::cout << "GLFW Window was closed and terminated" << std::endl;

    return 0;
}