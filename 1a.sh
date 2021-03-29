#Program Number: 1a
#Student Name: Sai Manish Sasanapuri
#Register NUmber: IMT2018520
#Date: 25-2-2020
#Description: Creating softlink using ln -s command
#!/bin/bash

touch sfile
ln -s sfile softlink
ls -l sfile softlink
