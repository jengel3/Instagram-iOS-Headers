

@class NSString, NSDictionary, NSDate;

@interface IGEventViewerAnalyticsLogger : NSObject {

	NSString* _eventId;
	NSString* _eventType;
	NSString* _sessionId;
	NSDictionary* _eventInfo;
	float _cachedProgress;
	float _cachedDuration;
	NSDate* _loadTimeBegin;

}

@property (nonatomic,retain) NSDate * loadTimeBegin;                       //@synthesize loadTimeBegin=_loadTimeBegin - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventId;                    //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionId;                  //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventInfo;              //@synthesize eventInfo=_eventInfo - In the implementation block
@property (assign,nonatomic) float cachedProgress;                         //@synthesize cachedProgress=_cachedProgress - In the implementation block
@property (assign,nonatomic) float cachedDuration;                         //@synthesize cachedDuration=_cachedDuration - In the implementation block
-(id)generateEventInfo;
-(NSDictionary *)eventInfo;
-(void)setLoadTimeBegin:(NSDate *)arg1 ;
-(NSDate *)loadTimeBegin;
-(void)configureEvent:(id)arg1 withDataForPost:(id)arg2 atIndexPath:(id)arg3 mediaDuration:(float)arg4 timeSpentSeconds:(float)arg5 ;
-(void)logVideoTimespentForPost:(id)arg1 ;
-(void)logEntryPointImpression;
-(void)logEntryPointTapWithMediaID:(id)arg1 ;
-(void)logMediaImpressionForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 ;
-(void)logMediaLikeForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 ;
-(void)logUserTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 withOption:(unsigned)arg5 ;
-(void)logUserHeaderTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 withHeaderOption:(unsigned)arg5 ;
-(void)logEventExitTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 exitSource:(id)arg5 ;
-(void)logGestureForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 gestureType:(id)arg5 ;
-(void)logImpressionForPost:(id)arg1 ;
-(void)logVideoShouldStartPlayingForPost:(id)arg1 ;
-(float)cachedProgress;
-(void)setCachedProgress:(float)arg1 ;
-(void)setCachedDuration:(float)arg1 ;
-(id)initWithEventId:(id)arg1 eventType:(id)arg2 ;
-(void)logTimeToLoadBegin;
-(void)logTimeToLoadEndSuccess:(char)arg1 ;
-(NSString *)sessionId;
-(float)cachedDuration;
-(NSString *)eventId;
-(NSString *)eventType;
@end

