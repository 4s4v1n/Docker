# Docker

![png](./images/docker.png)

## Content

This project demonstrates the ability to work with dockerfile, docker-compose and, in principle, an understanding of docker technology. There are 1 dockerfile and 1 docker-compose. An image is built using the dockerfile, with the nginx web server. Docker-compose builds 2 containers, `proxy` from the nginx image, and `telvina_server` from its own image. In the `telvina_server` container at the address http://localhost:81, a page with the inscription hello world is displayed, `proxy` proxies the address from the local machine http://localhost:80 , to port 81 inside the `telvina_server` container. That is, the call goes through a proxy server.
