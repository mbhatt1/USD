set(PXR_PREFIX pxr/imaging)
set(PXR_PACKAGE hioOiio)

if (NOT ${PXR_BUILD_GPU_SUPPORT})
    message(STATUS
            "Skipping ${PXR_PACKAGE} because PXR_BUILD_GPU_SUPPORT is OFF")
    return()
endif()

pxr_plugin(hioOiio
    LIBRARIES
        ar
        arch
        gf
        hio
        tf
        ${OIIO_LIBRARIES}
        ${OPENEXR_LIBRARIES}

    INCLUDE_DIRS
        ${OIIO_INCLUDE_DIRS}
        ${OPENEXR_INCLUDE_DIRS}

    CPPFILES
        oiioImage.cpp
        metadata.cpp

    RESOURCE_FILES
        plugInfo.json
)
