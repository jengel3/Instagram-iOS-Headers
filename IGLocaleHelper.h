

@interface IGLocaleHelper : NSObject
+(char)localeIsRussian;
+(void)onLocaleChanged:(id)arg1 ;
+(void)onInputModeChanged:(id)arg1 ;
+(id)localeForCurrentLanguage;
+(char)isLocale:(id)arg1 inLocaleArray:(id)arg2 ;
+(id)localeForCurrentKeyboard;
+(char)localeIsEnglish;
+(char)keyboardLocaleIsFarEast;
+(char)localeHasSpecialCharacters;
+(char)localeIsThai;
+(void)initialize;
@end

