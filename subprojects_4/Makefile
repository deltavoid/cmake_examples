

BUILD_DIR ?= build
.PHONY: build clean
default: build


SUB_PROJECTS3_DIR:=../subprojects_3


build: $(BUILD_DIR)/Makefile
	cd $(BUILD_DIR) && make --trace

$(BUILD_DIR)/Makefile: Makefile
	mkdir -p $(BUILD_DIR) \
	&& cmake -S . -B $(BUILD_DIR) \
	-DCMAKE_TOOLCHAIN_FILE=$(VCPKG_HOME)/scripts/buildsystems/vcpkg.cmake 
#	\
	-DCMAKE_PREFIX_PATH=$(SUB_PROJECTS3_DIR)/build \
	-DCMAKE_MODULE_PATH=$(SUB_PROJECTS3_DIR)/cmake

clean:	
	rm -rf $(BUILD_DIR)


run: build
	$(BUILD_DIR)/main hello world
