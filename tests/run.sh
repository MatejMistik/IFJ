#!/usr/bin/env bash

#######################################################
#
#  FileName    [run.sh]
#
#  SystemName  [Script for runnin IFJ compiler]
#
#  Author      [Adam Pankuch]
#
#  Date        [23/11/2018]
#
########################################################


SUCCESS=0
ERR_LEX=1
ERR_SYN=2
ERR_SEM_UNDEF=3
ERR_SEM_TYPE=4
ERR_SEM_FUNC=5
ERR_SEM_OTHER=6
ERR_ZERO_DIV=7
ERR_INTERNAL=99


if [[ ! -f "../parser" ]]
then
    echo "../parser binary does not exists"
    exit
fi

if [[ ! -f "./ic18int" ]]
then
    echo "./ic18int binary does not exists"
    exit
fi


if [[ -f $1 ]]
then
    cat $1 | ../parser >generated.IFJcode18
    ./ic18int generated.IFJcode18
else
    echo "HELP: ./run.sh file_with_ruby_code"
fi