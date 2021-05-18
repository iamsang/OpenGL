#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(void)
{
	/* Initialize GLFW Library */
	if (!glfwInit())
		return -1;

	/* We'll tell the system use OpenGL 3.3 */
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	/* Create a windowed mode window and OpenGL context */
	GLFWwindow* window;
	window = glfwCreateWindow(640, 480, "STDIO - Hello OpenGL", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Set clear color */
	glClearColor(1.0f, 0.73f, 0.2f, 1.0f);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Because we don't have any things to render, so we just clean the whole screen */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}