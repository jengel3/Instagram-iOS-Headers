

@interface IGConfirmPhoneSettings : NSObject {

	char _robocallEnabled;
	int _smsResendDelay;
	int _numSMSResendsBeforeRobocall;
	int _robocallDelay;

}

@property (assign,nonatomic) int smsResendDelay;                           //@synthesize smsResendDelay=_smsResendDelay - In the implementation block
@property (assign,nonatomic) int numSMSResendsBeforeRobocall;              //@synthesize numSMSResendsBeforeRobocall=_numSMSResendsBeforeRobocall - In the implementation block
@property (assign,nonatomic) char robocallEnabled;                         //@synthesize robocallEnabled=_robocallEnabled - In the implementation block
@property (assign,nonatomic) int robocallDelay;                            //@synthesize robocallDelay=_robocallDelay - In the implementation block
-(id)initWithSMSResendDelay:(int)arg1 numSMSResendsBeforeRobocall:(int)arg2 robocallDelay:(int)arg3 robocallEnabled:(char)arg4 ;
-(void)setSmsResendDelay:(int)arg1 ;
-(int)numSMSResendsBeforeRobocall;
-(void)setNumSMSResendsBeforeRobocall:(int)arg1 ;
-(char)robocallEnabled;
-(void)setRobocallEnabled:(char)arg1 ;
-(int)robocallDelay;
-(void)setRobocallDelay:(int)arg1 ;
-(int)smsResendDelay;
-(id)initWithDictionary:(id)arg1 ;
@end

