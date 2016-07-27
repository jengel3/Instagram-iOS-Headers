
#import <Instagram/IGDirectInboxEnterThreadLogging.h>

@class NSString;

@interface IGDirectPendingInboxAnalyticsLogger : NSObject <IGDirectInboxEnterThreadLogging>

@property (nonatomic,readonly) NSString * analyticsModule; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)logDidEnterThreadFromInboxAtIndex:(int)arg1 ;
-(void)logAllowButtonTapped;
-(void)logDeclineButtonTapped;
-(void)logAllowConfirmWithSelectedThreadsCount:(unsigned)arg1 selectableThreadsCount:(unsigned)arg2 allModeUsed:(char)arg3 ;
-(void)logDeclineConfirmWithSelectedThreadsCount:(unsigned)arg1 selectableThreadsCount:(unsigned)arg2 allModeUsed:(char)arg3 ;
-(void)logAllowSwipedButtonTapped;
-(void)logDeclineSwipedButtonTapped;
@end

