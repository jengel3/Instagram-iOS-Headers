
#import <Instagram/FBBreakpadCrashReportProcessor.h>

@class NSString;

@interface FBBreakpadCrashReportSender : NSObject <FBBreakpadCrashReportProcessor>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)process:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

