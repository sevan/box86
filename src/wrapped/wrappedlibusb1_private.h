#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(libusb_alloc_transfer, 
//GO(libusb_attach_kernel_driver, 
//GO(libusb_bulk_transfer, 
//GO(libusb_cancel_transfer, 
//GO(libusb_claim_interface, 
//GO(libusb_clear_halt, 
//GO(libusb_close, 
//GO(libusb_control_transfer, 
//GO(libusb_detach_kernel_driver, 
//GO(libusb_error_name, 
//GO(libusb_event_handler_active, 
//GO(libusb_event_handling_ok, 
//GO(libusb_exit, 
//GO(libusb_free_bos_descriptor, 
//GO(libusb_free_config_descriptor, 
//GO(libusb_free_container_id_descriptor, 
//GO(libusb_free_device_list, 
//GO(libusb_free_ss_endpoint_companion_descriptor, 
//GO(libusb_free_ss_usb_device_capability_descriptor, 
//GO(libusb_free_transfer, 
//GO(libusb_free_usb_2_0_extension_descriptor, 
//GO(libusb_get_active_config_descriptor, 
//GO(libusb_get_bos_descriptor, 
//GO(libusb_get_bus_number, 
//GO(libusb_get_config_descriptor, 
//GO(libusb_get_config_descriptor_by_value, 
//GO(libusb_get_configuration, 
//GO(libusb_get_container_id_descriptor, 
//GO(libusb_get_device, 
//GO(libusb_get_device_address, 
//GO(libusb_get_device_descriptor, 
//GO(libusb_get_device_list, 
//GO(libusb_get_device_speed, 
//GO(libusb_get_max_iso_packet_size, 
//GO(libusb_get_max_packet_size, 
//GO(libusb_get_next_timeout, 
//GO(libusb_get_parent, 
//GO(libusb_get_pollfds, 
//GO(libusb_get_port_number, 
//GO(libusb_get_port_numbers, 
//GO(libusb_get_port_path, 
//GO(libusb_get_ss_endpoint_companion_descriptor, 
//GO(libusb_get_ss_usb_device_capability_descriptor, 
//GO(libusb_get_string_descriptor_ascii, 
//GO(libusb_get_usb_2_0_extension_descriptor, 
//GO(libusb_get_version, 
//GO(libusb_handle_events, 
//GO(libusb_handle_events_completed, 
//GO(libusb_handle_events_locked, 
//GO(libusb_handle_events_timeout, 
//GO(libusb_handle_events_timeout_completed, 
//GO(libusb_has_capability, 
//GO(libusb_hotplug_deregister_callback, 
//GO(libusb_hotplug_register_callback, 
//GO(libusb_init, 
//GO(libusb_interrupt_transfer, 
//GO(libusb_kernel_driver_active, 
//GO(libusb_lock_events, 
//GO(libusb_lock_event_waiters, 
//GO(libusb_open, 
//GO(libusb_open_device_with_vid_pid, 
//GO(libusb_pollfds_handle_timeouts, 
//GO(libusb_ref_device, 
//GO(libusb_release_interface, 
//GO(libusb_reset_device, 
//GO(libusb_set_auto_detach_kernel_driver, 
//GO(libusb_set_configuration, 
//GO(libusb_set_debug, 
//GO(libusb_set_interface_alt_setting, 
//GO(libusb_setlocale, 
//GO(libusb_set_pollfd_notifiers, 
//GO(libusb_strerror, 
//GO(libusb_submit_transfer, 
//GO(libusb_try_lock_events, 
//GO(libusb_unlock_events, 
//GO(libusb_unlock_event_waiters, 
//GO(libusb_unref_device, 
//GO(libusb_wait_for_event, 
