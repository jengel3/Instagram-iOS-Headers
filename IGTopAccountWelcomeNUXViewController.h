
#import <Instagram/IGViewController.h>
#import <Instagram/IGTopAccountWelcomeNUXViewDelegate.h>

@protocol IGTopAccountWelcomeNUXViewControllerDelegate;
@class IGTopAccountWelcomeNUXView, IGTopAccountWelcomeNUXService, IGInsightsLoggingHelper, NSString;

@interface IGTopAccountWelcomeNUXViewController : IGViewController <IGTopAccountWelcomeNUXViewDelegate> {

	char _didAcceptTermsAndConditions;
	id<IGTopAccountWelcomeNUXViewControllerDelegate> _delegate;
	IGTopAccountWelcomeNUXView* _welcomeNUXView;
	IGTopAccountWelcomeNUXService* _service;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGTopAccountWelcomeNUXView * welcomeNUXView;                                   //@synthesize welcomeNUXView=_welcomeNUXView - In the implementation block
@property (nonatomic,readonly) IGTopAccountWelcomeNUXService * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGInsightsLoggingHelper * loggingHelper;                                     //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) char didAcceptTermsAndConditions;                                              //@synthesize didAcceptTermsAndConditions=_didAcceptTermsAndConditions - In the implementation block
@property (assign,nonatomic,__weak) id<IGTopAccountWelcomeNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setWelcomeNUXView:(IGTopAccountWelcomeNUXView *)arg1 ;
-(IGTopAccountWelcomeNUXView *)welcomeNUXView;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setDidAcceptTermsAndConditions:(char)arg1 ;
-(void)showNetworkError:(id)arg1 ;
-(char)didAcceptTermsAndConditions;
-(void)didAcceptTermsAndConditionsWithWelcomeNUXView:(id)arg1 ;
-(void)welcomeNUXView:(id)arg1 didTapDataPolicyWithURL:(id)arg2 ;
-(id)initWithLoggingHelper:(id)arg1 ;
-(void)setDelegate:(id<IGTopAccountWelcomeNUXViewControllerDelegate>)arg1 ;
-(id<IGTopAccountWelcomeNUXViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGTopAccountWelcomeNUXService *)service;
@end

