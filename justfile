build:
    cp -r main qmk_firmware/keyboards/voyager/keymaps/
    cd qmk_firmware && make voyager:main
    mv qmk_firmware/voyager_main.bin .
    rm -r qmk_firmware/keyboards/voyager/keymaps/main

clean:
    cd qmk_firmware && make clean
    rm voyager_main.bin

distclean:
    cd qmk_firmware && make distclean
    rm voyager_main.bin
