
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGConfirmPhoneManagerDelegate.h>

@protocol IGSMSConfirmationControllerDelegate;
@class NSString, IGConfirmPhoneManager, UIView, IGCoreTextView, IGStringStyle;

@interface IGSMSConfirmationController : NSObject <IGCoreTextLinkHandler, IGConfirmPhoneManagerDelegate> {

	id<IGSMSConfirmationControllerDelegate> _delegate;
	NSString* _phoneNumber;
	int _smsResendDelay;
	IGConfirmPhoneManager* _confirmPhoneManager;
	UIView* _coreTextViewContainer;
	IGCoreTextView* _resendCodeCoreTextView;
	IGCoreTextView* _changePhoneNumberCoreTextView;
	IGStringStyle* _stringStyle;
	float _coreTextViewWidth;
	float _coreTextViewHeight;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber;                                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) int smsResendDelay;                                                 //@synthesize smsResendDelay=_smsResendDelay - In the implementation block
@property (nonatomic,retain) IGConfirmPhoneManager * confirmPhoneManager;                          //@synthesize confirmPhoneManager=_confirmPhoneManager - In the implementation block
@property (nonatomic,retain) UIView * coreTextViewContainer;                                       //@synthesize coreTextViewContainer=_coreTextViewContainer - In the implementation block
@property (nonatomic,retain) IGCoreTextView * resendCodeCoreTextView;                              //@synthesize resendCodeCoreTextView=_resendCodeCoreTextView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * changePhoneNumberCoreTextView;                       //@synthesize changePhoneNumberCoreTextView=_changePhoneNumberCoreTextView - In the implementation block
@property (nonatomic,retain) IGStringStyle * stringStyle;                                          //@synthesize stringStyle=_stringStyle - In the implementation block
@property (assign,nonatomic) float coreTextViewWidth;                                              //@synthesize coreTextViewWidth=_coreTextViewWidth - In the implementation block
@property (assign,nonatomic) float coreTextViewHeight;                                             //@synthesize coreTextViewHeight=_coreTextViewHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IGSMSConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)invalidateTimer;
-(void)continueTimer;
-(float)coreTextViewWidth;
-(void)setCoreTextViewWidth:(float)arg1 ;
-(void)setCoreTextViewHeight:(float)arg1 ;
-(IGStringStyle *)stringStyle;
-(void)setupIGCoreTextViewsWithMaximumFontSize:(float)arg1 ;
-(IGCoreTextView *)resendCodeCoreTextView;
-(IGCoreTextView *)changePhoneNumberCoreTextView;
-(void)setupIGCoreTextViewsWithFontSize:(float)arg1 ;
-(float)coreTextViewHeight;
-(void)setStringStyle:(IGStringStyle *)arg1 ;
-(id)getResendFooterWithFontSize:(float)arg1 ;
-(id)getRobocallStyledStringForSecondsRemaining:(int)arg1 withFontSize:(float)arg2 ;
-(void)sizeCoreTextViewContainerToFit;
-(void)setConfirmPhoneManager:(IGConfirmPhoneManager *)arg1 ;
-(void)setCoreTextViewContainer:(UIView *)arg1 ;
-(void)setResendCodeCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setChangePhoneNumberCoreTextView:(IGCoreTextView *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 confirmPhoneSettings:(id)arg2 stringStyle:(id)arg3 ;
-(void)configureWithSize:(CGSize)arg1 ;
-(UIView *)coreTextViewContainer;
-(int)smsResendDelay;
-(IGConfirmPhoneManager *)confirmPhoneManager;
-(void)updateRobocallFooterWithSecondsLeft:(int)arg1 ;
-(void)confirmPhoneManager:(id)arg1 didFireWithSecondsLeft:(int)arg2 ;
-(void)setDelegate:(id<IGSMSConfirmationControllerDelegate>)arg1 ;
-(id<IGSMSConfirmationControllerDelegate>)delegate;
-(NSString *)phoneNumber;
@end

