

@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject {

	char _enabled;
	int _activityCount;
	NSTimer* _activityIndicatorVisibilityTimer;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) char isNetworkActivityIndicatorVisible; 
@property (assign,nonatomic) int activityCount;                                                                            //@synthesize activityCount=_activityCount - In the implementation block
@property (nonatomic,retain) NSTimer * activityIndicatorVisibilityTimer;                                                   //@synthesize activityIndicatorVisibilityTimer=_activityIndicatorVisibilityTimer - In the implementation block
@property (getter=isNetworkActivityIndicatorVisible,nonatomic,readonly) char networkActivityIndicatorVisible; 
+(id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+(id)sharedManager;
-(void)networkRequestDidStart:(id)arg1 ;
-(void)networkRequestDidFinish:(id)arg1 ;
-(NSTimer *)activityIndicatorVisibilityTimer;
-(void)updateNetworkActivityIndicatorVisibility;
-(void)setActivityIndicatorVisibilityTimer:(NSTimer *)arg1 ;
-(int)activityCount;
-(void)updateNetworkActivityIndicatorVisibilityDelayed;
-(void)incrementActivityCount;
-(void)decrementActivityCount;
-(void)setActivityCount:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isNetworkActivityIndicatorVisible;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
@end

