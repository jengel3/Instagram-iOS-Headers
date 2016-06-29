
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGGrowingTextView;

@interface IGAlbumMessageTextView : UIView {

	UIButton* _sendButton;
	IGGrowingTextView* _textView;

}

@property (nonatomic,readonly) UIButton * sendButton;                     //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,readonly) IGGrowingTextView * textView;              //@synthesize textView=_textView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)becomeFirstResponder;
-(IGGrowingTextView *)textView;
-(UIButton *)sendButton;
@end

