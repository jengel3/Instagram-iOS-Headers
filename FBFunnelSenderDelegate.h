

@protocol FBFunnelSenderDelegate <NSObject>
@required
-(void)logFunnelExtra:(id)arg1;
-(unsigned)samplingRateForFunnel:(id)arg1;
-(id)funnelNames;
-(char)isInCTScan;
-(char)isRunningInTestEnvironment;
-(void)reportDebug:(id)arg1;
-(id)prefixFunnelName:(id)arg1;
-(void)reportWarning:(id)arg1;

@end

