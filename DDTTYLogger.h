
#import <Instagram/DDAbstractLogger.h>
#import <Instagram/DDLogger.h>

@class NSDateFormatter, NSString;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {

	NSDateFormatter* dateFormatter;
	char* app;
	char* pid;
	unsigned long appLen;
	unsigned long pidLen;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
-(id)loggerName;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

