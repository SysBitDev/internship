idf_component_register(
    SRCS "wifi.c"
    INCLUDE_DIRS "include"
    REQUIRES nvs_flash esp_wifi esp_event driver
)
