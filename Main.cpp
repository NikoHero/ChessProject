


#include<glm.hpp>
#include<vec2.hpp>
#include<vec3.hpp>
#include<vec4.hpp>
#include<mat4x4.hpp>
#include<mftransform.h>
#include<gtc\type_ptr.hpp>
#include <glad/glad.h>




int main()
{
	glm::ortho(0.0f, 800.0f, 0.0f, 600.0f, 0.1f, 100.0f);

	glm::mat4 Projection = glm::perspective(35.0f, 1.0f, 0.1f, 100.0f);


	glm::mat4 model = glm::mat4(1.0f);
	model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f));

	glm::mat4 view = glm::mat4(1.0f);
	// note that we're translating the scene in the reverse direction of where we want to move
	view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));


	//
	


	

	
	//glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));



	return 0;
	
	
}