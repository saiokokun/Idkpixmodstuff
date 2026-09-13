/* Generado con IR Frame Generator, herramienta independiente y no oficial. */
/* Compatible con badges PixMob. No afiliado ni respaldado por PixMob / Eski Inc. */
/* Estas tramas se calculan a partir de documentación pública del protocolo, */
/* publicada bajo MIT por James Wang y Dani Weidman. Este proyecto no captura */
/* señales ni analiza dispositivos: solo implementa lo que ya estaba documentado. */
/* Uso solo con dispositivos propios o autorizados. No usar en eventos en directo */
/* ni para interferir con espectáculos o equipos de terceros. */
/* Verifica siempre con tu propio hardware antes de confiar en la salida. */

#ifndef IR_FRAME_CODES_H
#define IR_FRAME_CODES_H

#include <stdint.h>

#define IR_FRAME_CARRIER_HZ 38381

/* rgb(224,0,240) — rgb(224, 0, 240) */
static const uint16_t ir_frame_rgb_224_0_240_0[] = {
  703, 6253, 1381, 2788, 703, 2084, 703, 703,
  703, 703, 1381, 703, 703, 2788, 703, 2084,
  1381, 703, 1381, 1381, 703, 703, 1381, 2084,
  703, 703, 1381, 703, 1381, 2084, 1381, 1381,
  703, 1381, 703, 1381, 1381, 703, 703, 49999,
};

typedef struct {
  const char *name;
  const uint16_t *timings;
  uint16_t length;
} ir_frame_code_t;

static const ir_frame_code_t ir_frame_codes[] = {
  { "rgb(224,0,240)", ir_frame_rgb_224_0_240_0, 40 },
};

#endif /* IR_FRAME_CODES_H */