/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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

