

BUILD_DIR ?= build
.PHONY: build clean
default: build


SEASTAR_DIR:=$(CURDIR)/../proj5


build: $(BUILD_DIR)/Makefile
	cd $(BUILD_DIR) && make

$(BUILD_DIR)/Makefile: Makefile
	mkdir -p $(BUILD_DIR) \
	&& cmake -S . -B $(BUILD_DIR) \
	    -DCMAKE_PREFIX_PATH=$(SEASTAR_DIR)/build
	    -DCMAKE_TOOLCHAIN_FILE=$(VCPKG_HOME)/scripts/buildsystems/vcpkg.cmake

clean:	
	rm -rf $(BUILD_DIR)


run: build
	$(BUILD_DIR)/main/main
