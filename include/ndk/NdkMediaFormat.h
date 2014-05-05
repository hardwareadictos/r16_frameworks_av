/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This file defines an NDK API.
 * Do not remove methods.
 * Do not change method signatures.
 * Do not change the value of constants.
 * Do not change the size of any of the classes defined in here.
 * Do not reference types that are not part of the NDK.
 * Do not #include files that aren't part of the NDK.
 */

#ifndef _NDK_MEDIA_FORMAT_H
#define _NDK_MEDIA_FORMAT_H

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

struct AMediaFormat;
typedef struct AMediaFormat AMediaFormat;

AMediaFormat *AMediaFormat_new();
int AMediaFormat_delete(AMediaFormat*);

/**
 * Debug string. Caller must free.
 */
const char* AMediaFormat_toString(AMediaFormat*);

bool AMediaFormat_getInt32(AMediaFormat*, const char *name, int32_t *out);
bool AMediaFormat_getInt64(AMediaFormat*, const char *name, int64_t *out);
bool AMediaFormat_getFloat(AMediaFormat*, const char *name, float *out);
bool AMediaFormat_getDouble(AMediaFormat*, const char *name, double *out);
bool AMediaFormat_getSize(AMediaFormat*, const char *name, size_t *out);
/**
 * Caller must free the returned string
 */
bool AMediaFormat_getString(AMediaFormat*, const char *name, const char **out);

/**
 * XXX should these be ints/enums that we look up in a table as needed?
 */
extern const char* AMEDIAFORMAT_KEY_AAC_PROFILE;
extern const char* AMEDIAFORMAT_KEY_BIT_RATE;
extern const char* AMEDIAFORMAT_KEY_CHANNEL_COUNT;
extern const char* AMEDIAFORMAT_KEY_CHANNEL_MASK;
extern const char* AMEDIAFORMAT_KEY_COLOR_FORMAT;
extern const char* AMEDIAFORMAT_KEY_DURATION;
extern const char* AMEDIAFORMAT_KEY_FLAC_COMPRESSION_LEVEL;
extern const char* AMEDIAFORMAT_KEY_FRAME_RATE;
extern const char* AMEDIAFORMAT_KEY_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_IS_ADTS;
extern const char* AMEDIAFORMAT_KEY_IS_AUTOSELECT;
extern const char* AMEDIAFORMAT_KEY_IS_DEFAULT;
extern const char* AMEDIAFORMAT_KEY_IS_FORCED_SUBTITLE;
extern const char* AMEDIAFORMAT_KEY_I_FRAME_INTERVAL;
extern const char* AMEDIAFORMAT_KEY_LANGUAGE;
extern const char* AMEDIAFORMAT_KEY_MAX_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_MAX_INPUT_SIZE;
extern const char* AMEDIAFORMAT_KEY_MAX_WIDTH;
extern const char* AMEDIAFORMAT_KEY_MIME;
extern const char* AMEDIAFORMAT_KEY_PUSH_BLANK_BUFFERS_ON_STOP;
extern const char* AMEDIAFORMAT_KEY_REPEAT_PREVIOUS_FRAME_AFTER;
extern const char* AMEDIAFORMAT_KEY_SAMPLE_RATE;
extern const char* AMEDIAFORMAT_KEY_WIDTH;
extern const char* AMEDIAFORMAT_KEY_STRIDE;

#ifdef __cplusplus
} // extern "C"
#endif

#endif // _NDK_MEDIA_FORMAT_H
