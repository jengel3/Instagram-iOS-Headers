

@class UIViewController;

@interface IGRetroRegistrationLoginHelper : NSObject {

	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)sendPasswordResetEmailForUser:(id)arg1 ;
-(void)displayToastMessage:(id)arg1 ;
-(void)sendLoginEmailForUsername:(id)arg1 ;
-(void)lookupEmailForUsername:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end

