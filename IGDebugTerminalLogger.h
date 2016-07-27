
#import <Instagram/DDAbstractLogger.h>
#import <Instagram/DDLogger.h>

@class NSDateFormatter, NSString;

@interface IGDebugTerminalLogger : DDAbstractLogger <DDLogger> {

	int _context;
	NSDateFormatter* _dateFormatter;
	char* _app;
	char* _pid;
	unsigned long _appLen;
	unsigned long _pidLen;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileLogContext:(int)arg1 ;
-(id)loggerName;
-(void)logMessage:(id)arg1 ;
@end

