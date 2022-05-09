# Docker

![png](./images/docker.png)

## Содержание

В данном проекте продемонстрировано умение работы с dockerfile, docker-compose и впринципе понимание технологии docker. Имеется 1 dockerfile и 1 docker-compose. С помощью dockerfile собирается образ, с web-сервером nginx. С помощью docker-compose собираются 2 контейнера, `proxy` из образа nginx, и `telvina_server` из собственного образа. В контейнере `telvina_server` по адресу http://localhost:81 отображается страница с надписью hello world, `proxy` проксирует адрес с локальной машины http://localhost:80 , на 81 порт внутри контейнера `telvina_server`. То есть обращение идет через прокси сервер.
