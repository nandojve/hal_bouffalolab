/*
 * Autogenerated file
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DT_BINDINGS_PINCTRL_BFLB_BL70X_PINCTRL_H_
#define DT_BINDINGS_PINCTRL_BFLB_BL70X_PINCTRL_H_

#define BFLB_PINMUX_FUN_INST_sdio                       0x0001
#define BFLB_PINMUX_FUN_INST_flash0                     0x0002
#define BFLB_PINMUX_FUN_INST_flash1                     0x0102
#define BFLB_PINMUX_FUN_INST_flash2                     0x0202
#define BFLB_PINMUX_FUN_INST_i2s                        0x0003
#define BFLB_PINMUX_FUN_INST_spi                        0x0004
#define BFLB_PINMUX_FUN_INST_i2c                        0x0006
#define BFLB_PINMUX_FUN_INST_uart0                      0x0007
#define BFLB_PINMUX_FUN_INST_uart1                      0x0107
#define BFLB_PINMUX_FUN_INST_pwm                        0x0008
#define BFLB_PINMUX_FUN_INST_cam                        0x0009
#define BFLB_PINMUX_FUN_INST_analog                     0x000a
#define BFLB_PINMUX_FUN_INST_swgpio                     0x000b
#define BFLB_PINMUX_FUN_INST_gpio                       0x000b
#define BFLB_PINMUX_FUN_INST_jtag                       0x000e
#define BFLB_PINMUX_FUN_INST_fem                        0x0010
#define BFLB_PINMUX_FUN_INST_mii                        0x0013
#define BFLB_PINMUX_FUN_INST_qdec                       0x0014

#define BFLB_PINMUX_SIGNAL_a                            0x00
#define BFLB_PINMUX_SIGNAL_blck                         0x00
#define BFLB_PINMUX_SIGNAL_b                            0x00
#define BFLB_PINMUX_SIGNAL_bclk                         0x00
#define BFLB_PINMUX_SIGNAL_bias                         0x00
#define BFLB_PINMUX_SIGNAL_cts                          0x01
#define BFLB_PINMUX_SIGNAL_ch0                          0x00
#define BFLB_PINMUX_SIGNAL_ch1                          0x00
#define BFLB_PINMUX_SIGNAL_ch2                          0x00
#define BFLB_PINMUX_SIGNAL_ch3                          0x00
#define BFLB_PINMUX_SIGNAL_ch4                          0x00
#define BFLB_PINMUX_SIGNAL_ch6                          0x00
#define BFLB_PINMUX_SIGNAL_ch7                          0x00
#define BFLB_PINMUX_SIGNAL_cha                          0x00
#define BFLB_PINMUX_SIGNAL_ch5                          0x00
#define BFLB_PINMUX_SIGNAL_chb                          0x00
#define BFLB_PINMUX_SIGNAL_cs2                          0x00
#define BFLB_PINMUX_SIGNAL_ch8                          0x00
#define BFLB_PINMUX_SIGNAL_ch9                          0x00
#define BFLB_PINMUX_SIGNAL_cs                           0x00
#define BFLB_PINMUX_SIGNAL_ch10                         0x00
#define BFLB_PINMUX_SIGNAL_ch11                         0x00
#define BFLB_PINMUX_SIGNAL_clk                          0x00
#define BFLB_PINMUX_SIGNAL_do                           0x00
#define BFLB_PINMUX_SIGNAL_di                           0x00
#define BFLB_PINMUX_SIGNAL_dp                           0x00
#define BFLB_PINMUX_SIGNAL_dm                           0x00
#define BFLB_PINMUX_SIGNAL_d0                           0x00
#define BFLB_PINMUX_SIGNAL_d1                           0x00
#define BFLB_PINMUX_SIGNAL_d3                           0x00
#define BFLB_PINMUX_SIGNAL_d2                           0x00
#define BFLB_PINMUX_SIGNAL_fs                           0x00
#define BFLB_PINMUX_SIGNAL_frame_vld                    0x00
#define BFLB_PINMUX_SIGNAL_gpio0                        0x00
#define BFLB_PINMUX_SIGNAL_gpio1                        0x00
#define BFLB_PINMUX_SIGNAL_gpio2                        0x00
#define BFLB_PINMUX_SIGNAL_gpio3                        0x00
#define BFLB_PINMUX_SIGNAL_gpio4                        0x00
#define BFLB_PINMUX_SIGNAL_line_vld                     0x00
#define BFLB_PINMUX_SIGNAL_led                          0x00
#define BFLB_PINMUX_SIGNAL_mosi                         0x00
#define BFLB_PINMUX_SIGNAL_miso                         0x00
#define BFLB_PINMUX_SIGNAL_mdc                          0x00
#define BFLB_PINMUX_SIGNAL_mdio                         0x00
#define BFLB_PINMUX_SIGNAL_out0                         0x00
#define BFLB_PINMUX_SIGNAL_out1                         0x00
#define BFLB_PINMUX_SIGNAL_pix_clk                      0x00
#define BFLB_PINMUX_SIGNAL_pix_dat0                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat1                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat2                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat3                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat4                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat5                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat6                     0x00
#define BFLB_PINMUX_SIGNAL_pix_dat7                     0x00
#define BFLB_PINMUX_SIGNAL_rts                          0x00
#define BFLB_PINMUX_SIGNAL_rx                           0x03
#define BFLB_PINMUX_SIGNAL_ref_clk                      0x00
#define BFLB_PINMUX_SIGNAL_rxd0                         0x00
#define BFLB_PINMUX_SIGNAL_rxd1                         0x00
#define BFLB_PINMUX_SIGNAL_rxerr                        0x00
#define BFLB_PINMUX_SIGNAL_rx_dv                        0x00
#define BFLB_PINMUX_SIGNAL_scl                          0x00
#define BFLB_PINMUX_SIGNAL_sda                          0x00
#define BFLB_PINMUX_SIGNAL_ss                           0x00
#define BFLB_PINMUX_SIGNAL_sclk                         0x00
#define BFLB_PINMUX_SIGNAL_tx                           0x02
#define BFLB_PINMUX_SIGNAL_tms                          0x00
#define BFLB_PINMUX_SIGNAL_tdi                          0x00
#define BFLB_PINMUX_SIGNAL_txd0                         0x00
#define BFLB_PINMUX_SIGNAL_tck                          0x00
#define BFLB_PINMUX_SIGNAL_txd1                         0x00
#define BFLB_PINMUX_SIGNAL_tdo                          0x00
#define BFLB_PINMUX_SIGNAL_tx_en                        0x00

#endif /* DT_BINDINGS_PINCTRL_BFLB_BL70X_PINCTRL_H_ */
