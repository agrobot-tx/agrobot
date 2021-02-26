# Instructions to setup the docker simulation

1. Clone this folder to your local PC
2. Make sure that docker is installed (https://docs.docker.com/engine/install/ubuntu/), and you are able to run docker without sudo priveleges (https://docs.docker.com/engine/install/linux-postinstall/).
3. Install Rocker: https://github.com/osrf/rocker
4. (optional) if you have Nvidia videocard, Install nvidia-docker 2: https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker

# To run
1. go to the docker folder in your terminal `cd docker`
2. build the docker image `docker build . -t open_manipulator`
3. Run the GUI connector with rocker with:
**Nvidia** `rocker --nvidia --x11 open_manipulator`
**other** `rocker --devices /dev/dri/card0 --x11 open_manipulator`

# Working with single command line
Because you run all in one terminal, make sure you type a `&` after each command, so for example: `roscore &`
