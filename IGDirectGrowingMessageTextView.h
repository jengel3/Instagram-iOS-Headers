
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGDirectGrowingMessageTextViewDelegate;
@class UIImageView, UIButton, UILabel, UITextView, NSString;

@interface IGDirectGrowingMessageTextView : UIView <UITextViewDelegate> {

	id<IGDirectGrowingMessageTextViewDelegate> _delegate;
	UIImageView* _backgroundBubbleView;
	UIButton* _messageTextViewClearButton;
	UILabel* _placeholderTextLabel;
	UITextView* _messageTextView;

}

@property (nonatomic,retain) UIImageView * backgroundBubbleView;                                      //@synthesize backgroundBubbleView=_backgroundBubbleView - In the implementation block
@property (nonatomic,retain) UIButton * messageTextViewClearButton;                                   //@synthesize messageTextViewClearButton=_messageTextViewClearButton - In the implementation block
@property (nonatomic,retain) UILabel * placeholderTextLabel;                                          //@synthesize placeholderTextLabel=_placeholderTextLabel - In the implementation block
@property (nonatomic,retain) UITextView * messageTextView;                                            //@synthesize messageTextView=_messageTextView - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectGrowingMessageTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageTextView:(UITextView *)arg1 ;
-(UITextView *)messageTextView;
-(UIButton *)messageTextViewClearButton;
-(float)fullHeightForTextViewHeight:(float)arg1 ;
-(UILabel *)placeholderTextLabel;
-(void)messageTextViewClearButtonTapped;
-(void)updateMessageTextView;
-(void)updateClearButton;
-(float)textAreaHeight;
-(void)setMessageTextViewClearButton:(UIButton *)arg1 ;
-(void)setPlaceholderTextLabel:(UILabel *)arg1 ;
-(void)startEditing;
-(UIImageView *)backgroundBubbleView;
-(void)setBackgroundBubbleView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectGrowingMessageTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGDirectGrowingMessageTextViewDelegate>)delegate;
-(float)defaultHeight;
-(char)resignFirstResponder;
-(id)text;
-(char)isFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end

