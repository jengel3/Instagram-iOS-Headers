

@interface FBErrorUtility : NSObject
+(char)errorIsNetworkError:(id)arg1 ;
+(char)fberrorIsErrorFromSystemSession:(id)arg1 ;
+(id)jsonDictionaryForError:(id)arg1 ;
+(char)shouldNotifyUserForError:(id)arg1 ;
+(id)fberrorForSystemPasswordChange:(id)arg1 ;
+(id)fberrorForRetry:(id)arg1 ;
+(void)fberrorGetCodeValueForError:(id)arg1 index:(unsigned)arg2 code:(int*)arg3 subcode:(int*)arg4 ;
+(int)fberrorCategoryFromError:(id)arg1 code:(int)arg2 subcode:(int)arg3 returningUserMessage:(id*)arg4 andShouldNotifyUser:(char*)arg5 ;
+(int)errorCategoryForError:(id)arg1 ;
+(id)userMessageForError:(id)arg1 ;
@end

