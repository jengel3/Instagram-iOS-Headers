
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCommentTextViewProtocol.h>

@class UIImageView, IGGrowingTextView, UIButton, NSString;

@interface IGCommentTextView : UIView <IGCommentTextViewProtocol> {

	UIImageView* _backgroundView;
	IGGrowingTextView* _growingTextView;
	UIButton* _sendButton;

}

@property (nonatomic,readonly) UIImageView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) IGGrowingTextView * growingTextView;              //@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                            //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupBackgroundView;
-(void)setupGrowingTextView;
-(IGGrowingTextView *)growingTextView;
-(void)setTextViewDelegate:(id)arg1 ;
-(void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)autocompleteTextInput;
-(void)setPlaceholderText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(UIImageView *)backgroundView;
-(void)clearText;
-(void)insertText:(id)arg1 ;
-(id)textView;
-(UIButton *)sendButton;
-(void)setupSendButton;
-(void)setButtonEnabled:(char)arg1 ;
@end

