/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BFTask;

@interface BFTaskCompletionSource : NSObject {

	BFTask* _task;

}

@property (nonatomic,retain) BFTask * task;              //@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(char)trySetResult:(id)arg1 ;
-(char)trySetError:(id)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(void)setTask:(BFTask *)arg1 ;
-(void)cancel;
-(id)init;
-(BFTask *)task;
-(void)setResult:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setException:(id)arg1 ;
@end

