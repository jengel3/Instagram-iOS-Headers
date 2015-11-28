

@interface IGDirectSharingHelper : NSObject
+(char)isThreadNameTooLong:(id)arg1 ;
+(char)isBlankString:(id)arg1 ;
+(char)showTimestampHeaderForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(id)bfsFindSubviewOfClass:(Class)arg1 root:(id)arg2 maxLevel:(unsigned)arg3 ;
+(id)seenUsersForContent:(id)arg1 thread:(id)arg2 pendingMode:(char)arg3 ;
+(char)isThreadNameValid:(id)arg1 ;
+(char)showUsernameForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(char)showSeenstampFooterForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(id)serializedStringFromDictionary:(id)arg1 ;
+(id)userKeyForUsers:(id)arg1 ;
+(id)findKeyboardViewForTextView:(id)arg1 ;
+(id)keyboardWindow;
@end

