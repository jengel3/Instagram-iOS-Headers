/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGCommentModelDelegate <NSObject>
@required
-(void)commentRemoveRequestStarted:(id)arg1 notify:(char)arg2;
-(void)commentPostRequestStarted:(id)arg1;
-(void)commentPostRequestFailed:(id)arg1;
-(void)commentPostRequestFinished:(id)arg1;
-(void)commentPostRequestFailedSpam:(id)arg1;
-(void)commentRemoveRequestStarted:(id)arg1;
-(void)commentRemoveRequestFailed:(id)arg1;
-(void)commentRemoveRequestFinished:(id)arg1;
-(void)commentRemoveRequestFinished:(id)arg1 notify:(char)arg2;
-(void)commentRemoveRequestFailed:(id)arg1 notify:(char)arg2;

@end

