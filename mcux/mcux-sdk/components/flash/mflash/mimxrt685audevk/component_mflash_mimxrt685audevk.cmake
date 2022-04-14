#Description: mflash mimxrt685audevk; user_visible: True
include_guard(GLOBAL)
message("component_mflash_mimxrt685audevk component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/mflash_drv.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_flexspi)
include(driver_cache_cache64)
include(component_mflash_common)