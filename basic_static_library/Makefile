

BUILD_DIR := build_release
.PHONY: run build


run: build
	$(BUILD_DIR)/hello_binary

build: $(BUILD_DIR)
	cd $(BUILD_DIR) && make 

$(BUILD_DIR):
	mkdir $(BUILD_DIR) && cd $(BUILD_DIR) && cmake .. 

clean:
	rm -rf $(BUILD_DIR)