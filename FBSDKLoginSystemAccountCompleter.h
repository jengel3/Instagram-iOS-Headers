
#import <Instagram/FBSDKLoginCompleting.h>

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountCompleter : NSObject <FBSDKLoginCompleting> {

	FBSDKLoginCompletionParameters* _parameters;

}
-(void)completeLogIn:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithTokenString:(id)arg1 appID:(id)arg2 ;
-(id)init;
@end

