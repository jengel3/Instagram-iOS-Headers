
@class NSString;


@protocol IGMediaViewerAnalyticsLogging <NSObject>
@property (nonatomic,readonly) NSString * analyticsModule; 
@required
-(NSString *)analyticsModule;
-(void)logTapped;
-(void)logDragged;

@end

