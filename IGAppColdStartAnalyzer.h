

@class NSMutableIndexSet;

@interface IGAppColdStartAnalyzer : NSObject {

	char _hasLoggedQuiescentEvent;
	NSMutableIndexSet* _startupSources;
	double _appLaunchTimestamp;

}

@property (assign,nonatomic) double appLaunchTimestamp;                       //@synthesize appLaunchTimestamp=_appLaunchTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * startupSources;              //@synthesize startupSources=_startupSources - In the implementation block
@property (assign,nonatomic) char hasLoggedQuiescentEvent;                    //@synthesize hasLoggedQuiescentEvent=_hasLoggedQuiescentEvent - In the implementation block
+(void)initializeWithAppLaunchTimestamp:(double)arg1 ;
+(id)sharedInstance;
-(void)setAppLaunchTimestamp:(double)arg1 ;
-(void)appColdStartEventFinished:(id)arg1 ;
-(char)hasLoggedQuiescentEvent;
-(NSMutableIndexSet *)startupSources;
-(void)handleColdStartEventFinishedForSource:(int)arg1 elapsedTime:(double)arg2 ;
-(void)logAppQuiescentEvent:(double)arg1 ;
-(double)appLaunchTimestamp;
-(void)setHasLoggedQuiescentEvent:(char)arg1 ;
-(void)setStartupSources:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didTimeout;
@end

