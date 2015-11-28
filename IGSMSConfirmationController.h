
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGCountdownTimerDelegate.h>

@protocol IGSMSConfirmationControllerDelegate;
@class NSString, IGCountdownTimer, NSTimer, UIView, IGCoreTextView, IGStringStyle;

@interface IGSMSConfirmationController : NSObject <IGCoreTextLinkHandler, IGCountdownTimerDelegate> {

	char _canResendSMS;
	id<IGSMSConfirmationControllerDelegate> _delegate;
	NSString* _phoneNumber;
	IGCountdownTimer* _countdownTimer;
	NSTimer* _resendSMSTimer;
	UIView* _coreTextViewContainer;
	IGCoreTextView* _resendCodeCoreTextView;
	IGCoreTextView* _changePhoneNumberCoreTextView;
	IGStringStyle* _stringStyle;
	float _coreTextViewWidth;
	float _coreTextViewHeight;

}

@property (assign,nonatomic,__weak) id<IGSMSConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) IGCountdownTimer * countdownTimer;                                    //@synthesize countdownTimer=_countdownTimer - In the implementation block
@property (nonatomic,retain) NSTimer * resendSMSTimer;                                             //@synthesize resendSMSTimer=_resendSMSTimer - In the implementation block
@property (nonatomic,retain) UIView * coreTextViewContainer;                                       //@synthesize coreTextViewContainer=_coreTextViewContainer - In the implementation block
@property (nonatomic,retain) IGCoreTextView * resendCodeCoreTextView;                              //@synthesize resendCodeCoreTextView=_resendCodeCoreTextView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * changePhoneNumberCoreTextView;                       //@synthesize changePhoneNumberCoreTextView=_changePhoneNumberCoreTextView - In the implementation block
@property (nonatomic,retain) IGStringStyle * stringStyle;                                          //@synthesize stringStyle=_stringStyle - In the implementation block
@property (assign,nonatomic) float coreTextViewWidth;                                              //@synthesize coreTextViewWidth=_coreTextViewWidth - In the implementation block
@property (assign,nonatomic) float coreTextViewHeight;                                             //@synthesize coreTextViewHeight=_coreTextViewHeight - In the implementation block
@property (assign,nonatomic) char canResendSMS;                                                    //@synthesize canResendSMS=_canResendSMS - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)invalidateTimer;
-(void)timer:(id)arg1 didFireWithSecondsLeft:(int)arg2 ;
-(id)initWithPhoneNumber:(id)arg1 stringStyle:(id)arg2 ;
-(void)configureWithSize:(CGSize)arg1 ;
-(UIView *)coreTextViewContainer;
-(void)sizeCoreTextViewContainerToFit;
-(void)resendTimerFired:(id)arg1 ;
-(char)canResendSMS;
-(void)setCanResendSMS:(char)arg1 ;
-(void)resetResendTimer;
-(float)coreTextViewWidth;
-(void)setCoreTextViewWidth:(float)arg1 ;
-(void)setCoreTextViewHeight:(float)arg1 ;
-(IGStringStyle *)stringStyle;
-(void)setupIGCoreTextViewsWithMaximumFontSize:(float)arg1 ;
-(IGCoreTextView *)resendCodeCoreTextView;
-(IGCoreTextView *)changePhoneNumberCoreTextView;
-(IGCountdownTimer *)countdownTimer;
-(void)invalidateResendTimer;
-(void)setupIGCoreTextViewsWithFontSize:(float)arg1 ;
-(float)coreTextViewHeight;
-(id)getResendLabelStyledStringForSecondsRemaining:(int)arg1 withFontSize:(float)arg2 ;
-(id)getResendLabelStyledStringForSecondsRemaining:(int)arg1 ;
-(NSTimer *)resendSMSTimer;
-(void)setResendSMSTimer:(NSTimer *)arg1 ;
-(void)updateResendLabel:(int)arg1 ;
-(void)setCountdownTimer:(IGCountdownTimer *)arg1 ;
-(void)setCoreTextViewContainer:(UIView *)arg1 ;
-(void)setResendCodeCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setChangePhoneNumberCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setStringStyle:(IGStringStyle *)arg1 ;
-(void)setDelegate:(id<IGSMSConfirmationControllerDelegate>)arg1 ;
-(id<IGSMSConfirmationControllerDelegate>)delegate;
-(void)resetTimer;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

