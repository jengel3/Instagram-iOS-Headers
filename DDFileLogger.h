
#import <Instagram/DDAbstractLogger.h>
#import <Instagram/DDLogger.h>

@protocol DDLogFileManager;
@class DDLogFileInfo, NSFileHandle, NSTimer, NSString;

@interface DDFileLogger : DDAbstractLogger <DDLogger> {

	id<DDLogFileManager> logFileManager;
	DDLogFileInfo* currentLogFileInfo;
	NSFileHandle* currentLogFileHandle;
	NSTimer* rollingTimer;
	unsigned long long maximumFileSize;
	double rollingFrequency;

}

@property (assign) unsigned long long maximumFileSize; 
@property (assign) double rollingFrequency; 
@property (nonatomic,readonly) id<DDLogFileManager> logFileManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggerName;
-(id)initWithLogFileManager:(id)arg1 ;
-(void)maybeRollLogFileDueToSize;
-(void)maybeRollLogFileDueToAge:(id)arg1 ;
-(void)rollLogFileNow;
-(void)scheduleTimerToRollLogFileDueToAge;
-(id)currentLogFileInfo;
-(id)currentLogFileHandle;
-(unsigned long long)maximumFileSize;
-(void)setMaximumFileSize:(unsigned long long)arg1 ;
-(double)rollingFrequency;
-(void)setRollingFrequency:(double)arg1 ;
-(void)rollLogFile;
-(id<DDLogFileManager>)logFileManager;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)logMessage:(id)arg1 ;
@end

