// iris specific driconf options

DRI_CONF_SECTION_DEBUG
   DRI_CONF_DUAL_COLOR_BLEND_BY_LOCATION(false)
   DRI_CONF_DISABLE_THROTTLING(false)
   DRI_CONF_ALWAYS_FLUSH_CACHE(false)
   DRI_CONF_OPT_B(sync_compile, false, "Always compile synchronously (will cause stalls)")
   DRI_CONF_LIMIT_TRIG_INPUT_RANGE(false)
   DRI_CONF_INTEL_ENABLE_WA_14018912822(false)
   DRI_CONF_INTEL_SAMPLER_ROUTE_TO_LSC(false)
DRI_CONF_SECTION_END

DRI_CONF_SECTION_PERFORMANCE
   DRI_CONF_ADAPTIVE_SYNC(true)
   DRI_CONF_OPT_E(bo_reuse, 1, 0, 1, "Buffer object reuse",)
   DRI_CONF_OPT_B(intel_tbimr, true, "Enable TBIMR tiled rendering")
   DRI_CONF_OPT_I(generated_indirect_threshold, 100, 0, INT32_MAX, "Generated indirect draw threshold")
DRI_CONF_SECTION_END

DRI_CONF_SECTION_QUALITY
   DRI_CONF_PP_LOWER_DEPTH_RANGE_RATE()
DRI_CONF_SECTION_END