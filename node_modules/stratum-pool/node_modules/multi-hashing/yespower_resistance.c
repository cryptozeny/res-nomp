#include "yespower-1.0.1/yespower.h"

void yespower_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {
        .version = YESPOWER_1_0,
        .N = 4096,
        .r = 32,
        .pers = NULL,
        .perslen = 0
    };
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}
