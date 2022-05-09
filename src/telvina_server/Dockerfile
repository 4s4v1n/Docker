FROM nginx:latest

COPY page.c /server/
COPY nginx.conf /etc/nginx/nginx.conf
COPY make_page.sh /server/

RUN apt-get update && \
    apt-get install -y gcc  \
    make \
    spawn-fcgi \
    libfcgi-dev && \
    /etc/init.d/nginx start && \
    useradd -d /home/telvina -m -s /bin/bash telvina && \
    chown -R telvina:telvina /server && chmod -R 755 /server && \
    chown -R telvina:telvina /etc/nginx/conf.d && \
    touch /var/run/nginx.pid && \
    chown -R telvina:telvina /var/run/nginx.pid && \ 
    chmod u-s usr/bin/gpasswd && \
    chmod u-s bin/mount && \
    chmod u-s bin/su && \
    chmod g-s usr/bin/chage && \
    chmod u-s usr/bin/chsh && \
    chmod u-s usr/bin/newgrp && \
    chmod u-s usr/bin/passwd && \
    chmod g-s usr/bin/wall && \
    chmod u-s usr/bin/chfn && \
    chmod g-s sbin/unix_chkpwd && \
    chmod u-s bin/umount && \
    chmod g-s usr/bin/expiry && \
    chown -R telvina:telvina /var/log/nginx && \
    chmod -R 755 /var/log/nginx && \
    rm -rf /var/lib/apt/lists

WORKDIR /server/

USER telvina

ENTRYPOINT ["./make_page.sh"]

HEALTHCHECK --interval=5m --timeout=3s \
    CMD curl -f http://localhost/ || exit 1