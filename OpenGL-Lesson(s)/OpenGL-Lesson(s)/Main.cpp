#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

#include"shaderClass.h"
#include"VAO.h"
#include"VBO.h"
#include"EBO.h"


int main() {

	// Tells GLFW we are going to use it
	glfwInit();

	// Tell GLFW what Version of OpenGL we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Verticies coordinates, tells Array points of triangle
	GLfloat verticies[] = {
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f, //Lower Left Corner
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f, //Lower Right Corner
		0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f, // Upper Corner
		-0.5f / 2, 0.5f * float(sqrt(3)) / 6, 0.0f, // Innter Left
		0.5f / 2, 0.5f * float(sqrt(3)) / 6, 0.0f, // Inner Right
		0.0f, -0.5f * float(sqrt(3)) / 3, 0.0f // innder Down
	};

	GLuint indices[] = {
		0, 3, 5, // Lower Left Triangle
		3, 2, 4, // Lower Right Triangle
		5, 4, 1 // Upper Triangle
	};

	// Tell GLFW the Parameter(s) of the Window (x, y, name, null, null)
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGL Test", NULL, NULL);
	// If GLFW fails to make window return a error
	if (window == NULL) {

		std::cout << "Failed to Initiate GLFW Window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduces Window to current context
	glfwMakeContextCurrent(window);

	// Tells GLFW we are gonna use glad
	gladLoadGL();

	// tells glad how much space it can use (start-x, start-y, end-x, end-y)
	glViewport(0, 0, 800, 800);


	// Generates Shader object using shaders defualt.vert and default.frag
	Shader shaderProgram("default.vert", "default.frag");



	// Generates Vertex Array Object and binds it
	VAO VAO1;
	VAO1.Bind();

	// Generates Vertex Buffer Object and links it to vertices
	VBO VBO1(verticies, sizeof(verticies));
	// Generates Element Buffer Object and links it to indices
	EBO EBO1(indices, sizeof(indices));

	// Links VBO to VAO
	VAO1.LinkVBO(VBO1, 0);
	// Unbind all to prevent accidentally modifying them
	VAO1.Unbind();
	VBO1.Unbind();
	EBO1.Unbind();

	// tells glad what color we'd like it to use (red, green, blue, alpha)
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	// Tells windows what to do while the window is running
	while (!glfwWindowShouldClose(window)) {

		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and assign the new color to it
		glClear(GL_COLOR_BUFFER_BIT);
		// Tell OpenGL which Shader Program we want to use
		shaderProgram.Activate();
		// Bind the VAO so OpenGL knows to use it
		VAO1.Bind();
		// Draw primitives, number of indices, datatype of indices, index of indices
		glDrawElements(GL_TRIANGLES, 9, GL_UNSIGNED_INT, 0);
		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();

	}

	// Delete all objects we've created after program is done
	VAO1.Delete();
	VBO1.Delete();
	EBO1.Delete();
	shaderProgram.Delete();

	// Deletes the Window we made
	glfwDestroyWindow(window);

	// Tells GLFW we are done and it can go away.
	glfwTerminate();
	return 0;
}
