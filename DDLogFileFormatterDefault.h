
#import <Instagram/DDLogFormatter.h>

@class NSDateFormatter, NSString;

@interface DDLogFileFormatterDefault : NSObject <DDLogFormatter> {

	NSDateFormatter* dateFormatter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

