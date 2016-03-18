
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@class IGLabel, IGCaretView;

@interface IGCameraNavigationSelectorButton : IGTapButton {

	char _isOpen;
	IGLabel* _ig_titleLabel;
	IGCaretView* _caretView;

}

@property (assign,nonatomic) char isOpen;                          //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) IGLabel * ig_titleLabel;              //@synthesize ig_titleLabel=_ig_titleLabel - In the implementation block
@property (nonatomic,retain) IGCaretView * caretView;              //@synthesize caretView=_caretView - In the implementation block
-(void)configureWithText:(id)arg1 image:(id)arg2 ;
-(void)setIg_titleLabel:(IGLabel *)arg1 ;
-(IGLabel *)ig_titleLabel;
-(void)setIsOpen:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCaretView *)caretView;
-(void)setCaretView:(IGCaretView *)arg1 ;
-(char)isOpen;
@end

