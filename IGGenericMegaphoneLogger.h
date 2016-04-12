

@protocol IGGenericMegaphoneLogger
@required
-(void)logMegaphoneWasSeen:(id)arg1;
-(void)logMegaphoneDismissed:(id)arg1;
-(void)logMegaphone:(id)arg1 tappingButton:(id)arg2;
-(void)logMegaphoneButtonTapped:(id)arg1 withReason:(id)arg2;
-(void)logMegaphoneButtonTapped:(id)arg1;

@end

