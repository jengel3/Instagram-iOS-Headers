
#import <UIKit/UIViewController.h>
#import <Instagram/IGRetroRegistrationContactPointViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>

@protocol IGRetroRegistrationContactPointViewControllerDelegate;
@class IGRetroRegistrationContactPointView, UITapGestureRecognizer, NSString;

@interface IGRetroRegistrationContactPointViewController : UIViewController <IGRetroRegistrationContactPointViewDelegate, IGCoreTextLinkHandler, IGTextFieldDelegate, IGCountryCodeViewControllerDelegate> {

	id<IGRetroRegistrationContactPointViewControllerDelegate> _delegate;
	IGRetroRegistrationContactPointView* _contactPointView;
	UITapGestureRecognizer* _tapGesture;
	int _contactPointType;
	NSString* _contactPoint;

}

@property (nonatomic,retain) IGRetroRegistrationContactPointView * contactPointView;                                 //@synthesize contactPointView=_contactPointView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                    //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) int contactPointType;                                                                   //@synthesize contactPointType=_contactPointType - In the implementation block
@property (nonatomic,copy) NSString * contactPoint;                                                                  //@synthesize contactPoint=_contactPoint - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationContactPointViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)backgroundViewTapped;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)nextButtonTapped;
-(void)contactPointView:(id)arg1 didSelectContactPointType:(int)arg2 wasFirstResponder:(char)arg3 ;
-(void)setContactPointView:(IGRetroRegistrationContactPointView *)arg1 ;
-(IGRetroRegistrationContactPointView *)contactPointView;
-(void)didTapSignInButton;
-(int)contactPointType;
-(void)registerWithEmail;
-(void)registerWithPhone;
-(char)validateEmailField:(id)arg1 ;
-(void)validateEmail:(id)arg1 ;
-(void)setContactPointType:(int)arg1 ;
-(void)countryCodeButtonTapped;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationContactPointViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationContactPointViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)contactPoint;
-(void)setContactPoint:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

