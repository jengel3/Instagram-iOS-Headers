
#import <Instagram/DDFileLogger.h>

@interface IGFileLogger : DDFileLogger {

	int _dedicatedLogContext;

}

@property (nonatomic,readonly) int dedicatedLogContext;              //@synthesize dedicatedLogContext=_dedicatedLogContext - In the implementation block
+(id)logsDirectoryWithContext:(int)arg1 ;
-(int)dedicatedLogContext;
-(id)initWithLogContext:(int)arg1 ;
-(void)logMessage:(id)arg1 ;
@end

