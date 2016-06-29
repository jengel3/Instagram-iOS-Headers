
#import <Instagram/FBSDKErrorRecoveryAttempting.h>

@class NSString;

@interface FBSDKErrorRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recoveryAttempterFromConfiguration:(id)arg1 ;
-(void)completeRecovery:(char)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
@end

