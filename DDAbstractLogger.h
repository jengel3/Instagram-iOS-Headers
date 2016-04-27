
#import <Instagram/DDLogger.h>

@protocol DDLogFormatter, OS_dispatch_queue;
@class NSObject, NSString;

@interface DDAbstractLogger : NSObject <DDLogger> {

	id<DDLogFormatter> formatter;
	NSObject*<OS_dispatch_queue> loggerQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)logFormatter;
-(void)setLogFormatter:(id)arg1 ;
-(id)loggerQueue;
-(id)loggerName;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

