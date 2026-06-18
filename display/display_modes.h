#ifdef ALTRUIST_INSIDE

#ifndef DISPLAY_MODES_H
#define DISPLAY_MODES_H

// Высокоуровневые режимы работы дисплея.
// Они мапятся на конкретные функции драйвера (Init, Init_Fast, Init_4Gray, PartialDisplay и т.п.).
enum class DisplayMode {
    CLEAN_FAST, // Clean fast update (Init_Fast + Display_Fast)
    FAST,       // Fast update (Init_Fast + Display_Fast)
    PARTIAL,    // Partial update (Init_Fast + PartialDisplay)
    GRAY_4      // 4-level grayscale (Init_4Gray + Display_4Gray)
};

#endif // DISPLAY_MODES_H

#endif

