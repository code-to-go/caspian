import 'package:flutter/material.dart';
import 'package:yaru/yaru.dart';

class GnomeTheme {
  static YaruThemeData of(BuildContext context) {
    return SharedAppData.getValue(
      context,
      'theme',
      () => const YaruThemeData(),
    );
  }

  static void apply(
    BuildContext context, {
    YaruVariant? variant,
    bool? highContrast,
    ThemeMode? themeMode,
  }) {
    SharedAppData.setValue(
      context,
      'theme',
      GnomeTheme.of(context).copyWith(
        themeMode: themeMode,
        variant: variant,
        highContrast: highContrast,
      ),
    );
  }
}
