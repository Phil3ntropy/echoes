#! /bin/bash


export TGT_PKG_FULL="$1"
export TGT_SRC="/home/$USER/.npk/tmp/${TGT_PKG_FULL}"
export ECHOES_DIR="echoes"
export ECHOES_COOK="cook-${TGT_PKG_FULL}.sh"


cd "$TGT_SRC" &&
cd "$ECHOES_DIR" &&

if [ -f $ECHOES_COOK ]; then
    echo -e "\fSUCCESS: Cook file is found.\f"
    exit 0;
else
    echo -e "\\ERROR: Cook file not found."
    exit 1
fi

exit 0

# end of pkg-checker-2.sh

