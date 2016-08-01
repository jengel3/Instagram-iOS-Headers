
#import <Instagram/IGMediaViewerAnalyticsLogging.h>

@class NSString;

@interface IGMediaViewerAnalyticsLogger : NSObject <IGMediaViewerAnalyticsLogging>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * analyticsModule; 
-(NSString *)analyticsModule;
-(void)logTapped;
-(void)logSwipedDown;
-(void)logDragged;
@end

