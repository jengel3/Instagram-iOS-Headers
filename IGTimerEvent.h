/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGTimerEvent : IGEventAggregator {

	NSMutableDictionary* _pendingEvents;

}

@property (nonatomic,retain) NSMutableDictionary * pendingEvents;              //@synthesize pendingEvents=_pendingEvents - In the implementation block
-(void)startTimer:(id)arg1 uuid:(id)arg2 ;
-(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
-(id)keyForTimer:(id)arg1 uuid:(id)arg2 ;
-(id)processEvent:(id)arg1 ;
-(id)createEventObjectForTimer:(id)arg1 uuid:(id)arg2 ;
-(void)setPendingEvents:(NSMutableDictionary *)arg1 ;
-(void)save;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)pendingEvents;
@end

