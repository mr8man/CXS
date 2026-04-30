#ifndef CPT_BOOTLOADER_H
#define CPT_BOOTLOADER_H

#include <cstdio>
#include "Cpt_U16.hpp"
#include "Cpt_U8.hpp"

struct Bootloader {
    int protocol_number;
    int protocol_source;
    int protocol_version;
    int protocol_legacy_version;
};

inline int kmain() {
    Bootloader bootloader = {
        CPT_VALIDATION_PROTOCOL_NUMBER_KEY,
        CPT_VALIDATION_PROTOCOL_SOURCE_KEY,
        CPT_U16_VALIDATION_PROTOCOL_VERSION_KEY,
        CPT_U8_VALIDATION_PROTOCOL_VERSION_KEY
    };

    int valid =
        (bootloader.protocol_number == CPT_VALIDATION_PROTOCOL_NUMBER_KEY) &&
        (bootloader.protocol_source == CPT_VALIDATION_PROTOCOL_SOURCE_KEY) &&
        (
            bootloader.protocol_version == CPT_U16_VALIDATION_PROTOCOL_VERSION_KEY ||
            bootloader.protocol_legacy_version == CPT_U8_VALIDATION_PROTOCOL_VERSION_KEY
        );

    if (valid) {
        printf("Bootloader validation successful! Protocol Exit Number: 0\n");
    } else {
        printf("Bootloader validation failed! Protocol Exit Number: 1\n");
    }

    return valid ? 0 : 1;
}

#endif
