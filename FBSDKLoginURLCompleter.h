
#import <Instagram/FBSDKLoginCompleting.h>

@protocol NSObject;
@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting> {

	FBSDKLoginCompletionParameters* _parameters;
	id<NSObject> _observer;
	char _performExplicitFallback;

}
-(void)setParametersWithDictionary:(id)arg1 appID:(id)arg2 ;
-(void)setErrorWithDictionary:(id)arg1 ;
-(void)attemptBrowserLogIn:(id)arg1 ;
-(void)completeLogIn:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithURLParameters:(id)arg1 appID:(id)arg2 ;
-(id)init;
@end

