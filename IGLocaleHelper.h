

@interface IGLocaleHelper : NSObject
+(void)onLocaleChanged:(id)arg1 ;
+(void)onInputModeChanged:(id)arg1 ;
+(id)localeForCurrentLanguage;
+(char)isLocale:(id)arg1 inLocaleArray:(id)arg2 ;
+(id)localeForCurrentKeyboard;
+(id)fbLocaleForCurrentLanguage;
+(char)localeIsEnglish;
+(char)keyboardLocaleIsFarEast;
+(char)localeHasSpecialCharacters;
+(char)localeIsThai;
+(char)localeIsRussian;
+(void)initialize;
@end

