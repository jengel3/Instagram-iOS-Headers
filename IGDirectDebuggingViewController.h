
#import <UIKit/UIViewController.h>

@class UIToolbar, UIButton, IGDirectShareRecipient, UINavigationController;

@interface IGDirectDebuggingViewController : UIViewController {

	char _isSendingMessages;
	UIToolbar* _toolbar;
	UIButton* _quickMessageButton;
	UIButton* _realtimeToggleButton;
	IGDirectShareRecipient* _recipient;
	UINavigationController* _navigationController;
	int _messageCount;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                                        //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) UIButton * quickMessageButton;                              //@synthesize quickMessageButton=_quickMessageButton - In the implementation block
@property (nonatomic,readonly) UIButton * realtimeToggleButton;                            //@synthesize realtimeToggleButton=_realtimeToggleButton - In the implementation block
@property (nonatomic,readonly) IGDirectShareRecipient * recipient;                         //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) char isSendingMessages;                                       //@synthesize isSendingMessages=_isSendingMessages - In the implementation block
@property (assign,nonatomic) int messageCount;                                             //@synthesize messageCount=_messageCount - In the implementation block
-(void)updateRealtimeButtonTitle;
-(char)isSendingMessages;
-(void)sendMessages;
-(void)setIsSendingMessages:(char)arg1 ;
-(void)setupBottomSeparator;
-(void)updateMessageButtonTitle;
-(UIButton *)quickMessageButton;
-(UIButton *)realtimeToggleButton;
-(void)didTapMessageButton:(id)arg1 ;
-(void)didTapRealtimeToggle:(id)arg1 ;
-(void)didTapPushRealtimeVC:(id)arg1 ;
-(id)initWithRecipient:(id)arg1 navigationController:(id)arg2 ;
-(IGDirectShareRecipient *)recipient;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(UINavigationController *)navigationController;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIToolbar *)toolbar;
-(int)messageCount;
-(void)setupToolbar;
-(void)sendMessage:(id)arg1 ;
-(void)setMessageCount:(int)arg1 ;
@end

