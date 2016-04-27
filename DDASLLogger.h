
#import <Instagram/Instagram-Structs.h>
#import <Instagram/DDAbstractLogger.h>
#import <Instagram/DDLogger.h>

@class NSString;

@interface DDASLLogger : DDAbstractLogger <DDLogger> {

	asl_object_sRef client;

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

