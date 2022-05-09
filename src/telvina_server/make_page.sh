#!/bin/sh

gcc page.c -lfcgi -o page
spawn-fcgi -p 8080 ./page
nginx -g 'daemon off;'
