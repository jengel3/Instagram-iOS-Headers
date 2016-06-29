
#import <Instagram/IGMediaOverlayAnalyticsLogging.h>

@class NSString;

@interface IGMediaOverlayAnalyticsLogger : NSObject <IGMediaOverlayAnalyticsLogging>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * analyticsModule; 
-(NSString *)analyticsModule;
-(void)logTapped;
-(void)logDragged;
@end

