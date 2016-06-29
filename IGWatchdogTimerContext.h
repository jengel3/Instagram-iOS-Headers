

#import <Instagram/Instagram-Structs.h>
@class NSFileManager;

@interface IGWatchdogTimerContext : NSObject {

	char _shouldRun;
	char _checked;
	NSFileManager* _fileManager;
	mutex _mutex;

}
+(id)sharedContext;
-(id)initWithFileManager:(id)arg1 ;
-(char)shouldRunInProduction;
-(void)enableWatchdogInProduction;
-(void)disableWatchdogInProduction;
@end

