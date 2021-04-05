#! /bin/bash


export TGT_PKG_FULL="$1"
export TGT_SRC="/home/$USER/.npk/tmp/${TGT_PKG_FULL}"
export ECHOES_DIR="echoes"

cd "$TGT_SRC" &&

if [ -d $ECHOES_DIR ]; then
    echo -e "SUCCESS: Echoes directory is found.\d"
    exit 0	
else
    echo -e "ERROR: Echoes directory not found.\d"
    exit 1
fi

exit 0

# end of check-pkg-1.sh
