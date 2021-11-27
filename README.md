# Home Assistant RC-Socket Control

This repository contains the documentation and code for building a

It uses the following:
-  Wemos D1 mini pro (ESP8266)
-  433 MHz radio - transmitter and receiver module
-  BMP180 Barometric air pressure and temperature sensor
-  [ESPHome](https://esphome.io)
-  [RC-Switch](https://github.com/sui77/rc-switch)

## PCB

The board was manufactured here:
https://aisler.net/p/YNNSZLZG

## Flashing a NodeMCU

1. Provide a `secrets.yaml` file using `secrets.yaml.example` as a guideline
2. Clone this repository, `cd` into its sub directory `ESPHome`
3. Connect a NodeMCU to your computer using a Micro USB cable
4. Flash the NodeMCU using the following command or one of [ESPHome](https://esphome.io)'s own Getting Started guides:

```bash
docker run --rm -v ${PWD}:/config -it esphome/esphome run livingroom.yaml
```

## The wiring and soldering part

schema and layout:

![Schema](/Board/schema.png)
![Board](/Board/board.png)
