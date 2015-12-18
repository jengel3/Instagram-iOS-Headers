
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGRetroRegistrationSignInHelperViewControllerDelegate;
@class NSString, IGRetroRegistrationSignInHelperView, UITapGestureRecognizer;

@interface IGRetroRegistrationSignInHelperViewController : UIViewController <IGTextFieldDelegate, IGCountryCodeViewControllerDelegate, IGCoreTextLinkHandler> {

	char _isSubmitting;
	NSString* _username;
	id<IGRetroRegistrationSignInHelperViewControllerDelegate> _delegate;
	IGRetroRegistrationSignInHelperView* _helperView;
	UITapGestureRecognizer* _tapGesture;
	int _inputMode;

}

@property (nonatomic,retain) NSString * username;                                                                    //@synthesize username=_username - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationSignInHelperViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSignInHelperView * helperView;                                       //@synthesize helperView=_helperView - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                                                      //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                    //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) int inputMode;                                                                          //@synthesize inputMode=_inputMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)backgroundTapped;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(char)isSubmitting;
-(void)setIsSubmitting:(char)arg1 ;
-(void)countryCodeButtonTapped;
-(void)sendButtonTapped;
-(IGRetroRegistrationSignInHelperView *)helperView;
-(void)switchButtonTapped;
-(void)setHelperView:(IGRetroRegistrationSignInHelperView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSignInHelperViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSignInHelperViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)backButtonTapped;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillShow:(id)arg1 ;
@end

