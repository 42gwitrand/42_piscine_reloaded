#!/bin/sh
ifconfig | grep -E "((\w+){2}:){5}\w+" | cut -c 8-24
