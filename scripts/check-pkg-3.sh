#! /bin/bash


export TGT_PKG_FULL="$1"
export TGT_SRC="/home/$USER/.npk/tmp/${TGT_PKG_FULL}"
export ECHOES_DIR="echoes"
export ECHOES_RECIPE="recipe-$TGT_PKG_FULL"


cd "$TGT_SRC" &&
cd "$ECHOES_DIR" &&

if [ -f $ECHOES_RECIPE ]; then
    echo -e "SUCCESS: Recipe file is found.\d"
    exit 0
else
    echo -e "ERROR: Recipe file not found.\d"
    exit 1
fi

exit 0

# end of pkg-checker-3.sh

