

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

