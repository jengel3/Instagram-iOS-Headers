
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class IGCaretView, UILabel;

@interface IGInsightsSeeAllPostsSwitchPostTypeButton : UIButton {

	char _labelFlipped;
	IGCaretView* _caretView;
	UILabel* _mediaTypeLabel;

}

@property (nonatomic,readonly) IGCaretView * caretView;               //@synthesize caretView=_caretView - In the implementation block
@property (nonatomic,readonly) UILabel * mediaTypeLabel;              //@synthesize mediaTypeLabel=_mediaTypeLabel - In the implementation block
@property (assign,nonatomic) char labelFlipped;                       //@synthesize labelFlipped=_labelFlipped - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)flipCaret;
-(UILabel *)mediaTypeLabel;
-(char)labelFlipped;
-(void)setLabelFlipped:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCaretView *)caretView;
@end

