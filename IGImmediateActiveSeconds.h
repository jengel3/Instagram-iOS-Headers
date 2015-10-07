/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGAnalyticsImmediateActiveSecondsDelegate;
@class NSString;

@interface IGImmediateActiveSeconds : NSObject {

	unsigned _bucketForReportingActiveSeconds;
	unsigned _immediateActiveSecondsSamplingRate;
	double _lastActiveTimeSecond;
	double _lastForegroundTime;
	char _shouldComputeBucketForReportingActiveSeconds;
	NSString* _userID;
	id<IGAnalyticsImmediateActiveSecondsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsImmediateActiveSecondsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLastForegroundTime:(double)arg1 ;
-(void)setUserID:(id)arg1 ;
-(void)maybeReportActiveSecond:(double)arg1 forModule:(id)arg2 ;
-(char)shouldReportCurrentActiveSecond:(double)arg1 ;
-(void)setDelegate:(id<IGAnalyticsImmediateActiveSecondsDelegate>)arg1 ;
-(id<IGAnalyticsImmediateActiveSecondsDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

