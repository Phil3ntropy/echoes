#! /bin/bash


export TGT_PKG_FULL="$1"
export TGT_SRC="/home/$USER/.npk/tmp/${TGT_PKG_FULL}"
export ECHOES_DIR="echoes"
export ECHOES_PKGER="pkger-info"


cd "$TGT_SRC" &&
cd "$ECHOES_DIR" &&

if [ -f $ECHOES_PKGER ]; then
    echo -e "SUCCESS: Packager file is found.\d"
    exit 0
else
    echo -e "ERROR: Packager file not found.\d"
    exit 1
fi

exit 0

# end of pkg-checker-4.sh
