#define MICROPY_HW_BOARD_NAME "i.MX RT1010 EVK"
#define MICROPY_HW_MCU_NAME   "MIMXRT1011DAE5A"

#define BOARD_FLASH_SIZE (16 * 1024 * 1024)

#define MICROPY_HW_LED_PINMUX  IOMUXC_GPIO_11_GPIOMUX_IO11
#define MICROPY_HW_LED_PORT    GPIO1
#define MICROPY_HW_LED_PIN     11
