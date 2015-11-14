/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGEventViewerAnalyticsLogger : NSObject {

	NSString* _eventId;
	float _cachedProgress;
	float _cachedDuration;

}

@property (nonatomic,copy,readonly) NSString * eventId;              //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) float cachedProgress;                   //@synthesize cachedProgress=_cachedProgress - In the implementation block
@property (assign,nonatomic) float cachedDuration;                   //@synthesize cachedDuration=_cachedDuration - In the implementation block
-(id)initWithEventId:(id)arg1 ;
-(void)configureEvent:(id)arg1 withEventId:(id)arg2 ;
-(void)logEntryPointTapWithMediaID:(id)arg1 ;
-(void)configureEvent:(id)arg1 withDataForPost:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 ;
-(void)logEntryPointImpression;
-(void)logEntryPointTap;
-(void)logMediaImpressionForPost:(id)arg1 mediaDuration:(float)arg2 timeSpentSeconds:(float)arg3 ;
-(void)logMediaLikeForPost:(id)arg1 mediaDuration:(float)arg2 timeSpentSeconds:(float)arg3 ;
-(void)logUsernameBadgeTapForPost:(id)arg1 mediaDuration:(float)arg2 timeSpentSeconds:(float)arg3 withOption:(unsigned)arg4 ;
-(float)cachedProgress;
-(void)setCachedProgress:(float)arg1 ;
-(void)setCachedDuration:(float)arg1 ;
-(float)cachedDuration;
-(NSString *)eventId;
@end
