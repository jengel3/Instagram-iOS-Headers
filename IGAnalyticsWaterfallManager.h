

@class IGAnalyticsWaterfall;

@interface IGAnalyticsWaterfallManager : NSObject {

	IGAnalyticsWaterfall* _currentCameraWaterfall;

}

@property (nonatomic,retain) IGAnalyticsWaterfall * currentCameraWaterfall;              //@synthesize currentCameraWaterfall=_currentCameraWaterfall - In the implementation block
+(id)sharedInstance;
-(void)setCurrentCameraWaterfall:(IGAnalyticsWaterfall *)arg1 ;
-(id)startNewWaterfall:(int)arg1 withEntryPoint:(int)arg2 experimentGroupName:(id)arg3 ;
-(IGAnalyticsWaterfall *)currentCameraWaterfall;
@end

