/*
 * Copyright 2013 Dominic Spill
 * Copyright 2013 Adam Stasiak
 *
 * This file is part of USB-MitM.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 * USBEndpoint.h
 *
 * Created on: Nov 6, 2013
 */
#ifndef USBENDPOINT_H_
#define USBENDPOINT_H_

#include <linux/usb/ch9.h>
#include <stdlib.h>
#include "USBDeviceProxy.h"

class USBEndpoint {
	private:
		usb_endpoint_descriptor descriptor;
		//TODO: USBDevice (and set upon creation)

	public:
		USBEndpoint(__u8* p);
		USBEndpoint(usb_endpoint_descriptor* _descriptor);
		USBEndpoint(__u8 bEndpointAddress,__u8 bmAttributes,__u16 wMaxPacketSize,__u8 bInterval);
		~USBEndpoint();
<<<<<<< HEAD
		const usb_endpoint_descriptor* get_descriptor();
		size_t get_full_descriptor_length();
		void get_full_descriptor(__u8** p);
=======
		const usb_endpoint_descriptor* getDescriptor();
		void getFullDescriptor(__u8** p);
>>>>>>> 7a7b72cec231ba1cbb14b165e6b3ab4c5721b057
		void print(__u8 tabs=0);
};

#endif /* USBENDPOINT_H_ */
