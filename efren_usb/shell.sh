#!/usr/bin/env bash

echo "Ingrese la IP de la victima: "
read ip
echo "Ingrese el puerto a de la victima: "
read port

netcat $ip $port
