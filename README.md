# Modern_CPP
This repository contains the code/presentation materials from a workshop about "help tools" one can use when developing c++ projects.

#### How to set up the dev evniroment
- Install Docker (https://www.docker.com/community-edition).
- Open your terminal and go to the root of this project.
- Run "docker build -t image_modern_cpp ." from the terminal.
    - That command will create an image from the Dockerfile, can take some minuts before it is done.
- When the image is done, run "docker run -it --name modern_cpp -d image_modern_cpp".
- After that, run "docker ps -a" to see which "CONTAINER ID" the "modern_cpp" container have.
- Run "docker attach <CONTAINER ID>" and you should be inside the container.
    - All the code ex are under /home/modern_cpp_ex/
- If you want to exit the container, you just type "exit" in the terminal.

#### "I don't get anything! what should I do?"
Answer my this first:
- Are you my boss?
    - YES: I will come over to your desk and fix it.
    - NO: Next question.
- Are you one of my colleges?
    - YES: Come over to my desk and we will fix it.
    - NO: Next Question.
- Do I know you?
    - YES: Buy me a beer and I can fix it.
    - NO: Well, send me an email with the problem description and maybe I can guide you in the right direction.
