    #define CONFIG_LV_MEM_CUSTOM_ALLOC(size) heap_caps_malloc(size, MALLOC_CAP_8BIT)
    #define CONFIG_LV_MEM_CUSTOM_FREE(ptr) heap_caps_free(ptr)
    #define CONFIG_LV_MEM_CUSTOM_REALLOC(ptr, size) heap_caps_realloc(ptr, size, MALLOC_CAP_8BIT)
    #define CONFIG_LV_TICK_CUSTOM_SYS_TIME_EXPR ((esp_timer_get_time() / 1000LL))
    #define CONFIG_LV_ASSERT_HANDLER while(1);
    #define LV_EXPORT_CONST_INT(int_value) struct _silence_gcc_warning