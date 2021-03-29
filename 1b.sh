#Program Number: 1b
#Student Name: Sai Manish Sasanapuri
#Register NUmber: IMT2018520
#Date: 25-2-2020
#Description: Creating hardlink using ln command
#!/bin/bash

touch hfile
ln hfile hardlink
ls -l hfile hardlink
