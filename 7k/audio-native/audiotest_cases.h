/* audiotest_cases.h - native audio test application header
 *
 * Based on native pcm test application platform/system/extras/sound/playwav.c
 *
 * Copyright (C) 2008 The Android Open Source Project
 * Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef AUDIOTEST_CASE_H
#define AUDIOTEST_CASE_H

/* Mp3 Test Module Interface Definition */
int mp3play_read_params(void);
int mp3_play_control_handler(void* private_data);
void mp3play_help_menu(void);

/* AMRNB Test Module Interface Definition */
int amrnbplay_read_params(void);
int amrnb_play_control_handler(void* private_data);
void amrnbplay_help_menu(void);
int amrnbrec_read_params(void);
int amrnb_rec_control_handler(void* private_data);
void amrnbrec_help_menu(void);

/* AMRWB Test Module Interface Definition */
int amrwbplay_read_params(void);
int amrwb_play_control_handler(void *private_data);
void amrwbplay_help_menu(void);

/* PCM Test Module Interface Definition */
int pcmplay_read_params(void);
int pcm_play_control_handler(void* private_data);
void pcmplay_help_menu(void);
int pcmrec_read_params(void);
int pcm_rec_control_handler(void* private_data);
void pcmrec_help_menu(void);

#ifdef AUDIOV2
/* ADPCM Test Module Interface Definition */
int adpcmplay_read_params(void);
int adpcm_play_control_handler(void *private_data);
void adpcmplay_help_menu(void);

#endif

/* WMA Test Module Interface Definition */
int wmaplay_read_params(void);
int wma_play_control_handler(void *private_data);
void wmaplay_help_menu(void);

/* WMAPRO Test Module Interface Definition */
int wmaproplay_read_params(void);
int wmapro_play_control_handler(void *private_data);
void wmaproplay_help_menu(void);

/* QCP Test Module Interface Definition */
int qcpplay_read_params(void);
int qcp_play_control_handler(void *private_data);
void qcpplay_help_menu(void);


/* Profile Module Interface Definition */
int profile_read_params(void);
int profile_control_handler(void *private_data);
void profile_help_menu(void);

/* AAC Test Module Interface Definition */
int aacplay_read_params(void);
int aac_play_control_handler(void* private_data);
void aacplay_help_menu(void);
int aacrec_read_params(void);
int aac_rec_control_handler(void* private_data);
void aacrec_help_menu(void);

/* Voice Memo Test Module Interface Definition */
int voicememo_read_params(void);
int voicememo_control_handler(void *private_data);
void voicememo_help_menu(void);

/* SND Test Module Interface Definition */
int sndsetdev_read_params(void);
void sndsetdev_help_menu(void);
#ifdef AUDIOV2
/* Voice Enc Test Module Interface Definition */
int voiceenc_read_params(void);
int voiceenc_control_handler(void *private_data);
void voiceenc_help_menu(void);

#if defined(QC_PROP)
/* Dev Control Test Module definition */
int devctl_read_params(void);
void devctl_help_menu(void);
#endif

#endif
#endif /* AUDIOTEST_CASE_H */
