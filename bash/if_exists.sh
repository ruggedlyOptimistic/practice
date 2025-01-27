#!/bin/bash

text="$1"

if grep -q "$text" ~/.bash_aliases; then
    echo "$text found in ~/.bash_aliases"
else
    echo "$text not found in ~/.bash_aliases"
fi

