
#import <Instagram/FBSDKLoginCompleting.h>

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountErrorCompleter : NSObject <FBSDKLoginCompleting> {

	FBSDKLoginCompletionParameters* _parameters;

}
-(void)completeLogIn:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithError:(id)arg1 permissions:(id)arg2 ;
-(id)init;
@end

