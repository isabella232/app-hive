#pragma once

#include "os.h"
#include "ux.h"
#include "glyphs.h"

#include "ui/screens/confirm_public_key.h"

#include "constants.h"
#include "globals.h"
#include "io.h"
#include "sw.h"
#include "ui/action/validate.h"
#include "common/bip32.h"
#include "common/format.h"
#include "common/wif.h"
#include "common/macros.h"
#include "transaction/decoders.h"
#include "transaction/transaction_parse.h"

/**
 * Display address on the device and ask confirmation to export.
 *
 * @return 0 if success, negative integer otherwise.
 *
 */
int ui_display_public_key(void);