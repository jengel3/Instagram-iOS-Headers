

@protocol FBFunnelSenderDelegate <NSObject>
@required
-(id)funnelNames;
-(void)reportDebug:(id)arg1;
-(unsigned)samplingRateForFunnel:(id)arg1;
-(char)isInCTScan;
-(char)isRunningInTestEnvironment;
-(id)prefixFunnelName:(id)arg1;
-(void)logFunnelExtra:(id)arg1;
-(void)reportWarning:(id)arg1;

@end

