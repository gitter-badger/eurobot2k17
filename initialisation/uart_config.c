#include <initialisation/uart_config.h>

void usart2_config(void)
{
	/* Setup USART2 parameters. */
	usart_set_baudrate(USART2, 115200);
	usart_set_databits(USART2, 8);
	usart_set_stopbits(USART2, USART_STOPBITS_1);
	usart_set_mode(USART2, USART_MODE_TX_RX);
	usart_set_parity(USART2, USART_PARITY_NONE);
	usart_set_flow_control(USART2, USART_FLOWCONTROL_NONE);
	// TODO: Find out why doesn't the libopencm3 function work
	USART_CR3(USART2) |= USART_CR3_HDSEL;
	//usart_enable_halfduplex(USART2);
	// Oversampling

	/* Finally enable the USART. */
	usart_enable(USART2);
}

void usart3_config(void)
{
	/* Setup USART3 parameters. */
	usart_set_baudrate(USART3, 115200);
	usart_set_databits(USART3, 8);
	usart_set_stopbits(USART3, USART_STOPBITS_1);
	usart_set_mode(USART3, USART_MODE_TX_RX);
	usart_set_parity(USART3, USART_PARITY_NONE);
	usart_set_flow_control(USART3, USART_FLOWCONTROL_NONE);
	// Oversampling

	/* Finally enable the USART. */
	usart_enable(USART3);
}

void uart4_config(void)
{
	/* Setup UART4 parameters. */
	usart_set_baudrate(UART4, 115200);
	usart_set_databits(UART4, 8);
	usart_set_stopbits(UART4, USART_STOPBITS_1);
	usart_set_mode(UART4, USART_MODE_TX_RX);
	usart_set_parity(UART4, USART_PARITY_NONE);
	usart_set_flow_control(UART4, USART_FLOWCONTROL_NONE);
	// Oversampling

	/* Finally enable the USART. */
	usart_enable(USART2);
}
