

@interface IGBadStateTracker : NSObject {

	char _tracking;
	char _backgroundedWhileTracking;

}

@property (assign) char tracking;                               //@synthesize tracking=_tracking - In the implementation block
@property (assign) char backgroundedWhileTracking;              //@synthesize backgroundedWhileTracking=_backgroundedWhileTracking - In the implementation block
+(void)initialize;
+(id)sharedTracker;
-(void)appBecameActive;
-(void)appBackgrounded;
-(char)backgroundedWhileTracking;
-(void)setBackgroundedWhileTracking:(char)arg1 ;
-(void)beginTracking;
-(void)dealloc;
-(id)init;
-(void)setTracking:(char)arg1 ;
-(void)endTracking;
-(char)tracking;
@end

