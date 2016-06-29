
#import <Instagram/FBFunnelSenderDelegate.h>

@class NSString;

@interface IGAnalyticsFunnelSender : NSObject <FBFunnelSenderDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)funnelNames;
-(void)reportDebug:(id)arg1 ;
-(unsigned)samplingRateForFunnel:(id)arg1 ;
-(char)isInCTScan;
-(char)isRunningInTestEnvironment;
-(id)prefixFunnelName:(id)arg1 ;
-(void)logFunnelExtra:(id)arg1 ;
-(void)reportWarning:(id)arg1 ;
@end
