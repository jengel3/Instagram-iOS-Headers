/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSString, FBSession;

@interface FBViewImpressionTracker : NSObject {

	NSHashTable* _trackedImpressions;
	NSString* _eventName;
	FBSession* _session;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) FBSession * session;                      //@synthesize session=_session - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(void)logImpressionWithView:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(id)initWithEventName:(id)arg1 ;
-(FBSession *)session;
-(void)dealloc;
-(void)setSession:(FBSession *)arg1 ;
-(NSString *)eventName;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

