
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCommentTextViewWithReshareProtocol.h>

@class UIView, IGGrowingTextView, UIButton, NSString;

@interface IGCommentTextViewWithReshare : UIView <IGCommentTextViewWithReshareProtocol> {

	UIView* _topLine;
	IGGrowingTextView* _growingTextView;
	UIButton* _sendButton;
	UIButton* _reshareButton;
	UIButton* _postButton;
	UIButton* _modeSwitchButton;

}

@property (nonatomic,readonly) IGGrowingTextView * growingTextView;              //@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                            //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,readonly) UIButton * reshareButton;                         //@synthesize reshareButton=_reshareButton - In the implementation block
@property (nonatomic,readonly) UIButton * postButton;                            //@synthesize postButton=_postButton - In the implementation block
@property (nonatomic,readonly) UIButton * modeSwitchButton;                      //@synthesize modeSwitchButton=_modeSwitchButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * topLine;                                 //@synthesize topLine=_topLine - In the implementation block
-(void)setupGrowingTextView;
-(IGGrowingTextView *)growingTextView;
-(void)setTextViewDelegate:(id)arg1 ;
-(void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)autocompleteTextInput;
-(UIView *)topLine;
-(float)modeSwitchButtonCenterX;
-(void)setupModeSwitchButton;
-(void)updateUIForStatus:(int)arg1 ;
-(UIButton *)modeSwitchButton;
-(UIButton *)reshareButton;
-(void)addModeSwitchButtonTappedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setPlaceholderText:(id)arg1 ;
-(UIButton *)postButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)clearText;
-(void)insertText:(id)arg1 ;
-(id)textView;
-(UIButton *)sendButton;
-(void)setupSendButton;
-(void)setButtonEnabled:(char)arg1 ;
@end

